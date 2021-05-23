/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, NSUserActivity, UIDimmingView, UIDragInteraction, UIDropShadowView, UIPercentDrivenInteractiveTransition, UIView, UIViewPropertyAnimator, _UIRemoteViewController, _UISheetAnimationController, _UISheetInteraction, _UISheetLayoutInfo, _UISheetPresentationControllerConfiguration;

@protocol _UISheetPresentationControllerDelegate;

@interface _UISheetPresentationController : UIPresentationController <Swift>

{
    _Bool __shouldPresentedViewControllerControlStatusBarAppearance;
    _Bool __didAttemptToStartDismiss;
    _Bool __didTearOff;
    _Bool __remoteDismissing;
    _Bool __dimmingViewTapDismissing;
    _Bool __keyboardShown;
    _Bool __isRemote;
    _Bool __presentsAtStandardHalfHeight;
    _Bool __allowsTearOff;
    _UISheetLayoutInfo *__layoutInfo;
    UIDimmingView *__confinedDimmingView;
    _UISheetInteraction *__sheetInteraction;
    _UISheetAnimationController *__animationController;
    UIPercentDrivenInteractiveTransition *__interactionController;
    UIDragInteraction *__tearOffInteraction;
    NSUserActivity *__tearOffActivity;
    _UIRemoteViewController *__connectedRemoteViewController;
    UIViewPropertyAnimator *__remoteDismissalPropertyAnimator;
    UIDropShadowView *_dropShadowView;
    UIDimmingView *_dimmingView;
    struct CGPoint __initialTearOffPoint;
    struct CGRect _frameOfPresentedViewInContainerView;
}

