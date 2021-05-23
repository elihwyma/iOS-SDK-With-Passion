/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIDragInteractionContextImpl, UIView, _UIDragAddItemsGesture, _UIDragSessionImpl;

@protocol UIDragInteractionDelegate, UIDragInteractionEffect, _UIDragInteractionDriving, _UIDragInteractionPresentationDelegate;

@interface UIDragInteraction : NSObject <Swift>

{
    _Bool _didSetEnabled;
    _Bool _enabled;
    _UIDragSessionImpl *_preliminarySession;
    _UIDragSessionImpl *_sessionForAddingItems;
    UIDragInteractionContextImpl *_interactionContext;
    _UIDragAddItemsGesture *_gestureRecognizerForAddingItems;
    _Bool _allowsSimultaneousRecognitionDuringLift;
    _Bool _cancellationTimerEnabled;
    _Bool _competingLongPressOnLift;
    _Bool _acceleratedDragGestureEnabled;
    _Bool _automaticallyAddsFailureRelationships;
    _Bool _allowsMultipleSessions;
    _Bool _additionalTouchesCancelLift;
    id <UIDragInteractionDelegate> _delegate;
    UIView *_view;
    id <_UIDragInteractionDriving> _initiationDriver;
    id <_UIDragInteractionPresentationDelegate> _presentationDelegate;
    id <UIDragInteractionEffect> _interactionEffect;
    double _liftDelay;
    double _cancellationDelay;
    double _competingLongPressDelay;
    double _liftMoveHysteresis;
    long long _addItemsGestureConfiguration;
    NSArray *_allowedTouchTypes;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic, getter=_initiationDriver, setter=_setInitiationDriver:) id <_UIDragInteractionDriving> initiationDriver;
@property (weak, nonatomic, getter=_presentationDelegate, setter=_setPresentationDelegate:) id <_UIDragInteractionPresentationDelegate> presentationDelegate;
@property (retain, nonatomic) id <UIDragInteractionEffect> interactionEffect;
@property (nonatomic, getter=_liftDelay, setter=_setLiftDelay:) double liftDelay;
@property (nonatomic, getter=_isCancellationTimerEnabled, setter=_setCancellationTimerEnabled:) _Bool cancellationTimerEnabled;
@property (nonatomic, getter=_cancellationDelay, setter=_setCancellationDelay:) double cancellationDelay;
@property (nonatomic, getter=_competingLongPressOnLift, setter=_setCompetingLongPressOnLift:) _Bool competingLongPressOnLift;
@property (nonatomic, getter=_competingLongPressDelay, setter=_setCompetingLongPressDelay:) double competingLongPressDelay;
@property (nonatomic, getter=_liftMoveHysteresis, setter=_setLiftMoveHysteresis:) double liftMoveHysteresis;
@property (nonatomic, getter=_isAcceleratedDragGestureEnabled, setter=_setAcceleratedDragGestureEnabled:) _Bool acceleratedDragGestureEnabled;
@property (nonatomic, getter=_automaticallyAddsFailureRelationships, setter=_setAutomaticallyAddsFailureRelationships:) _Bool automaticallyAddsFailureRelationships;
@property (nonatomic, getter=_allowsMultipleSessions, setter=_setAllowsMultipleSessions:) _Bool allowsMultipleSessions;
@property (nonatomic, getter=_addItemsGestureConfiguration, setter=_setAddItemsGestureConfiguration:) long long addItemsGestureConfiguration;
@property (nonatomic, getter=_additionalTouchesCancelLift, setter=_setAdditionalTouchesCancelLift:) _Bool additionalTouchesCancelLift;
@property (copy, nonatomic, getter=_allowedTouchTypes, setter=_setAllowedTouchTypes:) NSArray *allowedTouchTypes;
@property (weak, nonatomic, readonly) id <UIDragInteractionDelegate> delegate;
@property (nonatomic) _Bool allowsSimultaneousRecognitionDuringLift;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isEnabledByDefault;
+ (void)_cancelAllDrags;

