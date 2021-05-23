/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPresentationController.h>

@class NSMapTable, NSString, UIView, _UISearchPresentationAssistant;

@protocol _UISearchControllerPresenting;

__attribute__((visibility("hidden")))
@interface _UISearchPresentationController : UIPresentationController

{
    _UISearchPresentationAssistant *_assistant;
    UIView *_placeholderView;
    NSMapTable *_excisedSearchBarConstraitMap;
    NSMapTable *_placeholderConstraitMap;
    struct CGRect _finalFrameForContainerView;
    struct {
        unsigned int searchBarWasTableHeaderView:1;
        unsigned int excisedSearchBarDuringPresentation:1;
        unsigned int searchBarWantedAutolayoutBeforeExcision:1;
    } _controllerFlags;
}

@property (nonatomic, readonly) UIView *backgroundObscuringView;
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

+ (_Bool)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2;

- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)adaptivePresentationStyle;
- (void)containerViewWillLayoutSubviews;
- (_Bool)shouldPresentInFullscreen;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (void)presentationTransitionWillBegin;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)_transitionFromWillBegin;
- (void)_transitionFromDidEnd;
- (void)_transitionToWillBegin;
- (void)_transitionToDidEnd;
- (_Bool)_shouldKeepCurrentFirstResponder;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (_Bool)_inheritsPresentingViewControllerThemeLevel;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)showBackgroundObscuringView;
- (void)hideBackgroundObscuringView;
- (void)setContentVisible:(_Bool)arg1;
- (double)_visibleRefreshControlHeightForTableView:(id)arg1;
- (void)_exciseSearchBarFromCurrentContext;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_placeSearchBarBackIntoOriginalContext;
- (void)_presentationTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarWillBegin;
- (void)_presentationTransitionWithSearchBarHostedByNavBarDidEnd:(_Bool)arg1;
- (void)_presentationTransitionWithSearchBarNotHostedByNavBarDidEnd:(_Bool)arg1;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarWillBegin;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarWillBegin;
- (void)_dismissalTransitionWithSearchBarHostedByNavBarDidEnd:(_Bool)arg1;
- (void)_dismissalTransitionWithSearchBarNotHostedByNavBarDidEnd:(_Bool)arg1;
- (id)_constraintCopyOfConstraint:(id)arg1 replaceItem:(id)arg2 withItem:(id)arg3;
- (void)_layoutPresentationWithSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;

@end
