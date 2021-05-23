/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString;

@protocol OS_dispatch_queue, PSIGroupResultDelegate;

@interface PSIGroupResult : NSObject <Swift>

{
    id <PSIGroupResultDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_owningContentString;
    NSMutableArray *_assetUUIDs;
    NSMutableArray *_collectionResults;
    _Bool _didFetchOwningContentString;
    NSMutableSet *_sceneGroupsIds;
    short _dedupingSkippedCategory;
    float _score;
    NSString *_transientToken;
    NSArray *_groups;
    const struct __CFArray *_assetIds;
    const struct __CFArray *_collectionIds;
}

@property (copy, nonatomic) NSArray *groups;
@property (retain, nonatomic) const struct __CFArray *assetIds;
@property (retain, nonatomic) const struct __CFArray *collectionIds;
@property (nonatomic) float score;
@property (nonatomic) short dedupingSkippedCategory;
@property (readonly) NSMutableSet *sceneGroupsIds;
@property (weak, nonatomic) id <PSIGroupResultDelegate> delegate;
@property (nonatomic, readonly) NSArray *groupsSearchTokens;
@property (nonatomic, readonly) NSArray *contentStrings;
@property (nonatomic, readonly) NSArray *lookupIdentifiers;
@property (nonatomic, readonly) NSArray *groupsMatchRanges;
@property (copy, nonatomic) NSString *transientToken;
@property (nonatomic, readonly) _Bool isDateFilterPartiallyFromFullSearchText;
@property (nonatomic, readonly) _Bool hasDateFilterFromImplicitToken;
@property (nonatomic, readonly) unsigned long long matchCount;
@property (nonatomic, readonly) unsigned long long assetMatchCount;
@property (nonatomic, readonly) unsigned long long collectionMatchCount;
@property (weak, readonly) NSString *owningContentString;
@property (weak, readonly) NSArray *assetUUIDs;
@property (weak, readonly) NSArray *collectionResults;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueue:(id)arg1;
- (long long)categoryAtIndex:(long long)arg1;
- (unsigned long long)groupCount;
- (id)tokensAtIndex:(long long)arg1;
- (id)matchRangesAtIndex:(long long)arg1;
- (_Bool)isContentStringTextSearchableAtIndex:(long long)arg1;
- (_Bool)isMatchedByIdentifierAtIndex:(long long)arg1;
- (id)unitTestDescription;
- (id)normalizedUnitTestDescription;
- (id)groupRangesAtIndex:(long long)arg1;
- (id)contentStringAtIndex:(long long)arg1;
- (id)normalizedStringAtIndex:(long long)arg1;
- (id)fullSearchTextGroupSnapshot;
- (id)firstSearchTextGroupSnapshot;
- (id)dateFilterGroupSnapshot;
- (id)_prepareForFetchWithAssetCountLimit:(unsigned long long)arg1 collectionCountLimit:(unsigned long long)arg2 outAssetRange:(struct _NSRange *)arg3 outCollectionRange:(struct _NSRange *)arg4 outFetchOwningContentString:(_Bool *)arg5;
- (void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchNextAssetUUIDs:(_Bool)arg1 collectionResults:(_Bool)arg2 count:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchNextAssetUUIDs:(_Bool)arg1 collectionResults:(_Bool)arg2 assetCountLimit:(unsigned long long)arg3 collectionCountLimit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)resolveObjectsWithAssetCache:(id)arg1 collectionCache:(id)arg2;

@end
