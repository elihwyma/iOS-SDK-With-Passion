/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, TUSearchController;

@interface TUSearchResults : NSObject

{
    NSString *_searchTerm;
    NSMutableArray *_resultGroups;
    TUSearchController *_searchController;
    NSMutableArray *_allSearchItemsCache;
    NSMutableArray *_allDataItemsCache;
}

@property (retain, nonatomic) NSString *searchTerm;
@property (retain, nonatomic) NSMutableArray *resultGroups;
@property (retain, nonatomic) NSMutableArray *allSearchItemsCache;
@property (retain, nonatomic) NSMutableArray *allDataItemsCache;
@property (readonly) NSArray *allSearchItems;
@property (readonly) NSArray *allDataItems;
@property (readonly) long long numberOfSections;
@property (readonly) long long numberOfResults;
@property (weak) TUSearchController *searchController;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addSearchResults:(id)arg1;
- (void)addResultGroup:(id)arg1;
- (void)addAdhocResultGroup;
- (void)removeDuplicateResults;
- (void)removeSearchItem:(id)arg1;
- (void)_clearCaches;
- (id)resultGroupForSection:(long long)arg1;
- (id)initWithSearchTerm:(id)arg1;
- (void)finalizeSearchResults;
- (long long)numberOfTableViewRows;

@end
