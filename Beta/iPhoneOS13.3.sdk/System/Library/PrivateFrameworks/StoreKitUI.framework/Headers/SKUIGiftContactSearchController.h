/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class MFContactsSearchManager, NSArray, NSMutableArray, NSNumber, NSString, UITableView, UIView;

@protocol SKUIGiftContactSearchDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGiftContactSearchController : NSObject

{
    NSMutableArray *_autocompleteSearchResults;
    id <SKUIGiftContactSearchDelegate> _delegate;
    NSArray *_results;
    MFContactsSearchManager *_searchManager;
    UIView *_searchResultsView;
    NSNumber *_searchTaskIdentifier;
    UITableView *_tableView;
}

@property (weak, nonatomic) id <SKUIGiftContactSearchDelegate> delegate;
@property (nonatomic, readonly) long long numberOfResults;
@property (nonatomic, readonly) UIView *searchResultsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)cancelSearch;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)searchForText:(id)arg1;
- (void)resetSearch;
- (void)_setResults:(id)arg1;
- (void)_finishSearchWithResults:(id)arg1;
- (void)makeChildLabelsSupportDarkMode:(id)arg1;

@end
