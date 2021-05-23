/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UITargetedPreview, UIView, UIVisualEffectView, _UIContextMenuActionsListView, _UIContextMenuLayoutArbiter, _UIContextMenuLayoutArbiterOutput, _UIContextMenuStyle, _UIFulfilledContextMenuConfiguration, _UIPreviewPlatterPanController, _UIPreviewPlatterView;

@protocol _UIPreviewPlatterPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterPresentationController : UIPresentationController <Swift>

{
    _Bool _isAnimatingPresentation;
    _Bool _platterContentSizeDidChange;
    UIView *_platterContainerView;
    UIView *_platterTransitionView;
    UIVisualEffectView *_backgroundEffectView;
    _UIPreviewPlatterView *_contentPlatterView;
    _UIContextMenuActionsListView *_actionsView;
    NSArray *_accessoryViews;
    _UIContextMenuLayoutArbiterOutput *_currentLayout;
    _UIFulfilledContextMenuConfiguration *_displayedConfiguration;
    UITapGestureRecognizer *_platterActionTapGestureRecognizer;
    UITapGestureRecognizer *_dismissalTapGestureRecognizer;
    UIPanGestureRecognizer *_actionScrubbingHandoffGestureRecognizer;
    UITargetedPreview *_sourcePreview;
    _UIPreviewPlatterPanController *_platterPanController;
    _UIContextMenuLayoutArbiter *_layoutArbiter;
    _UIContextMenuStyle *_currentStyle;
    struct CGSize _platterContentSize;
}

@property (retain, nonatomic) UITapGestureRecognizer *platterActionTapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *dismissalTapGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *actionScrubbingHandoffGestureRecognizer;
@property (retain, nonatomic) _UIFulfilledContextMenuConfiguration *displayedConfiguration;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) _UIPreviewPlatterPanController *platterPanController;
@property (retain, nonatomic) _UIContextMenuLayoutArbiter *layoutArbiter;
@property (copy, nonatomic) _UIContextMenuStyle *currentStyle;
@property (nonatomic) struct CGSize platterContentSize;
@property (nonatomic) _Bool platterContentSizeDidChange;
@property (weak, nonatomic) id <_UIPreviewPlatterPresentationControllerDelegate> delegate;
@property (nonatomic, readonly) UIView *platterTransitionView;
@property (nonatomic, readonly) UIView *platterContainerView;
@property (nonatomic, readonly) UIVisualEffectView *backgroundEffectView;
@property (nonatomic, readonly) _UIPreviewPlatterView *contentPlatterView;
@property (nonatomic, readonly) _UIContextMenuActionsListView *actionsView;
@property (nonatomic) _Bool isAnimatingPresentation;
@property (nonatomic, readonly) NSArray *accessoryViews;
@property (nonatomic, readonly) _UIContextMenuLayoutArbiterOutput *currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (long long)presentationStyle;
- (void)previewActionsView:(id)arg1 didSelectAction:(id)arg2;
- (void)_testing_tapAnAction;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldOccludeDuringPresentation;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (void)platterPanInteractionEnded:(id)arg1;
- (void)platterPanControllerDidSwipeDown:(id)arg1;
- (void)platterPanInteractionBegan:(id)arg1;
- (void)platterPanControllerDidTearOff:(id)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (_Bool)_shouldKeepCurrentFirstResponder;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)_shouldRestoreFirstResponder;
- (_Bool)_shouldPreserveFirstResponder;
- (void)_updatePresentedViewFrame;
- (id)_actionsOnlyViewControllerForSourcePreview:(id)arg1;
- (void)_createActionsViewIfNecessary;
- (void)_handleDismissalTapGesture:(id)arg1;
- (void)_handleActionHandoffGesture:(id)arg1;
- (void)_updatePlatterContentSizeWithPreferredContentSize:(struct CGSize)arg1;
- (void)_updatePlatterContainerViewTraitCollection;
- (void)_handlePlatterActionTapGesture:(id)arg1;
- (void)_preDismissalTasks;
- (void)_updatePlatterAndActionViewLayoutForce:(_Bool)arg1 updateAttachment:(_Bool)arg2;
- (void)_updateLayoutAndAttachment:(_Bool)arg1;
- (void)_updateActionsViewReversesOrderForAttachment:(unsigned long long)arg1;
- (void)setDisplayedMenu:(id)arg1 withAnimationStyle:(unsigned long long)arg2;
- (id)initWithPresentingViewController:(id)arg1 configuration:(id)arg2 sourcePreview:(id)arg3 style:(id)arg4;
- (void)tearOffForDraggingWithDragContainerView:(id)arg1;
- (void)_testing_dismissByTappingOutside;

@end
