/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSBusinessCategoryCache : CLSDBCache

{
    NSPredicate *_predicateEntryWithUpdateTimestamp;
}

@property (nonatomic, readonly) NSPredicate *predicateEntryWithUpdateTimestamp;

+ (_Bool)cachedRegion:(id)arg1 isMatchingOtherRegion:(id)arg2;

- (id)initWithDiskCacheName:(id)arg1;
- (id)dataModelName;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1;
- (id)businessItemsForRegion:(id)arg1;
- (id)predicateForEntryNearbyRegion:(id)arg1;
- (id)predicateForRegion:(id)arg1;
- (id)_fetchedBusinessItemByMUIDForBusinessItems:(id)arg1;
- (void)insertBatchesOfBusinessItems:(id)arg1 forRegions:(id)arg2;
- (id)nearestItemForRegion:(id)arg1 inItems:(id)arg2;
- (id)businessItemsInRegion:(id)arg1 categories:(id)arg2 maximumDistance:(double)arg3;
- (id)_businessItemInRegion:(id)arg1 matchingCategories:(id)arg2 maximumDistance:(double)arg3 forBusinessItems:(id)arg4;
- (id)businessItemsForMuid:(unsigned long long)arg1;
- (id)businessItemsForMuids:(id)arg1;
- (id)businessItemFromManagedObject:(id)arg1;
- (_Bool)hasRegion:(id)arg1;
- (unsigned long long)numberOfBusinessItemsForRegion:(id)arg1;
- (id)_fetchBusinessItemsForMUIDs:(id)arg1;
- (void)_updateManagedBusinessItem:(id)arg1 withBusinessItem:(id)arg2;
- (id)updateBusinessItems:(id)arg1;

@end
