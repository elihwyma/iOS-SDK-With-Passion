/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSMonotonicReferenceTime, NSString, UIImageView, UIPanGestureRecognizer, UIView, _UIBackdropView;

@protocol BSInvalidatable, SBGrabberTongueDelegate;

@interface SBGrabberTongue : NSObject <Swift>

{
    _Bool _invalidated;
    UIPanGestureRecognizer *_edgePullGestureRecognizer;
    UIView *_tongueContainer;
    _UIBackdropView *_tongueBackdropView;
    UIImageView *_tongueChevron;
    _Bool _tongueVisible;
    _Bool _inPullGesture;
    _Bool _inShowTongueGesture;
    _Bool _inDismissTongueGesture;
    _Bool _inAmbiguousGesture;
    _Bool _beganAmbiguousPullGesture;
    unsigned long long _screenEdge;
    unsigned long long _systemGestureType;
    UIView *_containingView;
    BSMonotonicReferenceTime *_gestureStartReferenceTime;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    id <SBGrabberTongueDelegate> _delegate;
}

@property (weak, nonatomic, readonly) id <SBGrabberTongueDelegate> delegate;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_didDismiss;
- (void)presentAnimated:(_Bool)arg1;
- (void)_willPresent;
- (_Bool)_shouldReceiveTouch:(id)arg1;
- (void)uninstall;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (id)edgePullGestureRecognizer;
- (id)initWithDelegate:(id)arg1 edge:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (void)installInView:(id)arg1 withColorStyle:(long long)arg2;
- (_Bool)dismissWithStyle:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)isEdgeLocationInGrabberRegion:(double)arg1;
- (void)_willDismiss;
- (void)_createTongueAndGestureRecognizersIfNecessaryWithColorStyle:(long long)arg1;
- (void)_presentTongueAnimated:(_Bool)arg1;
- (void)_dismissTongueWithStyle:(long long)arg1 animated:(_Bool)arg2;
- (double)_distanceFromEdgeForRecognizer:(id)arg1;
- (double)_edgeOrientedVelocityForRecognizer:(id)arg1;
- (double)_centerOnScreenEdge;
- (double)_ambiguousActivationMargin;
- (void)_handlePullGesture:(id)arg1;
- (id)_createEdgePullGestureRecognizerWithAction:(SEL)arg1;
- (id)_newBackdropViewWithColorStyle:(long long)arg1;
- (id)_newChevronView;
- (void)_dismissTongue:(id)arg1;
- (void)_cancelPendingTongueDismissRequests;
- (struct CGRect)_frameForTongueWhenVisible:(_Bool)arg1;
- (struct CGRect)_chevronFrameForTongueBounds:(struct CGRect)arg1;
- (struct CGAffineTransform)_transformForTongueContainer;
- (struct UIEdgeInsets)_grabberTongueScreenInsets;
- (_Bool)_shouldShowTongueOnFirstSwipeWithRecognizer:(id)arg1;
- (double)_ambiguousActivationMarginIfHonored;
- (_Bool)_tongueOrPullEnabled;
- (void)_updateCancelsTouchesWithRecognizer:(id)arg1;
- (void)_pullGestureBegan:(id)arg1;
- (void)_pullGestureUpdated:(id)arg1;
- (void)_pullGestureEnded:(id)arg1;
- (void)_pullGestureCanceled:(id)arg1;
- (_Bool)_shouldAllowSecondSwipeWithRecognizer:(id)arg1;
- (void)_willPresentInteractively:(id)arg1;
- (void)_didPresentInteractively:(id)arg1;
- (double)distanceFromEdge;
- (double)edgeOrientedVelocity;
- (double)edgeLocationForTouch:(id)arg1;

@end
