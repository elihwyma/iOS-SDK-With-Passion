/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIScrollView, UIScrollViewDirectionalPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer

{
    UIScrollView *_scrollView;
    SEL _scrollViewAction;
    struct CGPoint _reconsideredLockingLocation;
    unsigned int _lastLockingAxis:2;
    unsigned int _lockingAxis:2;
    unsigned int _hasParentScrollView:1;
    unsigned int _caughtDeceleratingScrollView:1;
    unsigned int _directionalLockEnabled:1;
    unsigned int _transfersTrackingFromParentScrollView:1;
    unsigned int _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered:1;
    long long _indirectScrollingState;
    double _translationScaleFactor;
    UIScrollViewDirectionalPressGestureRecognizer *_directionalPressGestureRecognizer;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic, getter=isDirectionalLockEnabled) _Bool directionalLockEnabled;
@property (nonatomic, readonly, getter=_caughtDeceleratingScrollView) _Bool caughtDeceleratingScrollView;
@property (nonatomic, readonly, getter=_beganCaughtDeceleratingScrollViewAndMoved) _Bool beganCaughtDeceleratingScrollViewAndMoved;
@property (nonatomic) double translationScaleFactor;
@property (weak, nonatomic) UIScrollViewDirectionalPressGestureRecognizer *directionalPressGestureRecognizer;

- (void)setDelegate:(id)arg1;
- (void)setView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setAllowedTouchTypes:(id)arg1;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;
- (double)_hysteresis;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_resetGestureRecognizer;
- (_Bool)delaysTouchesBegan;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2;
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;
- (void)_scrollViewDidEndZooming;
- (void)_beginScroll;
- (_Bool)_canTransferTrackingFromParentPagingScrollView;
- (void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg1;
- (_Bool)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
- (_Bool)_shouldContinueToWaitToTransferTrackingFromParentScrollView;

@end
