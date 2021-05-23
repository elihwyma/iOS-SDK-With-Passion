/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPresentationController.h>

@class NSString, UIView, _UISearchPresentationAssistant;

@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchFormSheetPresentationController : UIPresentationController

{
    _UISearchPresentationAssistant *_assistant;
    UIView *_wrapperView;
    struct CGRect finalFrameForContainerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) UIView *searchBarContainerView;
@property (nonatomic, readonly) _Bool shouldAccountForStatusBar;
@property (nonatomic, readonly) double statusBarAdjustment;
@property (nonatomic, readonly) _Bool searchBarToBecomeTopAttached;
@property (nonatomic, readonly) _Bool resultsUnderlapsSearchBar;
@property (nonatomic, readonly) _Bool searchBarCanContainScopeBar;
@property (nonatomic, readonly) _Bool searchBarShouldClipToBounds;
@property (nonatomic, readonly) double resultsControllerContentOffset;
@property (nonatomic, readonly) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (nonatomic, readonly) struct CGRect finalFrameForContainerView;
@property (nonatomic, readonly) _Bool animatorShouldLayoutPresentationViews;
@property (nonatomic, readonly) _Bool forceObeyNavigationBarInsets;
@property (nonatomic, readonly) unsigned long long edgeForHidingNavigationBar;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)presentedView;
- (long long)adaptivePresentationStyle;
- (void)containerViewWillLayoutSubviews;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (void)presentationTransitionWillBegin;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect)_frameOfPresentedViewControllerViewInSuperview;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)_transitionFromWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionToWillBegin;
- (void)_transitionToDidEnd;
- (_Bool)_shouldKeepCurrentFirstResponder;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)setContentVisible:(_Bool)arg1;
- (void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(_Bool)arg2;
- (_Bool)_shouldSubscribeToKeyboardNotifications;

@end
