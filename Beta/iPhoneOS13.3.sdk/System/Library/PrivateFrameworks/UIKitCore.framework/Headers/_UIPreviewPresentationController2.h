/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPreviewPresentationController.h>

@class UIViewPropertyAnimator, _UIPreviewPresentationPlatterView;

@protocol UIViewControllerPreviewing_Internal, _UIPreviewInteractionHighlighting;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationController2 : UIPreviewPresentationController

{
    _Bool _hasPerformedInitialLayout;
    _Bool _shouldScaleContentViewToAspectFitPlatter;
    _Bool _shouldEnableUserInteractionOnPlatter;
    id <UIViewControllerPreviewing_Internal> _previewingContext;
    _UIPreviewPresentationPlatterView *_revealPlatterView;
    id <_UIPreviewInteractionHighlighting> _currentHighlighter;
    UIViewPropertyAnimator *_currentTransitionAnimator;
    double _interactiveTransitionFraction;
    _UIPreviewPresentationPlatterView *_contentPlatterView;
    struct CGAffineTransform _preferredContentPlatterTransform;
}

@property (retain, nonatomic) _UIPreviewPresentationPlatterView *revealPlatterView;
@property (nonatomic) _Bool hasPerformedInitialLayout;
@property (nonatomic) struct CGAffineTransform preferredContentPlatterTransform;
@property (weak, nonatomic) id <UIViewControllerPreviewing_Internal> previewingContext;
@property (weak, nonatomic) id <_UIPreviewInteractionHighlighting> currentHighlighter;
@property (weak, nonatomic) UIViewPropertyAnimator *currentTransitionAnimator;
@property (nonatomic) double interactiveTransitionFraction;
@property (retain, nonatomic) _UIPreviewPresentationPlatterView *contentPlatterView;
@property (nonatomic, readonly) struct CGRect _computedPlatterFrame;
@property (nonatomic) _Bool shouldScaleContentViewToAspectFitPlatter;
@property (nonatomic) _Bool shouldEnableUserInteractionOnPlatter;

- (void)containerViewDidLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)_shouldReduceMotion;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_prepareContentViewsForPresentationAnimationsIfNeeded;
- (void)_performPresentationAnimationsWithTransitionContext:(id)arg1;
- (void)_performTransitionAnimations:(CDUnknownBlockType)arg1;
- (void)_performDismissAnimationsWithTransitionContext:(id)arg1;
- (void)_layoutContentViews;
- (struct CGRect)_preferredContentPlatterRectForContainerRect:(struct CGRect)arg1;
- (void)_performReducedMotionDismissAnimationsWithTransitionContext:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 previewingContext:(id)arg3;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;
- (void)_performReducedMotionPresentationAnimationsWithTransitionContext:(id)arg1;
- (void)_updateFromInteractionEffect:(id)arg1;

@end
