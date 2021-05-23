/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIDelayedAction, UISpringLoadedInteractionContextImpl, UIView;

@protocol UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect;

@interface UISpringLoadedInteraction : NSObject <Swift>

{
    UIView *_view;
    double _possibleStateDuration;
    id <UISpringLoadedInteractionBehavior> _interactionBehavior;
    id <UISpringLoadedInteractionEffect> _interactionEffect;
    UISpringLoadedInteractionContextImpl *_context;
    CDUnknownBlockType _handler;
    UIDelayedAction *_emphasizeAction;
    UIDelayedAction *_activateAction;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UISpringLoadedInteractionContextImpl *context;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) UIDelayedAction *emphasizeAction;
@property (retain, nonatomic) UIDelayedAction *activateAction;
@property (nonatomic, setter=_setPossibleStateDuration:) double _possibleStateDuration;
@property (nonatomic, readonly) id <UISpringLoadedInteractionBehavior> interactionBehavior;
@property (nonatomic, readonly) id <UISpringLoadedInteractionEffect> interactionEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_blinkEffect;
+ (id)_defaultInteractionBehavior;
+ (id)springLoadedInteractionWithHandler:(CDUnknownBlockType)arg1;
+ (id)hysteresisBehaviorWithBeginningVelocity:(double)arg1 cancelingVelocity:(double)arg2;

- (void)setState:(long long)arg1;
- (id)initWithInteractionBehavior:(id)arg1 interactionEffect:(id)arg2 activationHandler:(CDUnknownBlockType)arg3;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)initWithActivationHandler:(CDUnknownBlockType)arg1;
- (id)_dynamicGestureRecognizersForEvent:(id)arg1;
- (void)_springloadedStateChanged:(id)arg1;
- (_Bool)_shouldAllowInteractionWithContext:(id)arg1;
- (void)_resetBehavior;
- (void)_cancelActions;
- (void)_startEmphasizeAction;
- (void)_startActivateAction;
- (void)_emphasizeSpringLoading:(id)arg1;
- (void)_activateSpringLoading:(id)arg1;
- (void)_reloadSpringLoadedInteractionBehavior;

@end
