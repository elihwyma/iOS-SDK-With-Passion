/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPresentationController.h>

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, _UIAnimationCoordinator, _UIDimmingKnockoutBackdropView;

@protocol UIActionSheetPresentationControllerDismissActionView, UIActionSheetPresentationControllerVisualStyle, _UIActionSheetCompactPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIActionSheetCompactPresentationController : UIPresentationController

{
    _Bool _avoidsKeyboardDisabled;
    _Bool _shouldAdoptPresentedAppearance;
    _Bool _hasPendingAnimatedLayout;
    id <_UIActionSheetCompactPresentationControllerDelegate> _actionSheetDelegate;
    UIView<UIActionSheetPresentationControllerDismissActionView> *_dismissActionView;
    UILongPressGestureRecognizer *_dismissActionViewGestureRecognizer;
    UITapGestureRecognizer *_dimmingViewDismissTapGestureRecognizer;
    UIView *_dimmingView;
    _UIDimmingKnockoutBackdropView *_backdropView;
    _UIAnimationCoordinator *_animationCoordinator;
    id <UIActionSheetPresentationControllerVisualStyle> _visualStyle;
    double _pseudoAlertPreferredTop;
}

@property (nonatomic) _Bool shouldAdoptPresentedAppearance;
@property (retain, nonatomic) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView;
@property (retain, nonatomic) UILongPressGestureRecognizer *dismissActionViewGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *dimmingViewDismissTapGestureRecognizer;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) _UIDimmingKnockoutBackdropView *backdropView;
@property (retain, nonatomic) _UIAnimationCoordinator *animationCoordinator;
@property (retain, nonatomic) id <UIActionSheetPresentationControllerVisualStyle> visualStyle;
@property (nonatomic) double pseudoAlertPreferredTop;
@property (nonatomic) _Bool hasPendingAnimatedLayout;
@property (copy, nonatomic) NSString *dismissActionTitle;
@property (nonatomic) _Bool avoidsKeyboardDisabled;
@property (nonatomic) _Bool dismissActionUsesShorterHeightWhenCompactVertically;
@property (weak, nonatomic) id <_UIActionSheetCompactPresentationControllerDelegate> actionSheetDelegate;

- (void)dealloc;
- (struct CGSize)preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_willRunTransitionForCurrentStateDeferred:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldPresentInFullscreen;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldOccludeDuringPresentation;
- (void)_layoutViews;
- (void)_handleDismiss:(id)arg1;
- (void)_dismiss;
- (struct UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double *)arg1 rightMargin:(double *)arg2;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (CDStruct_758ece87)_currentLayoutGeometry;
- (void)_subscribeToKeyboardNotifications;
- (void)_applyVisualAffordancesToViews;
- (void)_unsubscribeFromKeyboardNotifications;
- (double)_resizeAnimationDuration;
- (void)_keyboardChanged:(id)arg1;
- (void)_updateForKeyboardStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(long long)arg4;
- (struct CGSize)_minimumSizeForDismissButton;
- (_Bool)_shouldDisableAvoidsKeyboard;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 visualStyle:(id)arg3;
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (void)dismissalTransitionWillBegin;
- (void)beginPseudoAlertPresentationMode;
- (void)endPseudoAlertPresentationMode;

@end
