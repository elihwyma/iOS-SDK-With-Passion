/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIGestureRecognizer, UIView, _UIStateMachine, _UITouchDurationObservingGestureRecognizer;

@protocol _UIClickInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UILongPressClickInteractionDriver : NSObject

{
    struct {
        _Bool didUpdateHighlightProgress;
        _Bool shouldDelayGesture;
    } _delegateImplements;
    _Bool _cancelsTouchesInView;
    _Bool _reachedClickDownThreshold;
    id <_UIClickInteractionDriverDelegate> _delegate;
    UIView *_view;
    _UIStateMachine *_stateMachine;
    _UITouchDurationObservingGestureRecognizer *_gestureRecognizer;
    double _clickDownDuration;
    double _forceMultiplier;
}

@property (retain, nonatomic) _UIStateMachine *stateMachine;
@property (retain, nonatomic) _UITouchDurationObservingGestureRecognizer *gestureRecognizer;
@property (nonatomic) double clickDownDuration;
@property (nonatomic) double forceMultiplier;
@property (nonatomic) _Bool reachedClickDownThreshold;
@property (nonatomic, readonly) double clickTimeoutDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <_UIClickInteractionDriverDelegate> delegate;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) double allowableMovement;
@property (nonatomic) _Bool cancelsTouchesInView;
@property (nonatomic, readonly) UIGestureRecognizer *primaryGestureRecognizer;
@property (nonatomic, readonly) double touchDuration;
@property (nonatomic, readonly) _Bool hasExceededAllowableMovement;
@property (nonatomic, readonly) _Bool isCurrentlyAcceleratedByForce;
@property (nonatomic, readonly) _Bool clicksUpAutomaticallyAfterTimeout;
@property (nonatomic, readonly) double maximumEffectProgress;

+ (_Bool)requiresForceCapability;
+ (_Bool)prefersCancelsTouchesInView;

- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_prepareStateMachine;
- (void)_asyncGestureBegan;
- (void)cancelInteraction;
- (void)_updateForActiveGestureRecognizer;
- (void)_notifyDelegateOfUpdatedClickDownProgress:(double)arg1 forceAdjustedClickDownDuration:(double)arg2;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;

@end