@property (nonatomic, readonly) _UISheetLayoutInfo *_layoutInfo;
@property (nonatomic, readonly) UIDimmingView *_confinedDimmingView;
@property (nonatomic, readonly) _UISheetPresentationController *_parentSheetPresentationController;
@property (nonatomic, readonly) _UISheetPresentationController *_childSheetPresentationController;
@property (nonatomic) struct CGRect frameOfPresentedViewInContainerView;
@property (nonatomic, setter=_setShouldPresentedViewControllerControlStatusBarAppearance:) _Bool _shouldPresentedViewControllerControlStatusBarAppearance;
@property (nonatomic, readonly) _UISheetInteraction *_sheetInteraction;
@property (retain, nonatomic, setter=_setAnimatedTransition:) _UISheetAnimationController *_animationController;
@property (retain, nonatomic, setter=_setInteractiveTransition:) UIPercentDrivenInteractiveTransition *_interactionController;
@property (nonatomic, setter=_setDidAttemptToStartDismiss:) _Bool _didAttemptToStartDismiss;
@property (nonatomic, readonly) UIDragInteraction *_tearOffInteraction;
@property (nonatomic, setter=_setDidTearOff:) _Bool _didTearOff;
@property (nonatomic, setter=_setInitialTearOffPoint:) struct CGPoint _initialTearOffPoint;
@property (retain, nonatomic, setter=_setTearOffActivity:) NSUserActivity *_tearOffActivity;
@property (nonatomic, readonly, getter=_isHosting) _Bool _hosting;
@property (nonatomic, readonly) _UIRemoteViewController *_connectedRemoteViewController;
@property (nonatomic, readonly) _UIRemoteViewController *_expectedRemoteViewController;
@property (nonatomic, getter=_isRemoteDismissing, setter=_setRemoteDismissing:) _Bool _remoteDismissing;
@property (retain, nonatomic) UIViewPropertyAnimator *_remoteDismissalPropertyAnimator;
@property (nonatomic, getter=_isDimmingViewTapDismissing, setter=_setDimmingViewTapDismissing:) _Bool _dimmingViewTapDismissing;
@property (nonatomic, getter=_isKeyboardShown, setter=_setKeyboardShown:) _Bool _keyboardShown;
@property (nonatomic, readonly) UIDropShadowView *dropShadowView;
@property (nonatomic, readonly) UIDimmingView *dimmingView;
@property (nonatomic, setter=_setMode:) long long _mode;
@property (nonatomic, setter=_setIsRemote:) _Bool _isRemote;
@property (retain, nonatomic, setter=_setConfiguration:) _UISheetPresentationControllerConfiguration *_configuration;
@property (nonatomic, readonly) _Bool _isRootPresentation;
@property (nonatomic, setter=_setWantsBottomAttached:) _Bool _wantsBottomAttached;
@property (nonatomic, setter=_setPresentsAtStandardHalfHeight:) _Bool _presentsAtStandardHalfHeight;
@property (nonatomic, setter=_setAllowsTearOff:) _Bool _allowsTearOff;
@property (retain, nonatomic, setter=_setSourceView:) UIView *_sourceView;
@property (nonatomic, getter=_shouldDismissWhenTappedOutside, setter=_setShouldDismissWhenTappedOutside:) _Bool shouldDismissWhenTappedOutside;
@property (nonatomic, setter=_setShouldScaleDownBehindDescendantSheets:) _Bool _shouldScaleDownBehindDescendantSheets;
@property (nonatomic, setter=_setWantsFullScreen:) _Bool _wantsFullScreen;
@property (nonatomic, setter=_setWantsBottomAttachedInCompactHeight:) _Bool _wantsBottomAttachedInCompactHeight;
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:) _Bool _widthFollowsPreferredContentSizeWhenBottomAttached;
@property (nonatomic, setter=_setWantsGrabber:) _Bool _wantsGrabber;
@property (nonatomic) double _cornerRadiusForPresentationAndDismissal;
@property (weak, nonatomic) id <_UISheetPresentationControllerDelegate> delegate;
@property (copy, nonatomic, setter=_setDetents:) NSArray *_detents;
@property (nonatomic, setter=_setIndexOfCurrentDetent:) long long _indexOfCurrentDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetent:) long long _indexOfLastUndimmedDetent;
@property (copy, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_initialMode;

- (long long)presentationStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)presentedView;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldOccludeDuringPresentation;
- (void)sheetInteraction:(id)arg1 didChangeOffset:(struct CGPoint)arg2;
- (_Bool)sheetInteraction:(id)arg1 shouldBeginHorizontalRubberBandingAtPoint:(struct CGPoint)arg2;
- (struct CGPoint)offsetForInterruptedAnimationInSheetInteraction:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (void)dismissalTransitionWillBegin;
- (id)_preferredAnimationControllerForDismissal;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)_realSourceViewGeometryDidChange;
- (_Bool)_inheritsPresentingViewControllerThemeLevel;
- (_Bool)_shouldPreserveFirstResponder;
- (id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
- (void)_containerViewBoundsDidChange;
- (void)_containerViewTraitCollectionDidChange;
- (void)_containerViewSafeAreaInsetsDidChange;
- (void)_containerViewLayoutSubviews;
- (id)_preferredInteractionControllerForDismissal:(id)arg1;
- (void)_sheetLayoutInfoPrelayout:(id)arg1;
- (void)_sheetLayoutInfoLayout:(id)arg1;
- (void)_sheetLayoutInfoDidInvalidateOutput:(id)arg1;
- (void)_accessibilityReduceMotionStatusDidChange;
- (void)_updateLayoutInfoContainerSafeAreaInsets;
- (void)_updateLayoutInfoContainerTraitCollection;
- (void)_updateShouldPresentedViewControllerControlStatusBarAppearance;
- (void)_keyboardAboutToShow:(id)arg1;
- (void)_keyboardAboutToHide:(id)arg1;
- (void)_keyboardAboutToChangeFrame:(id)arg1;
- (void)transitionWillBegin:(_Bool)arg1;
- (void)_handleKeyboardNotification:(id)arg1 aboutToHide:(_Bool)arg2;
- (void)_tryToConnectToRemoteViewController:(id)arg1;
- (void)_updatePresentedViewFrame;
- (void)_updateAnimationController;
- (void)_updateInteractiveTransitionWithProgress:(double)arg1;
- (void)_completeInteractiveTransition:(_Bool)arg1 duration:(double)arg2 timingCurve:(id)arg3;
- (void)_startInteractiveTransitionWithProgress:(double)arg1;
- (void)_resetRemoteDismissing;
- (void)_startInteractiveTransitionFromRemoteWithProgress:(double)arg1 offset:(double)arg2;
- (void)_updateInteractiveTransitionFromRemoteWithProgress:(double)arg1 offset:(double)arg2;
- (void)_completeInteractiveTransitionFromRemote:(_Bool)arg1 offset:(double)arg2 duration:(double)arg3 timingCurve:(id)arg4;

@end
