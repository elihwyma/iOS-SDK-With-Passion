/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class ISStoreURLOperation, NSArray, NSNumber, NSString, SUClientInterface, SUScriptTextFieldDelegate, SUSearchDisplayController, SUSearchFieldConfiguration, UIControl, UISearchBar;

@interface SUSearchFieldController : NSObject

{
    SUClientInterface *_clientInterface;
    NSArray *_completions;
    ISStoreURLOperation *_completionsOperation;
    SUSearchFieldConfiguration *_configuration;
    UIControl *_dimmerView;
    UISearchBar *_searchBar;
    SUSearchDisplayController *_searchController;
    long long _searchFieldStyle;
    SUScriptTextFieldDelegate *_textFieldDelegate;
    _Bool _hasLoadedSearchResultsTableView;
}

@property (nonatomic) long long searchFieldStyle;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (copy, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

- (id)init;
- (void)dealloc;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)initWithContentsController:(id)arg1;
- (id)_searchGroupForSearchKind:(id)arg1;
- (void)handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2 style:(long long)arg3;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2;
- (id)_newSearchDisplayControllerWithContentsController:(id)arg1;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (void)_tearDownDimmerView;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1 kind:(id)arg2;
- (void)_fetchResultsForURLRequestProperties:(id)arg1;
- (id)_newSearchBar;
- (void)_reloadSearchBar;
- (void)_resizeSearchBarForOrientation:(long long)arg1;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_fetchResultsForTerm:(id)arg1 URL:(id)arg2;
- (_Bool)_focusTransientViewController;
- (void)_showDimmerView;
- (void)_cancelCompletionsOperation;
- (void)_reloadCompletionsForSearchString:(id)arg1;
- (id)_defaultSearchTerm;
- (void)_fetchCompletions;
- (void)_sendOnXEventWithTerm:(id)arg1 URL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_targetViewController;
- (id)_newBlankStorePageViewController;
- (void)_dimmerViewAction:(id)arg1;
- (id)_newTransientViewController;
- (void)searchBarWillRemoveFromSuperview:(id)arg1;
- (void)scriptDidChangeTextForField:(id)arg1;
- (id)initWithContentsController:(id)arg1 style:(long long)arg2;
- (id)_cancelButtonView;

@end
