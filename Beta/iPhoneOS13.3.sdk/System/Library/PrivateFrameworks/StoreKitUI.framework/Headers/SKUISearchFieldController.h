/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, SKUIClientContext, SKUICompletionList, SKUISearchController, SSVLoadURLOperation, UISearchBar, UITableViewController, UIViewController;

@protocol SKUISearchFieldDelegate;

@interface SKUISearchFieldController : NSObject

{
    SKUICompletionList *_completionList;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    UITableViewController *_searchResultsController;
    SKUISearchController *_searchController;
    struct {
        unsigned int searchFieldControllerRequestSearch:1;
        unsigned int searchFieldControllerSearchBarDidChangeText:1;
        unsigned int searchFieldControllerShouldBeginEditing:1;
    } _delegateRespondsTo;
    UIViewController *_contentsController;
    SKUIClientContext *_clientContext;
    id <SKUISearchFieldDelegate> _delegate;
    NSString *_searchBarAccessoryText;
    NSString *_searchHintsURLString;
    NSString *_trendingSearchURLString;
    long long _numberOfSearchResults;
}

@property (weak, nonatomic, readonly) UIViewController *contentsController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUISearchFieldDelegate> delegate;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (copy, nonatomic) NSString *searchBarAccessoryText;
@property (copy, nonatomic) NSString *searchHintsURLString;
@property (nonatomic) _Bool displaysSearchBarInNavigationBar;
@property (nonatomic) _Bool showsResultsForEmptyField;
@property (copy, nonatomic) NSString *trendingSearchURLString;
@property (nonatomic) long long numberOfSearchResults;
@property (nonatomic, readonly) _Bool canBecomeActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForPopoverPresentation:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)searchBarShouldClear:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_reloadData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)willPresentSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)presentSearchController:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)becomeActive;
- (void)trendingSearchPageView:(id)arg1 didSelectSearch:(id)arg2;
- (void)resignActive:(_Bool)arg1;
- (id)URLForTrendingSearchPageView:(id)arg1;
- (id)initWithContentsController:(id)arg1 clientContext:(id)arg2;
- (_Bool)_presentsInPopover:(id)arg1;
- (void)_reloadTrendingVisibility;
- (void)_loadResultsForSearchRequest:(id)arg1;
- (void)_adjustInsetsForResultsTableView:(id)arg1;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (void)searchControllerWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)searchControllerClientContext:(id)arg1;
- (id)initWithContentsController:(id)arg1;

@end
