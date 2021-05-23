/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIButton, UIColor, UILabel, UINavigationItem, UIPopoverController, UIScrollView, UISearchBar, UISearchDisplayControllerContainerView, UITableView, UIView, UIViewController, _UINavigationControllerPalette, _UISearchControllerDidScrollDelegate;

@protocol UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate;

@interface UISearchDisplayController : NSObject

{
    UIViewController *_viewController;
    UITableView *_tableView;
    UIView *_dimmingView;
    UISearchBar *_searchBar;
    UILabel *_noResultsLabel;
    NSString *_noResultsMessage;
    NSString *_resultsTitle;
    struct __CFArray *_containingScrollViews;
    double _lastKeyboardAdjustment;
    double _lastFooterAdjustment;
    UIPopoverController *_popoverController;
    long long _searchResultsTableViewStyle;
    id _navigationControllerBookkeeper;
    NSArray *_savedSelectedCellsWhenViewWillAppear;
    UIScrollView *_savedContainingScrollView;
    UISearchDisplayControllerContainerView *_containerView;
    unsigned long long _savedSearchBarResizingMask;
    UINavigationItem *_navigationItem;
    struct CGPoint _containingScrollViewContentOffset;
    struct CGRect _searchFieldInNavigationBarFrame;
    _UINavigationControllerPalette *_attachedNavigationPalette;
    UIButton *_animatingAppearanceNavigationButton;
    double _animatingAppearanceNavigationSearchBarWidth;
    UIColor *_dimmingOverlayColor;
    UIView *_tableViewBackgroundHeaderView;
    long long _unactivatedBarPosition;
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;
    struct {
        unsigned int visible:1;
        unsigned int animating:1;
        unsigned int hidIndexBar:1;
        unsigned int hidNavigationBar:1;
        unsigned int noResultsMessageVisible:1;
        unsigned int noResultsMessageAutoDisplay:1;
        unsigned int navigationBarHidingEnabled:1;
        unsigned int dimTableViewOnEmptySearchString:1;
        unsigned int isRotatingWithPopover:1;
        unsigned int cancelButtonManagementDisabled:1;
        unsigned int allowDisablingNavigationBarHiding:1;
        unsigned int showsResultsForEmptyField:1;
        unsigned int searchBarCanBeHoisted:1;
        unsigned int animatingSearchResultsDisappearance:1;
        unsigned int navigationBarShadowWasHidden:1;
        unsigned int hoistingSearchBar:1;
    } _searchDisplayControllerFlags;
    _Bool _displaysSearchBarInNavigationBar;
    id <UISearchDisplayDelegate> _delegate;
    id <UITableViewDataSource> _tableViewDataSource;
    id <UITableViewDelegate> _tableViewDelegate;
    unsigned long long _navigationBarSearchFieldSizing;
    double __activationGapHeight;
    double __additionalNonCollapsingHeightAboveSearchBar;
}

@property (nonatomic) _Bool noResultsMessageVisible;
@property (nonatomic) _Bool automaticallyShowsNoResultsMessage;
@property (copy, nonatomic) NSString *noResultsMessage;
@property (nonatomic, getter=isNavigationBarHidingEnabled) _Bool navigationBarHidingEnabled;
@property (nonatomic) _Bool dimTableViewOnEmptySearchString;
@property (nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) _Bool cancelButtonManagementDisabled;
@property (nonatomic) unsigned long long navigationBarSearchFieldSizing;
@property (nonatomic) double _activationGapHeight;
@property (nonatomic) double _additionalNonCollapsingHeightAboveSearchBar;
@property (nonatomic) id <UISearchDisplayDelegate> delegate;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (weak, nonatomic, readonly) UIViewController *searchContentsController;
@property (nonatomic, readonly) UITableView *searchResultsTableView;
@property (weak, nonatomic) id <UITableViewDataSource> searchResultsDataSource;
@property (weak, nonatomic) id <UITableViewDelegate> searchResultsDelegate;
@property (copy, nonatomic) NSString *searchResultsTitle;
@property (nonatomic) _Bool displaysSearchBarInNavigationBar;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_uiibSetRequiresSearchDisplayControllerSupport;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_containerView;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_searchBarSuperviewWillChange;
- (void)_searchBarSuperviewChanged;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)_searchBarShouldScrollToVisible:(id)arg1;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (double)_statusBarHeight;
- (void)_animateNavigationBarSearchBarAppearance:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (_Bool)hidNavigationBar;
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;
- (void)_managedTableViewDidScroll;
- (void)_updateNoSearchResultsMessageVisiblity;
- (id)_topShadowView;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 searchResultsTableViewStyle:(long long)arg3;
- (void)_configureNewSearchBar;
- (void)_destroyManagedTableView;
- (id)_containingTableView;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (void)_watchContainingTableViewForScrolling:(_Bool)arg1;
- (_Bool)_areSearchContentsSplitViewMaster;
- (void)windowWillAnimateRotation:(id)arg1;
- (void)windowDidRotate:(id)arg1;
- (void)_configureSearchBarForTableView;
- (id)_containingViewOfClass:(Class)arg1;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_popoverClearButtonPressed:(id)arg1;
- (_Bool)_searchBarInNavigationControllerComponent;
- (_Bool)_shouldAccountForStatusBarHeight;
- (struct UIEdgeInsets)_tableViewContentInsets;
- (_Bool)_isSearchBarInBar;
- (void)_adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(_Bool)arg1;
- (id)_createPopoverController;
- (void)_cleanUpSearchBar;
- (void)navigationControllerWillShowViewController:(id)arg1;
- (id)_dimmingOverlayColor;
- (_Bool)_showsResultsForEmptyField;
- (void)_hoistSearchBar;
- (void)_setTableViewVisible:(_Bool)arg1 inView:(id)arg2;
- (void)_sendDelegateDidBeginDidEndSearch;
- (void)_popoverKeyboardDidShow:(id)arg1;
- (void)_popoverKeyboardDidHide:(id)arg1;
- (void)navigationControllerDidShowViewController:(id)arg1;
- (void)navigationControllerDidCancelShowingViewController:(id)arg1;
- (void)_hideVisibleRefreshControl;
- (void)_disableParentScrollViews;
- (void)_enableParentScrollViews;
- (_Bool)_containedInPopover;
- (id)_dimmingViewColor;
- (double)_dimmingViewAlpha;
- (void)_updatePinnedSearchBar;
- (void)showHideAnimationDidFinish;
- (double)_updateNavigationPalette;
- (void)_clearSavedSelectedCellsWeUsedWhenHedgingOurBets;
- (void)_saveSelectedRowsInCaseViewDoesNotReallyAppear;
- (void)_restoreSelectedCellsInCaseViewDidNotReallyAppear;
- (void)_setupNoResultsLabelIfNecessary;
- (void)_configureContainerView;
- (void)setSearchContentsController:(id)arg1;
- (void)_setAllowDisablingNavigationBarHiding:(_Bool)arg1;
- (_Bool)_allowDisablingNavigationBarHiding;
- (void)_clearViewController;
- (id)_noResultsMessageLabel;
- (void)_setShowsResultsForEmptyField:(_Bool)arg1;
- (void)_setDimmingOverlayColor:(id)arg1;

@end
