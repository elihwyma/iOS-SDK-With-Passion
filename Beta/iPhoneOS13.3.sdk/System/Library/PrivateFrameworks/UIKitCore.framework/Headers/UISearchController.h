/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UINavigationItem, UISearchBar, UISystemInputViewController, UITapGestureRecognizer, UIView, _UINavigationControllerManagedSearchPalette, _UISearchControllerDidScrollDelegate;

@protocol UISearchControllerDelegate, UISearchResultsUpdating, UIViewControllerAnimatedTransitioning;

@interface UISearchController : UIViewController <Swift>

{
    UISearchBar *_searchBar;
    int _barPresentationStyle;
    id <UIViewControllerAnimatedTransitioning> _animator;
    id _windowWillAnimateToken;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    UISystemInputViewController *_systemInputViewController;
    _Bool _shouldFocusResults;
    UITapGestureRecognizer *_backButtonDismissGestureRecognizer;
    UITapGestureRecognizer *_doneButtonGestureRecognizer;
    long long _lastKnownInterfaceOrientation;
    struct {
        unsigned int searchBarWasTableHeaderView:1;
        unsigned int searchBarWasFirstResponder:1;
        unsigned int transitioningOut:1;
        unsigned int delegateWantsInsertSearchFieldTextSuggestion:1;
        unsigned int automaticallyShowsCancelButton:1;
        unsigned int automaticallyShowsScopeBar:1;
        unsigned int automaticallyShowsSearchResultsController:1;
        unsigned int explicitlyShowsSearchResultsController:1;
    } _controllerFlags;
    _Bool _obscuresBackgroundDuringPresentation;
    _Bool _hidesNavigationBarDuringPresentation;
    _Bool __tabBarHidden;
    _Bool __showResultsForEmptySearch;
    _Bool __shouldRespectPreferredContentSize;
    UIView *_resultsControllerViewContainer;
    _UINavigationControllerManagedSearchPalette *_managedPalette;
    id <UISearchResultsUpdating> _searchResultsUpdater;
    id <UISearchControllerDelegate> _delegate;
    UIViewController *_searchResultsController;
    long long __previousSearchBarPosition;
    double __resultsContentScrollViewPresentationOffset;
    UIView *__systemInputMarginView;
    UINavigationItem *__navigationItemCurrentlyDisplayingSearchController;
    unsigned long long __requestedInteractionModel;
}

