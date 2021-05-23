/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink;

@protocol SKUIDynamicBarAnimatorDelegate;

__attribute__((visibility("hidden")))
@interface SKUIDynamicBarAnimator : NSObject

{
    double _topBarHeightForState[2];
    double _bottomBarOffsetForState[2];
    _Bool _dragging;
    CADisplayLink *_displayLink;
    double _targetTopBarHeight;
    double _unroundedTopBarHeight;
    double _lastUnroundedTopBarHeight;
    _Bool _didHideBarsByMoving;
    _Bool _didHideOrShowBarsExplicitly;
    double _lastOffset;
    _Bool _inSteadyState;
    long long _state;
    double _topBarHeight;
    double _bottomBarOffset;
    double _minimumTopBarHeight;
    double _maximumBottomBarOffset;
    id <SKUIDynamicBarAnimatorDelegate> _delegate;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long targetState;
@property (nonatomic, readonly) double topBarHeight;
@property (nonatomic, readonly) double bottomBarOffset;
@property (nonatomic) double minimumTopBarHeight;
@property (nonatomic) double maximumBottomBarOffset;
@property (weak, nonatomic) id <SKUIDynamicBarAnimatorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_displayLinkFired:(id)arg1;
- (void)_updateOutputs;
- (_Bool)canTransitionToState:(long long)arg1;
- (void)attemptTransitionToState:(long long)arg1 animated:(_Bool)arg2;
- (double)_constrainTopBarHeight:(double)arg1;
- (void)_updateDisplayLink;
- (double)_bottomBarOffsetForTopBarHeight:(double)arg1;
- (void)_setInSteadyState:(_Bool)arg1;
- (void)_transitionToSteadyState;
- (void)_moveBarsWithDelta:(double)arg1;
- (void)beginDraggingWithOffset:(double)arg1;
- (void)updateDraggingWithOffset:(double)arg1;
- (void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2;
- (void)setTopBarHeight:(double)arg1 forState:(long long)arg2;
- (void)setBottomBarOffset:(double)arg1 forState:(long long)arg2;
- (double)_topBarHeightForBottomBarOffset:(double)arg1;

@end
