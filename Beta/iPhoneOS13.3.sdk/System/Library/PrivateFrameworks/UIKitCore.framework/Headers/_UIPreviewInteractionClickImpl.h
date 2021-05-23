/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIDragInteraction, UIPreviewInteraction, UIView, _UIClickInteraction, _UIPreviewInteractionHighlighter, _UIPreviewInteractionPresentationAssistant, _UIRelationshipGestureRecognizer, _UIStateMachine;

@protocol UIInteractionEffect, UIPreviewInteractionDelegate, UIPreviewInteractionDelegatePrivate, _UIPreviewInteractionTouchForceProviding;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionClickImpl : NSObject <Swift>

{
    struct {
        _Bool shouldBegin;
        _Bool didUpdateCommitTransition;
        _Bool highlighterForPreviewTransition;
        _Bool viewControllerPresentationForPresentingViewController;
        _Bool shouldFinishTransitionToPreview;
        _Bool targetedPreviewForPreviewingAtLocation;
        _Bool overrideViewForCommitPhase;
    } _delegateImplements;
    id <UIPreviewInteractionDelegate> _delegate;
    id <UIPreviewInteractionDelegatePrivate> _privateDelegate;
    UIView *_view;
    id <_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
    UIPreviewInteraction *_previewInteraction;
    id <UIInteractionEffect> _interactionEffect;
    _UIStateMachine *_stateMachine;
    _UIClickInteraction *_previewClickInteraction;
    _UIClickInteraction *_commitClickInteraction;
    _UIRelationshipGestureRecognizer *_exclusionRelationshipGestureRecognizer;
    _UIPreviewInteractionPresentationAssistant *_presentationAssistant;
    _UIPreviewInteractionHighlighter *_highlighter;
    UIDragInteraction *_associatedDragInteraction;
}

@property (weak, nonatomic, readonly) id <UIPreviewInteractionDelegatePrivate> privateDelegate;
@property (retain, nonatomic) _UIStateMachine *stateMachine;
@property (nonatomic, readonly) unsigned long long currentState;
@property (retain, nonatomic) _UIClickInteraction *previewClickInteraction;
@property (retain, nonatomic) _UIClickInteraction *commitClickInteraction;
@property (retain, nonatomic) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer;
@property (retain, nonatomic) _UIPreviewInteractionPresentationAssistant *presentationAssistant;
@property (retain, nonatomic) _UIPreviewInteractionHighlighter *highlighter;
@property (weak, nonatomic) UIDragInteraction *associatedDragInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIView *view;
@property (retain, nonatomic) id <UIInteractionEffect> interactionEffect;
@property (weak, nonatomic) id <UIPreviewInteractionDelegate> delegate;
@property (retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;

- (void)dealloc;
- (_Bool)_isPaused;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)_prepareStateMachine;
- (void)cancelInteraction;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)_endInteractionDidComplete:(_Bool)arg1 wasCancelledByClient:(_Bool)arg2;
- (void)_prepareInteractionEffect;
- (_Bool)_canPerformPresentation;
- (void)_endInteractionEffectIfNeeded;
- (void)_delegateUpdatePreviewTransitionWithProgress:(double)arg1 ended:(_Bool)arg2;
- (void)_delegateUpdateCommitTransitionWithProgress:(double)arg1 ended:(_Bool)arg2;
- (unsigned long long)_handleTransitionToActive;
- (void)_toBeRemoved_CreateHighlighterIfPossible;
- (void)_toBeRemoved_CallHighlighterCompletion;
- (unsigned long long)_handleTransitionToHighlight;
- (unsigned long long)_handleTransitionToPreview;
- (void)_handleDidTransitionToPreview;
- (unsigned long long)_handleTransitionToPossibleByCommitting;
- (unsigned long long)_handleTransitionToPossibleByEndingWithContext:(id)arg1;
- (_Bool)_performPresentationIfPossible;
- (void)clickInteractionDidClickUp:(id)arg1;
- (_Bool)clickInteractionShouldBegin:(id)arg1;
- (void)clickInteractionDidClickDown:(id)arg1;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (id)initWithView:(id)arg1 previewInteraction:(id)arg2;
- (void)_startPreviewAtLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)_gestureRecognizerForExclusionRelationship;

@end
