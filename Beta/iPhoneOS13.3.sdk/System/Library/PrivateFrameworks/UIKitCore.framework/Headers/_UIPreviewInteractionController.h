/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIGestureRecognizer, UIPreviewInteraction, UIView, UIViewController, _UIInteractionEffect_deprecated, _UIPreviewActionsController, _UIPreviewInteractionCommitTransition, _UIPreviewInteractionDismissTransition, _UIPreviewInteractionGestureRecognizer, _UIPreviewInteractionPresentationTransition, _UIPreviewPresentationController2, _UISteadyTouchForceGestureRecognizer, _UITouchesObservingGestureRecognizer;

@protocol UIViewControllerPreviewing_Internal, _UIPreviewInteractionControllerDelegate, _UIPreviewInteractionHighlighting, _UIPreviewInteractionTouchForceProviding;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionController : NSObject <Swift>

{
    _Bool _performingPreviewTransition;
    _Bool _hasTransitionedToPreview;
    _Bool _dismissingPreview;
    _Bool _commitTransitionScheduled;
    _Bool _performingCommitTransition;
    id <_UIPreviewInteractionControllerDelegate> _delegate;
    UIView *_sourceView;
    UIViewController *_presentingViewController;
    UIPreviewInteraction *_previewInteraction;
    id <_UIPreviewInteractionTouchForceProviding> _presentedViewTouchForceProvider;
    id <_UIPreviewInteractionTouchForceProviding> _pausingTouchForceProvider;
    _UIPreviewInteractionGestureRecognizer *_revealGestureRecognizer;
    _UIPreviewInteractionGestureRecognizer *_previewGestureRecognizer;
    _UISteadyTouchForceGestureRecognizer *_steadyTouchForceGestureRecognizer;
    UIViewController *_currentPreviewViewController;
    _UIPreviewPresentationController2 *_currentPresentationController;
    id <_UIPreviewInteractionHighlighting> _currentHighlighter;
    _UIPreviewInteractionPresentationTransition *_currentPresentationTransition;
    _UIPreviewInteractionDismissTransition *_currentDismissTransition;
    _UIPreviewInteractionCommitTransition *_currentCommitTransition;
    _UIInteractionEffect_deprecated *_currentInteractionEffect;
    _UITouchesObservingGestureRecognizer *_gestureRecognizerForPreviewActions;
    _UIPreviewActionsController *_previewActionsController;
    id <UIViewControllerPreviewing_Internal> _currentPreviewingContext;
    struct CGPoint _location;
    struct CGPoint _initialLocationForPreviewActionsPanning;
}

@property (nonatomic) struct CGPoint location;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIPreviewInteraction *previewInteraction;
@property (retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> presentedViewTouchForceProvider;
@property (retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> pausingTouchForceProvider;
@property (retain, nonatomic) _UIPreviewInteractionGestureRecognizer *revealGestureRecognizer;
@property (retain, nonatomic) _UIPreviewInteractionGestureRecognizer *previewGestureRecognizer;
@property (retain, nonatomic) _UISteadyTouchForceGestureRecognizer *steadyTouchForceGestureRecognizer;
@property (retain, nonatomic) UIViewController *currentPreviewViewController;
@property (retain, nonatomic) _UIPreviewPresentationController2 *currentPresentationController;
@property (retain, nonatomic) id <_UIPreviewInteractionHighlighting> currentHighlighter;
@property (retain, nonatomic) _UIPreviewInteractionPresentationTransition *currentPresentationTransition;
@property (retain, nonatomic) _UIPreviewInteractionDismissTransition *currentDismissTransition;
@property (retain, nonatomic) _UIPreviewInteractionCommitTransition *currentCommitTransition;
@property (nonatomic) _Bool performingPreviewTransition;
@property (nonatomic) _Bool hasTransitionedToPreview;
@property (nonatomic) _Bool dismissingPreview;
@property (nonatomic) _Bool commitTransitionScheduled;
@property (nonatomic) _Bool performingCommitTransition;
@property (retain, nonatomic) _UIInteractionEffect_deprecated *currentInteractionEffect;
@property (retain, nonatomic) _UITouchesObservingGestureRecognizer *gestureRecognizerForPreviewActions;
@property (retain, nonatomic) _UIPreviewActionsController *previewActionsController;
@property (nonatomic) struct CGPoint initialLocationForPreviewActionsPanning;
@property (weak, nonatomic) id <UIViewControllerPreviewing_Internal> currentPreviewingContext;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (weak, nonatomic) id <_UIPreviewInteractionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithView:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)_overrideSourceViewForBinaryCompatibilityIfNeeded:(id *)arg1 sourceRect:(struct CGRect *)arg2;
- (struct CGSize)maximumPreviewActionsViewSizeForPreviewActionsController:(id)arg1;
- (void)previewActionsController:(id)arg1 didCompleteWithSelectedAction:(id)arg2;
- (void)didDismissPreviewActionsController:(id)arg1;
- (struct CGPoint)initialPlatterPositionForPreviewActionsController:(id)arg1;
- (void)previewActionsController:(id)arg1 didUpdatePlatterTranslation:(struct CGVector)arg2 withVelocity:(struct CGVector)arg3;
- (_Bool)_previewingIsPossibleForView:(id)arg1;
- (void)commitInteractivePreview;
- (void)_resetCustomPresentationHooks;
- (void)_finalizeInteractivePreview;
- (void)_handleRevealGesture:(id)arg1;
- (void)_handlePreviewGesture:(id)arg1;
- (void)_handlePreviewActionsGesture:(id)arg1;
- (void)_handleSteadyTouchForceGesture:(id)arg1;
- (void)_stopCurrentInteractionEffect;
- (void)_finalizeAfterPreviewViewControllerPresentation;
- (_Bool)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg1;
- (id)_preparedInteractionEffect;
- (void)_dismissPreviewViewControllerIfNeeded;
- (void)_preparePreviewPresentationControllerIfNeeded:(id)arg1;
- (_Bool)_isLongPressGestureRecognizerUsedForDelayingActions:(id)arg1;
- (id)_newHighlighterForPreviewingContext:(id)arg1;
- (void)_dismissPreviewViewControllerIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finalizeHighlighterAfterPreviewViewControllerPresentation;
- (_Bool)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg1;
- (void)_revertInteractionEffectToStartState;
- (_Bool)_previewInteractionShouldEndOnGestureCompletion:(id)arg1;
- (id)_preferredNavigationControllerForCommitTransition;
- (id)_previewPresentationControllerForViewController:(id)arg1;

@end
