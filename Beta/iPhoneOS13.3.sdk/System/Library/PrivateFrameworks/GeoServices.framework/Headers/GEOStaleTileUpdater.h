/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOBatchOpportunisticTileDownloader.h>

@class GEOResourceManifestManager, GEOTileDB, GEOTileKeyList, GEOTileKeyMap;

__attribute__((visibility("hidden")))
@interface GEOStaleTileUpdater : GEOBatchOpportunisticTileDownloader

{
    GEOTileDB *_diskCache;
    GEOResourceManifestManager *_manifestManager;
    GEOTileKeyList *_keysRemaining;
    unsigned long long _numberOfTilesOriginallyConsidered;
    GEOTileKeyMap *_cacheMissType;
    unsigned long long _batchSize;
}

+ (unsigned char)_reason;

- (_Bool)cancelKey:(const struct _GEOTileKey *)arg1;
- (id)initWithDiskCache:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 manifestManager:(id)arg4 tileRequesterCreationBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)numberOfTilesConsidered;
- (void)_determineStaleKeysToUpdate;
- (void)_addMoreKeysToListIfNeeded:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)downloadDidSucceedForTile:(struct _GEOTileKey *)arg1 downloadSize:(unsigned long long)arg2 httpStatus:(unsigned int)arg3;
- (void)downloadDidFailForTile:(struct _GEOTileKey *)arg1 error:(id)arg2;

@end
