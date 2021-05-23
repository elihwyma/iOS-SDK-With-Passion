/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSSet, NSString, UISearchBar, UIView, WFActionDrawerResults, WFActionDrawerResultsController, WFActionDrawerSearchResultsViewController, WFActionDrawerSiriSuggestionsViewController, WFActionDrawerState, WFDragController;

@protocol NSObject, WFActionDrawerResultsControlling, WFActionDrawerViewControllerDelegate;

@interface WFActionDrawerViewController : UIViewController

{
    _Bool _scrollsToTop;
    _Bool _requiresOpaqueBackground;
    WFActionDrawerSearchResultsViewController *_searchResultsViewController;
    WFActionDrawerResultsController *_actionDrawerResultsController;
    id <WFActionDrawerViewControllerDelegate> _delegate;
    WFActionDrawerResults *_siriSuggestionResults;
    NSSet *_siriSuggestionBundleIdentifiers;
    double _bottomContentInset;
    UISearchBar *_searchBar;
    UIView *_separatorView;
    long long _activePane;
    WFActionDrawerSiriSuggestionsViewController *_siriSuggestionsViewController;
    WFActionDrawerResults *_workflowSuggestionResults;
    WFDragController *_currentDragController;
    id <WFActionDrawerResultsControlling> _actionDrawerResultsControllingDelegate;
    id <NSObject> _actionRegistryFilledNotificationObserver;
}

@property (weak, nonatomic) UISearchBar *searchBar;
@property (weak, nonatomic) UIView *separatorView;
@property (nonatomic, readonly) long long activePane;
@property (nonatomic, readonly) WFActionDrawerSiriSuggestionsViewController *siriSuggestionsViewController;
@property (nonatomic, readonly) WFActionDrawerSearchResultsViewController *searchResultsViewController;
@property (retain, nonatomic) WFActionDrawerResults *workflowSuggestionResults;
@property (retain, nonatomic) WFDragController *currentDragController;
@property (retain, nonatomic) id <WFActionDrawerResultsControlling> actionDrawerResultsControllingDelegate;
@property (retain, nonatomic) id <NSObject> actionRegistryFilledNotificationObserver;
@property (nonatomic, readonly) WFActionDrawerResultsController *actionDrawerResultsController;
@property (weak, nonatomic) id <WFActionDrawerViewControllerDelegate> delegate;
@property (retain, nonatomic) WFActionDrawerResults *siriSuggestionResults;
@property (copy, nonatomic) NSSet *siriSuggestionBundleIdentifiers;
@property (nonatomic) _Bool scrollsToTop;
@property (nonatomic) _Bool requiresOpaqueBackground;
@property (nonatomic) double bottomContentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WFActionDrawerState *state;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)searchField;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)searchText;
- (void)updateBackgroundColor;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)startSearching;
- (void)resetSearch;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (void)dragController:(id)arg1 didEnterViewController:(id)arg2;
- (void)searchResultsViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)searchResultsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (void)searchResultsViewController:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2;
- (void)suggestionsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (void)suggestionsViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)suggestionsViewControllerDidSelectCategoryApps:(id)arg1 title:(id)arg2;
- (void)suggestionsViewControllerDidSelectCategoryFavorites:(id)arg1 title:(id)arg2;
- (void)suggestionsViewControllerViewControllerDidSelectCategoryScripting:(id)arg1 title:(id)arg2;
- (void)suggestionsViewController:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3;
- (void)resultsViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)resultsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (id)initWithActionRegistry:(id)arg1 home:(id)arg2;
- (void)transitionToChildViewController:(id)arg1;
- (void)populateSuggestionsUsingWorkflow:(id)arg1;
- (void)updateForActionAdded;
- (void)updateAdditionalSafeAreaInsets;
- (void)subscribeForActionRegistryFilledNotifications;
- (void)updateContentForSearchBar;
- (void)updateContentForSearchBarSkippingTransition:(_Bool)arg1;

@end