@property (nonatomic, readonly) int _barPresentationStyle;
@property (nonatomic, readonly) _Bool _isShowingSearchResultsControllerWhileActive;
@property (nonatomic, readonly) _Bool _searchbarWasTableHeaderView;
@property (nonatomic) long long _previousSearchBarPosition;
@property (retain, nonatomic) UIView *_resultsControllerViewContainer;
@property (nonatomic) double _resultsContentScrollViewPresentationOffset;
@property (nonatomic, readonly) UISystemInputViewController *_systemInputViewController;
@property (nonatomic) _Bool _tabBarHidden;
@property (retain, nonatomic) UIView *_systemInputMarginView;
@property (readonly) _Bool _delegateWantsInsertSearchFieldTextSuggestion;
@property (retain, nonatomic, readonly) _UINavigationControllerManagedSearchPalette *_managedPalette;
@property (weak, nonatomic) UINavigationItem *_navigationItemCurrentlyDisplayingSearchController;
@property (nonatomic, setter=_setShowResultsForEmptySearch:) _Bool _showResultsForEmptySearch;
@property (nonatomic, setter=_setRequestedInteractionModel:) unsigned long long _requestedInteractionModel;
@property (nonatomic, setter=_setShouldRespectPreferredContentSize:) _Bool _shouldRespectPreferredContentSize;
@property (nonatomic, setter=_setAutomaticallyShowsCancelButton:) _Bool _automaticallyShowsCancelButton;
@property (nonatomic, setter=_setAutomaticallyShowsScopeBar:) _Bool _automaticallyShowsScopeBar;
@property (nonatomic, getter=_automaticallyShowsSearchResultsController, setter=_setAutomaticallyShowsSearchResultsController:) _Bool _automaticallyShowsSearchResultsController;
@property (nonatomic, getter=_showsSearchResultsController, setter=_setShowsSearchResultsController:) _Bool _showsSearchResultsController;
@property (weak, nonatomic) id <UISearchResultsUpdating> searchResultsUpdater;
@property (nonatomic, getter=isActive) _Bool active;
@property (weak, nonatomic) id <UISearchControllerDelegate> delegate;
@property (nonatomic) _Bool dimsBackgroundDuringPresentation;
@property (nonatomic) _Bool obscuresBackgroundDuringPresentation;
@property (nonatomic) _Bool hidesNavigationBarDuringPresentation;
@property (nonatomic, readonly) UIViewController *searchResultsController;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic) _Bool automaticallyShowsSearchResultsController;
@property (nonatomic) _Bool showsSearchResultsController;
@property (nonatomic) _Bool automaticallyShowsCancelButton;
@property (nonatomic) _Bool automaticallyShowsScopeBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_resignSearchBarAsFirstResponder:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)focusItemContainer;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)_uninstallBackGestureRecognizer;
- (void)_installBackGestureRecognizer;
- (void)viewDidLayoutSubviews;
- (void)_dismissFromBackButton:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)_requiresCustomPresentationController;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_searchBarSuperviewChanged;
- (void)_searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)_searchBarCancelButtonClicked:(id)arg1;
- (void)_searchBarTextDidBeginEditing:(id)arg1;
- (void)_searchBarSearchButtonClicked:(id)arg1;
- (void)_searchBarTokensDidChange:(id)arg1;
- (void)_sendDelegateInsertSearchFieldTextSuggestion:(id)arg1;
- (_Bool)_disableAutomaticKeyboardUI;
- (_Bool)_searchBarShouldFinalizeBecomingFirstResponder;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_setTransitioningOutWithoutDisappearing:(_Bool)arg1;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (_Bool)_transitioningOutWithoutDisappearing;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (id)_defaultAnimationController;
- (id)_searchPresentationController;
- (_Bool)_resultsControllerWillLayoutVisibleUnderContainerView;
- (void)_dismissPresentation:(_Bool)arg1;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize)arg1;
- (void)_updateSystemInputViewController;
- (void)_connectSearchBar:(id)arg1;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1;
- (void)_uninstallDoneGestureRecognizer;
- (void)_removeCarPlayLimitedUIObserver;
- (void)_limitedUIDidChangeAnimated:(_Bool)arg1;
- (id)_createAnimationCoordinator;
- (void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1;
- (id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(_Bool)arg2;
- (void)_resizeResultsControllerWithDelta:(struct CGSize)arg1;
- (void)_performAutomaticPresentation;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1;
- (id)_locatePresentingViewController;
- (void)_watchScrollView:(id)arg1 forScrolling:(_Bool)arg2;
- (id)_locatePresentingViewControllerIfInManagedPaletteOrHostedByNavigationBar;
- (void)_sizeSearchViewToPresentingViewController:(id)arg1;
- (void)_willPresentFromViewController:(id)arg1;
- (void)_didPresentFromViewController:(id)arg1;
- (void)_willDismissSearchController;
- (void)_didDismissSearchController;
- (void)_setupForCurrentTraitCollection;
- (void)_installDoneGestureRecognizer;
- (id)_carPlayLimitedUIToken;
- (void)_setCarPlayLimitedUIToken:(id)arg1;
- (void)_updateFocusFromDoneButton:(id)arg1;
- (id)_carPlayLimitedUIViewController;
- (void)_setCarPlayLimitedUIViewController:(id)arg1;
- (void)_updateBarPresentationStyleForPresentingViewController:(id)arg1;
- (_Bool)_allowFormSheetStylePresentation;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1 oldPaletteFrame:(struct CGRect)arg2;
- (_Bool)_containedInNavigationPaletteAndNotHidden;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize)arg1;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize)arg1;
- (void)_beginWatchingPresentingController;
- (void)_endWatchingPresentingController;
- (void)_navigationControllerWillShowViewController:(id)arg1;
- (id)initWithSearchResultsController:(id)arg1;
- (void)_startManagingPalette:(id)arg1;
- (void)_stopManagingPalette;

@end
