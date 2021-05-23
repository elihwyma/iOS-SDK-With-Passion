/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TUSearchController, TUSearchResults;

@interface TUCallHistorySearchModule : NSObject

{
    _Bool _searchComplete;
    TUSearchController *_searchController;
    NSMutableArray *_currentResultsList;
    NSString *_previousSearchString;
}

@property (retain, nonatomic) NSMutableArray *currentResultsList;
@property (copy, nonatomic) NSString *previousSearchString;
@property (nonatomic, getter=isSearchComplete) _Bool searchComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) TUSearchResults *searchResults;
@property (weak) TUSearchController *searchController;

- (void)searchForString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelSearch;

@end
