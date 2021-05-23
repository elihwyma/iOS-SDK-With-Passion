/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class CADisplayLink;

@protocol _SFDynamicBarAnimatorDelegate;

@interface _SFDynamicBarAnimator : NSObject

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
    _Bool _performingBatchUpdates;
    _Bool _sendingOutputsDidChange;
    long long _state;
    double _topBarHeight;
    double _bottomBarOffset;
    double _minimumTopBarHeight;
    id <_SFDynamicBarAnimatorDelegate> _delegate;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long targetState;
@property (nonatomic, readonly) double topBarHeight;
@property (nonatomic, readonly) double bottomBarOffset;
@property (nonatomic, readonly, getter=isSendingOutputsDidChange) _Bool sendingOutputsDidChange;
@property (nonatomic, readonly, getter=isTrackingDrag) _Bool trackingDrag;
@property (nonatomic) double minimumTopBarHeight;
@property (weak, nonatomic) id <_SFDynamicBarAnimatorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_displayLinkFired:(id)arg1;
- (void)_updateOutputs;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (_Bool)canTransitionToState:(long long)arg1;
- (void)attemptTransitionToState:(long long)arg1 animated:(_Bool)arg2;
- (double)_constrainTopBarHeight:(double)arg1;
- (void)_updateDisplayLink;
- (double)_bottomBarOffsetForTopBarHeight:(double)arg1;
- (void)_setInSteadyState:(_Bool)arg1;
- (void)_transitionToSteadyState;
- (_Bool)_canTransitionToState:(long long)arg1 withMinimumTopBarHeight:(double)arg2;
- (double)_constrainTopBarHeight:(double)arg1 withMinimumTopBarHeight:(double)arg2;
- (void)_moveBarsWithDelta:(double)arg1;
- (void)_endDraggingWithVelocity:(double)arg1;
- (void)beginDraggingWithOffset:(double)arg1;
- (void)updateDraggingWithOffset:(double)arg1;
- (void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2;
- (void)endScrolling;
- (void)setTopBarHeight:(double)arg1 forState:(long long)arg2;
- (void)setBottomBarOffset:(double)arg1 forState:(long long)arg2;

@end
