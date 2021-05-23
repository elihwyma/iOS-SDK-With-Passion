/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIGestureRecognizer, UITouchForceGestureRecognizer, UIView, _UIStateMachine;

@protocol _UIClickInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UIForceClickInteractionDriver : NSObject

{
    _Bool _cancelsTouchesInView;
    id <_UIClickInteractionDriverDelegate> _delegate;
    UIView *_view;
    _UIStateMachine *_stateMachine;
    UITouchForceGestureRecognizer *_gestureRecognizer;
}

@property (retain, nonatomic) _UIStateMachine *stateMachine;
@property (retain, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) double touchForce;
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
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_prepareStateMachine;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)allowsRepeatedClicks;

@end
