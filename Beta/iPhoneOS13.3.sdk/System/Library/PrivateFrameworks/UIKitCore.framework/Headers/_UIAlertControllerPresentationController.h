/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSLayoutConstraint, NSString, UIAlertVisualStyleUpdatableConstraints, UIGestureRecognizer, UIView, _UIKeyboardLayoutAlignmentView, _UIStatesFeedbackGenerator;

@protocol _UIForcePresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerPresentationController : UIPresentationController <Swift>

{
    UIView *_dimmingView;
    _UIKeyboardLayoutAlignmentView *keyboardLayoutAlignmentView;
    UIView *keyboardLayoutAlignmentAvailableSpaceView;
    UIAlertVisualStyleUpdatableConstraints *_visualStyleUpdatableConstraints;
    NSLayoutConstraint *_topAvailableSpaceConstraint;
    NSLayoutConstraint *_bottomAvailableSpaceConstraint;
    _Bool constraintsPrepared;
    _Bool _sourceViewSnapshotAndScaleTransformSuppressed;
    _Bool _chromeHidden;
    _Bool __isCurrentContext;
    _Bool __shouldRespectNearestCurrentContextPresenter;
    UIGestureRecognizer *_panningGestureRecognizer;
    CDUnknownBlockType _presentationPhaseCompletionBlock;
    id <_UIForcePresentationControllerDelegate> _forcePresentationControllerDelegate;
    UIView *_revealContainerView;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
}

@property (readonly) UIView *_dimmingView;
@property (setter=_setIsCurrentContext:) _Bool _isCurrentContext;
@property (setter=_setShouldRespectNearestCurrentContextPresenter:) _Bool _shouldRespectNearestCurrentContextPresenter;
@property (nonatomic, getter=_isChromeHidden, setter=_setChromeHidden:) _Bool _chromeHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType presentationPhaseCompletionBlock;
@property (retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer;
@property (nonatomic) _Bool _sourceViewSnapshotAndScaleTransformSuppressed;
@property (nonatomic, readonly) UIView *_revealContainerView;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id <_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;

- (void)setDelegate:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)_presentedAlertControllerDidAdapt;
- (id)_presentedAlertController;
- (void)_prepareDimmingViewIfNecessary;
- (void)_prepareConstraintsIfNecessary;
- (void)_updateConstraintsIfNecessary;
- (void)containerViewDidLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_willRunTransitionForCurrentStateDeferred:(_Bool)arg1;
- (_Bool)_preserveResponderAcrossWindows;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (_Bool)_canDismissPresentation;
- (_Bool)_canCommitPresentation;
- (long long)adaptivePresentationStyle;
- (void)containerViewWillLayoutSubviews;
- (_Bool)shouldPresentInFullscreen;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (_Bool)_shouldOccludeDuringPresentation;

@end