- (_Bool)_isActive;
- (id)initWithDelegate:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (void)_immediatelyBeginDragWithTouch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)dragDriver:(id)arg1 shouldBeginAtLocation:(struct CGPoint)arg2;
- (void)dragDriver:(id)arg1 beginDragWithTouches:(id)arg2 itemUpdater:(CDUnknownBlockType)arg3 beginningSessionHandler:(CDUnknownBlockType)arg4;
- (_Bool)dragDriverBeginLift:(id)arg1;
- (void)_updateDriverParameters;
- (void)setLiftDelay:(double)arg1;
- (void)_cancelDrag;
- (id)_queryDelegate:(id)arg1 forItemsForBeginningSession:(id)arg2;
- (_Bool)_beginLiftForItems:(id)arg1 session:(id)arg2 animated:(_Bool)arg3;
- (void)_beginDragWithTouches:(id)arg1 itemUpdater:(CDUnknownBlockType)arg2;
- (void)_finalizeLiftCancellation;
- (_Bool)_prepareForLiftAtPoint:(struct CGPoint)arg1 invocationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queryDelegate:(id)arg1 forLiftPreviewsUsingItems:(id)arg2 session:(id)arg3;
- (_Bool)_queryDelegate:(id)arg1 forItemsForAddingToSession:(id)arg2 atPoint:(struct CGPoint)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_accessibilityCanAddItemsToDragSession;
- (_Bool)_addItemsWithTouchPoint:(struct CGPoint)arg1;
- (void)_updateInteractionEffectWithContext:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)_handoffSession:(id)arg1;
- (void)_endLiftWithoutDragging;
- (id)_itemsToDragFromView:(id)arg1;
- (_Bool)_canDragFromView:(id)arg1;
- (void)_view:(id)arg1 willBeginDraggingWithSession:(id)arg2;
- (void)_viewFailedToDrag:(id)arg1;
- (_Bool)_viewSupportsSystemDrag:(id)arg1;
- (long long)_dataOwnerOfDragFromView:(id)arg1;
- (_Bool)dragDriver:(id)arg1 prepareToLiftWithCompletion:(CDUnknownBlockType)arg2;
- (void)dragDriverCancelLift:(id)arg1;
- (_Bool)dragDriver:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
- (_Bool)dragDriverWantsExclusionOverride:(id)arg1;
- (_Bool)dragDriver:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
- (_Bool)dragDriver:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
- (void)dragDriverCancelAddItemsGesture:(id)arg1;
- (void)setDragCancellationDelay:(double)arg1;
- (double)liftDelay;
- (struct CGPoint)_locationInView:(id)arg1;
- (void)_accessibilityPrepareForDragAtPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_accessibilityAddItemsToDragSessionAtPoint:(struct CGPoint)arg1;
- (void)_cancelLift;
- (unsigned long long)_session:(id)arg1 sourceOperationMaskForDraggingWithinApp:(_Bool)arg2;
- (_Bool)_sessionPrefersFullSizePreviews:(id)arg1;
- (_Bool)_sessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (void)_sessionWillBegin:(id)arg1;
- (void)_sessionHandedOffDragImage:(id)arg1;
- (void)_sessionDidMove:(id)arg1;
- (void)_session:(id)arg1 willAddItems:(id)arg2 forInteraction:(id)arg3;
- (void)_sessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)_sessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (id)_session:(id)arg1 targetedPreviewForCancellingItem:(id)arg2 duiPreview:(id)arg3 snapshotView:(id)arg4 window:(id)arg5;
- (void)_session:(id)arg1 item:(id)arg2 willCancelWithAnimator:(id)arg3;
- (_Bool)_session:(id)arg1 item:(id)arg2 shouldDelaySetDownAnimationWithCompletion:(CDUnknownBlockType)arg3;
- (void)_sessionDidTransferItems:(id)arg1;

@end
