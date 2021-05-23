/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <UIKit/UIPresentationController.h>

@class MTLumaDodgePillView, NSString, UILabel, UINotificationFeedbackGenerator, UIPanGestureRecognizer, UIView, _UIStatesFeedbackGenerator;

@protocol PLExpandedPlatter, PLExpandedPlatterPresentationControllerDelegate, PLKeyboardHomeAffordanceAssertion, UIViewControllerTransitionCoordinator;

@interface PLExpandedPlatterPresentationController : UIPresentationController

{
    UIView *_sourceView;
    UIView<PLExpandedPlatter> *_presentedExpandedPlatter;
    struct CGRect _sourceViewInitialPresentationFrame;
    struct CGRect _sourceViewFinalPresentationFrame;
    struct CGRect _sourceViewFinalDismissalFrame;
    struct CGAffineTransform _sourceViewInitialTransform;
    id <UIViewControllerTransitionCoordinator> _activeTransitionCoordinator;
    UIView *_dismissLabelContainerView;
    UILabel *_dismissLabel;
    _UIStatesFeedbackGenerator *_dismissFeedbackBehavior;
    UINotificationFeedbackGenerator *_homeAffordanceFeedbackGenerator;
    _Bool _didPlayDismissHaptic;
    struct CGSize _childPreferredContentSize;
    MTLumaDodgePillView *_homeAffordanceView;
    _Bool _listenToKeyboardEvents;
    struct {
        unsigned int didPerformPresentedExpandedPlatterCheck:1;
        unsigned int didSetSourceViewInitialPresentationFrame:1;
        unsigned int didSetSourceViewFinalPresentationFrame:1;
        unsigned int didSetSourceViewFinalDismissalFrame:1;
    } _expandedPlatterPresentationControllerHelperFlags;
    _Bool _homeAffordanceVisible;
    id <PLExpandedPlatterPresentationControllerDelegate> _presentationControllerDelegate;
    UIPanGestureRecognizer *_homeAffordancePanGesture;
    double _additionalHomeAffordanceSpacing;
    id <PLKeyboardHomeAffordanceAssertion> _keyboardHomeAffordance;
    struct CGRect _keyboardFrame;
}

@property (nonatomic, getter=_keyboardFrame, setter=_setKeyboardFrame:) struct CGRect keyboardFrame;
@property (retain, nonatomic, getter=_keyboardHomeAffordance, setter=_setKeyboardHomeAffordance:) id <PLKeyboardHomeAffordanceAssertion> keyboardHomeAffordance;
@property (weak, nonatomic) id <PLExpandedPlatterPresentationControllerDelegate> presentationControllerDelegate;
@property (nonatomic, getter=isHomeAffordanceVisible) _Bool homeAffordanceVisible;
@property (retain, nonatomic) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (nonatomic) double additionalHomeAffordanceSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGRect)useableContainerViewBoundsForExpandedPlatter:(id)arg1 inContainerViewWithBounds:(struct CGRect)arg2;
+ (struct CGSize)_sizeOfViewWithPreferredContentSize:(struct CGSize)arg1 inUseableContainerViewBounds:(struct CGRect)arg2;
+ (struct CGSize)_sizeOfExpandedPlatter:(id)arg1 withPreferredContentSize:(struct CGSize)arg2 inContainerViewWithBounds:(struct CGRect)arg3;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (_Bool)_shouldMakePresentedViewControllerFirstResponder;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)_handleBackgroundTap:(id)arg1;
- (id)_presentedExpandedPlatter;
- (struct CGRect)_sourceViewFinalPresentationFrame;
- (void)_setHomeAffordanceVisible:(_Bool)arg1;
- (void)_setLocalHomeAffordanceVisible:(_Bool)arg1;
- (void)_setKeyboardHomeAffordanceVisible:(_Bool)arg1;
- (_Bool)_isLocalHomeAffordanceVisible;
- (void)_handleHomeAffordancePan:(id)arg1;
- (void)_fireHomeGesture;
- (void)_settleHomeAffordance;
- (id)_clickPresentationInteractionManager;
- (void)_dismissExpandedPlatterWithTrigger:(long long)arg1;
- (void)_configureDismissFeedbackIfNecessary;
- (void)_configureDismissLabelIfNecessary;
- (struct CGRect)_dismissLabelContainerViewFrameForPresentedViewFrame:(struct CGRect)arg1;
- (void)_actuateFeedbackForDismissalInvalidationIfNecessary;
- (_Bool)_actuateFeedbackForDismissalIfNecessary;
- (void)_popDismissLabel;
- (struct CGRect)_frameOfPresentedViewInContainerViewWithBounds:(struct CGRect)arg1;
- (struct CGRect)_sourceViewInitialPresentationFrame;
- (struct CGRect)_sourceViewFinalDismissalFrame;
- (struct UIEdgeInsets)_contentInsetWithPresentedFrame:(struct CGRect)arg1 inContainerViewWithBounds:(struct CGRect)arg2;
- (struct CGPoint)_contentOffsetForPresentedExpandedPlatterView:(id)arg1;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimatorDidFinishFirstResponderChanges:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 sourceView:(id)arg4;
- (_Bool)_isKeyboardHomeAffordanceVisible;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (void)completeDismissal;
- (struct CGRect)initialPresentationFrameOfPresentingViewInContainerView;
- (struct CGRect)initialFrameOfPresentedViewInContainerView;
- (struct CGRect)finalPresentationFrameOfPresentingViewInContainerView;
- (struct CGRect)finalDismissalFrameOfPresentingViewInContainerView;

@end
