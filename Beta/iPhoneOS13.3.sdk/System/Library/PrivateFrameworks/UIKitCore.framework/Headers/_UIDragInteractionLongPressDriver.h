/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDragInteractionDriver.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIDelayedAction, _UIDragAcceleratorGestureRecognizer, _UIDragLiftGestureRecognizer, _UIRelationshipGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionLongPressDriver : _UIDragInteractionDriver <Swift>

{
    UIDelayedAction *_gateTimer;
    UIDelayedAction *_cancellationTimer;
    _UIDragLiftGestureRecognizer *_gestureRecognizerForDragInitiation;
    _UIDragAcceleratorGestureRecognizer *_gestureRecognizerForAcceleratedDragInitiation;
    _UIRelationshipGestureRecognizer *_gestureRecognizerForFailureRelationship;
    _UIRelationshipGestureRecognizer *_gestureRecognizerForExclusionRelationship;
}

@property (nonatomic, readonly) _UIDragLiftGestureRecognizer *gestureRecognizerForDragInitiation;
@property (nonatomic, readonly) _UIDragAcceleratorGestureRecognizer *gestureRecognizerForAcceleratedDragInitiation;
@property (nonatomic, readonly) _UIRelationshipGestureRecognizer *gestureRecognizerForFailureRelationship;
@property (nonatomic, readonly) _UIRelationshipGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)reset;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setAllowedTouchTypes:(id)arg1;
- (_Bool)hasExceededAllowableMovement;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)didTransitionToBeginState;
- (void)didTransitionToInactiveState;
- (void)didTransitionToInflightState;
- (void)setAutomaticallyAddsFailureRelationships:(_Bool)arg1;
- (void)setAcceleratedDragGestureEnabled:(_Bool)arg1;
- (void)setLiftDelay:(double)arg1;
- (void)setLiftMoveHysteresis:(double)arg1;
- (_Bool)isGestureRecognizerForDragInitiation:(id)arg1;
- (void)detachFromView:(id)arg1;
- (void)attachToView:(id)arg1;
- (void)didTransitionToPreparing;
- (void)didTransitionToCancelState;
- (void)_dragInitiationGestureStateChanged:(id)arg1;
- (void)invalidateCompetingGestureRecognizerGateTimer;
- (void)invalidateCancellationTimer;
- (void)_gateCompetingGestureRecognizers;
- (void)openCompetingGestureRecognizerGateCancelingGestures:(id)arg1;
- (_Bool)_wantsTimeDelayedFailureRequirementGate;
- (void)openGateCancelingAddItemsGestures;
- (_Bool)hasMoveHysteresisBeenReached;
- (double)translationInWindow;
- (_Bool)canExcludeCompetingGestureRecognizer:(id)arg1;
- (_Bool)shouldDelayCompetingGestureRecognizer:(id)arg1;

@end
