/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSString, SBBarSwipeScreenEdgePanGestureRecognizer, SBHomeGesturePanGestureRecognizer, SBHomeGrabberView, UINotificationFeedbackGenerator;

@protocol SBBarSwipeAffordanceDelegate;

@interface SBBarSwipeAffordanceView : UIView <Swift>

{
    NSHashTable *_observers;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    double _additionalEdgeSpacing;
    SBBarSwipeScreenEdgePanGestureRecognizer *_swipeEdgePanGestureRecognizer;
    _Bool _active;
    id <SBBarSwipeAffordanceDelegate> _delegate;
    SBHomeGrabberView *_grabberView;
    long long _feedbackType;
}

@property (nonatomic, readonly) SBHomeGrabberView *grabberView;
@property (nonatomic) long long feedbackType;
@property (nonatomic, readonly) SBHomeGesturePanGestureRecognizer *swipeEdgePanGestureRecognizer;
@property (weak, nonatomic) id <SBBarSwipeAffordanceDelegate> delegate;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) long long colorBias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_activate;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (void)_deactivate;
- (void)_runBlockOnObservers:(CDUnknownBlockType)arg1;
- (void)_fireAction;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (long long)touchGestureInterfaceOrientationForBarSwipeRecognizer:(id)arg1;
- (void)_handleEdgePanGesture:(id)arg1;
- (id)_unhideHomeAffordanceAnimationSettings;
- (id)_hideHomeAffordanceAnimationSettings;
- (long long)_effectiveOrientationAccountingForTransforms;
- (double)_progressWithTranslation:(struct CGPoint)arg1 liftoffVelocity:(struct CGPoint)arg2;
- (void)_offsetGrabberForProgress:(double)arg1;
- (void)_settleGrabber;
- (id)_settleAffordanceAnimationBehaviorDescription;
- (void)_setGrabberAdditionalEdgeSpacing:(double)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;

@end
