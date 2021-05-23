/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class CNAutocompleteStore, NSString, TUAutocompleteResultPartitioner, TUSearchController, TUSearchResults;

@protocol CNCancelable, OS_dispatch_queue;

@interface TUContactsAutocompleteSearchModule : NSObject

{
    _Bool _searchComplete;
    _Bool _cancelled;
    TUSearchController *_searchController;
    CNAutocompleteStore *_autocompleteStore;
    id <CNCancelable> _fetchRequest;
    TUAutocompleteResultPartitioner *_autocompleteResultPartitioner;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) CNAutocompleteStore *autocompleteStore;
@property (retain, nonatomic) id <CNCancelable> fetchRequest;
@property (retain, nonatomic) TUAutocompleteResultPartitioner *autocompleteResultPartitioner;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic, getter=isSearchComplete) _Bool searchComplete;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) TUSearchResults *searchResults;
@property (weak) TUSearchController *searchController;

- (id)init;
- (void)dealloc;
- (void)_cleanup;
- (void)searchForString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelSearch;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;

@end
