/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSString, UIDragInteraction, UIGestureRecognizer, UIView, _UIClickInteraction, _UIClickPresentation, _UIClickPresentationFeedbackGenerator, _UIRelationshipGestureRecognizer, _UIStateMachine;

@protocol UIInteractionEffect, _UIClickPresentationAssisting, _UIClickPresentationInteractionDelegate;

@interface _UIClickPresentationInteraction : NSObject <Swift>

{
    struct {
        _Bool shouldBegin;
        _Bool previewForHighlightingAtLocation;
        _Bool shouldPresent;
        _Bool ended;
        _Bool asyncShouldBegin;
        _Bool shouldAllowRapidRestart;
        _Bool shouldAllowDragAfterDismiss;
        _Bool previewForCancellingDragItem;
        _Bool willAnimateDragCancelWithAnimator;
        _Bool dragSessionDidEndForItems;
        _Bool interactionEffectForTargetedPreview;
        _Bool endedForPresentation;
    } _delegateImplements;
    _Bool _unableToClick;
    long long _statsPresentation;
    _Bool _activatedFeedbackGeneratorForClick;
    _Bool _allowSimultaneousRecognition;
    id <_UIClickPresentationInteractionDelegate> _delegate;
    UIView *_view;
    id <UIInteractionEffect> _interactionEffect;
    NSMutableArray *_stateBreadCrumbs;
    _UIStateMachine *_stateMachine;
    _UIClickInteraction *_previewClickInteraction;
    _UIRelationshipGestureRecognizer *_exclusionRelationshipGestureRecognizer;
    _UIRelationshipGestureRecognizer *_failureRelationshipGestureRecognizer;
    id <_UIClickPresentationAssisting> _presentationAssistant;
    _UIClickPresentation *_pendingPresentation;
    _UIClickPresentationFeedbackGenerator *_feedbackGenerator;
    UIDragInteraction *_latentAssociatedDragInteraction;
    NSMutableArray *_activeInteractionEffects;
    UIDragInteraction *_associatedDragInteraction;
    NSString *_debugIdentifier;
    NSString *_presentationTypeDebugString;
    struct CGPoint _initialLocation;
}

@property (retain, nonatomic) _UIStateMachine *stateMachine;
@property (retain, nonatomic) _UIClickInteraction *previewClickInteraction;
@property (retain, nonatomic) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer;
@property (retain, nonatomic) _UIRelationshipGestureRecognizer *failureRelationshipGestureRecognizer;
@property (retain, nonatomic) id <_UIClickPresentationAssisting> presentationAssistant;
@property (retain, nonatomic) _UIClickPresentation *pendingPresentation;
@property (nonatomic) struct CGPoint initialLocation;
@property (retain, nonatomic) _UIClickPresentationFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) UIDragInteraction *latentAssociatedDragInteraction;
@property (retain, nonatomic) NSMutableArray *activeInteractionEffects;
@property (weak, nonatomic) UIDragInteraction *associatedDragInteraction;
@property (nonatomic, readonly) NSMutableArray *stateBreadCrumbs;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (copy, nonatomic) NSString *presentationTypeDebugString;
@property (nonatomic, readonly, getter=_reachedForceThreshold) _Bool reachedForceThreshold;
@property (weak, nonatomic, readonly) id <_UIClickPresentationInteractionDelegate> delegate;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
@property (nonatomic) _Bool allowSimultaneousRecognition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIView *view;
@property (retain, nonatomic) id <UIInteractionEffect> interactionEffect;

- (void)dealloc;
- (_Bool)_isPaused;
- (_Bool)_isActive;
- (unsigned long long)_currentState;
- (id)initWithDelegate:(id)arg1;
- (void)_setDelegate:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)present;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)_prepareStateMachine;
- (void)cancelInteraction;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_dragInteractionPresentation:(id)arg1 sessionDidEnd:(id)arg2 withoutBeginning:(_Bool)arg3;
- (id)_dragInteractionPresentation:(id)arg1 previewForCancellingItem:(id)arg2 defaultPreview:(id)arg3 proposedPreview:(id)arg4;
- (void)_dragInteractionPresentation:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (void)_prepareInteractionEffect;
- (_Bool)_canPerformPresentation;
- (void)_endInteractionEffectIfNeeded;
- (unsigned long long)_handleTransitionToActive;
- (unsigned long long)_handleTransitionToHighlight;
- (unsigned long long)_handleTransitionToPreview;
- (void)_handleDidTransitionToPreview;
- (unsigned long long)_handleTransitionToPossibleByEndingWithContext:(id)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (void)clickInteractionDidClickDown:(id)arg1;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (void)_clickInteractionDidUpdateDriver:(id)arg1;
- (unsigned long long)_clickInteractionDefaultDriverType:(id)arg1;
- (void)_clickInteraction:(id)arg1 shouldBegin:(CDUnknownBlockType)arg2;
- (void)_endInteractionDidComplete:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performPreviewPresentation;
- (void)_cancelWithReason:(unsigned long long)arg1 alongsideActions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_beginDragIfPossibleWithTouch:(id)arg1 previewProvider:(CDUnknownBlockType)arg2 fenceHandler:(CDUnknownBlockType)arg3;
- (id)_clickDriverTouch;
- (void)_endInteractionWithContext:(id)arg1;
- (_Bool)_supportsRapidRestart;
- (_Bool)_isControlledByCC;
- (id)_clickDragDriver;
- (void)_attemptDragLiftAtLocation:(struct CGPoint)arg1 useDefaultLiftAnimation:(_Bool)arg2;
- (void)_handleDidTransitionToActive;
- (void)_handleDidTransitionToHighlight;
- (void)_handleDidTransitionToPossibleFromState:(unsigned long long)arg1 context:(id)arg2;
- (void)_associateWithActiveDragInteraction;
- (void)_performPresentation;
- (_Bool)_delegate_shouldAllowDragAfterDismiss;
- (void)_delegate_interactionEndedWithContext:(id)arg1;
- (id)_activeEffectForPreview:(id)arg1;
- (void)beginPanInteraction;
- (void)endPanInteraction;
- (void)beginDragWithTouch:(id)arg1 previewProvider:(CDUnknownBlockType)arg2 fenceHandler:(CDUnknownBlockType)arg3;

@end
