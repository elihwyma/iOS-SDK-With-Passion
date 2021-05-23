/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIGestureRecognizer, UIInteractionProgress, UIPanGestureRecognizer, UIPresentationController, UIPreviewInteraction, UIView, UIViewController, UIWindow, _UIDeepPressAnalyzer, _UIPreviewGestureRecognizer, _UIRevealGestureRecognizer, _UIStatesFeedbackGenerator, _UITouchesObservingGestureRecognizer;

@protocol UIForcePresentationController, UIForceTransitioningDelegate, UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal;

@interface UIPreviewInteractionController : NSObject <Swift>

{
    _Bool _isCommitting;
    _Bool _generatorTurnedOn;
    _Bool _statusBarWasHidden;
    _Bool _didSendDelegateWillDismissViewController;
    id <UIPreviewInteractionControllerDelegate> _delegate;
    UIView *_sourceView;
    UIViewController *_presentingViewController;
    UIPreviewInteraction *_previewInteraction;
    UIInteractionProgress *_interactionProgressForCommit;
    _UIRevealGestureRecognizer *_revealGestureRecognizer;
    _UIPreviewGestureRecognizer *_previewGestureRecognizer;
    UIPanGestureRecognizer *_modalPanGestureRecognizer;
    _UITouchesObservingGestureRecognizer *_touchObservingGestureRecognizer;
    _UIDeepPressAnalyzer *_deepPressAnalyzer;
    UIViewController *_currentPreviewViewController;
    UIPresentationController<UIForcePresentationController> *_currentPresentationController;
    id <UIForceTransitioningDelegate> _currentTransitionDelegate;
    UIWindow *_windowForPreviewPresentation;
    id _currentCommitTransition;
    id <UIViewControllerPreviewing_Internal> _previewingContext;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    UIInteractionProgress *_interactionProgressForPresentation;
    struct CGPoint _location;
}

@property (nonatomic) struct CGPoint location;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIPreviewInteraction *previewInteraction;
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForCommit;
@property (retain, nonatomic) _UIRevealGestureRecognizer *revealGestureRecognizer;
@property (retain, nonatomic) _UIPreviewGestureRecognizer *previewGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *modalPanGestureRecognizer;
@property (retain, nonatomic) _UITouchesObservingGestureRecognizer *touchObservingGestureRecognizer;
@property (retain, nonatomic) _UIDeepPressAnalyzer *deepPressAnalyzer;
@property (retain, nonatomic) UIViewController *currentPreviewViewController;
@property (retain, nonatomic) UIPresentationController<UIForcePresentationController> *currentPresentationController;
@property (retain, nonatomic) id <UIForceTransitioningDelegate> currentTransitionDelegate;
@property (retain, nonatomic) UIWindow *windowForPreviewPresentation;
@property (nonatomic) _Bool statusBarWasHidden;
@property (retain, nonatomic) id currentCommitTransition;
@property (nonatomic) _Bool didSendDelegateWillDismissViewController;
@property (weak, nonatomic) id <UIViewControllerPreviewing_Internal> previewingContext;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (weak, nonatomic) id <UIPreviewInteractionControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)forcePresentationTransitionWillBegin:(id)arg1;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (id)initWithView:(id)arg1;
- (void)forcePresentationControllerDidDismiss:(id)arg1;
- (void)forcePresentationControllerWillDismiss:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)_activateFeedbackIfNeeded;
- (void)_deactivateFeedbackIfNeeded;
- (void)initGestureRecognizers;
- (_Bool)_viewControllerIsChildOfExpandedSplitViewController:(id)arg1;
- (_Bool)_previewingIsPossibleForView:(id)arg1;
- (void)_activateFeedback;
- (id)_transitionDelegateForPreviewViewController:(id)arg1 atPosition:(struct CGPoint)arg2 inView:(id)arg3;
- (_Bool)_usesPreviewInteraction;
- (void)_configureCommitInteractionProgressForView:(id)arg1;
- (_Bool)configureRevealTransformSourceViewSnapshotSuppressionFromLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (_Bool)_usesPreviewPresentationController;
- (void)_setCalloutBarHidden:(_Bool)arg1;
- (void)_setStatusBarHidden:(_Bool)arg1;
- (_Bool)startInteractivePreviewAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)_previewPresentationControllerDidScheduleDismiss;
- (void)commitInteractivePreview;
- (void)configureRevealTransformWithInteractionProgress:(id)arg1 forLocation:(struct CGPoint)arg2 inView:(id)arg3 containerView:(id)arg4;
- (void)_resetCustomPresentationHooks;
- (void)_finalizeInteractivePreview;
- (void)_handleRevealGesture:(id)arg1;
- (void)_handleTouchObservingGesture:(id)arg1;
- (_Bool)startInteractivePreviewWithGestureRecognizer:(id)arg1;
- (void)_turnOnFeedbackGenerator;
- (void)cancelInteractivePreview;
- (void)_turnOffFeedbackGenerator;
- (void)forcePresentationController:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)forcePresentationControllerWantsToCommit:(id)arg1;

@end
