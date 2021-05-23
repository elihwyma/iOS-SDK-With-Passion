/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOTileServerProxy.h>

@class GEOProactiveTileDownloader, GEOTileDB, NSMapTable, NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface GEOTileServerLocalProxy : GEOTileServerProxy

{
    GEOTileDB *_tileCache;
    NSString *_cacheLocation;
    NSMapTable *_providers;
    NSMutableArray *_inProgress;
    struct os_unfair_lock_s _inProgressLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    GEOProactiveTileDownloader *_proactiveTileDownloader;
    _Bool _updatingManifestForProactiveTileDownload;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)enableCDSObserversIfNecessary;

- (void)dealloc;
- (void)open;
- (void)close;
- (void)tileRequesterFinished:(id)arg1;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2 forKey:(struct _GEOTileKey)arg3;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSetDB:(unsigned int)arg4 tileSet:(id)arg5 etag:(id)arg6 forKey:(struct _GEOTileKey)arg7 userInfo:(id)arg8;
- (id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5;
- (void)cancel:(const struct _GEOTileKey *)arg1 batchID:(int)arg2;
- (void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 tileKey:(const struct _GEOTileKey *)arg2 options:(unsigned long long)arg3;
- (void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2 batchID:(int)arg3;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(_Bool)arg2;
- (void)endPreloadSession;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1;
- (void)calculateFreeableSize;
- (unsigned long long)calculateFreeableSizeSync;
- (void)registerProvider:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)loadTiles:(id)arg1 batchID:(int)arg2 priorities:(const unsigned int *)arg3 hasAdditionalInfos:(const _Bool *)arg4 additionalInfos:(const struct GEOTileLoaderAdditionalInfo *)arg5 signpostIDs:(const unsigned long long *)arg6 createTimes:(const double *)arg7 reason:(unsigned char)arg8 options:(unsigned long long)arg9 client:(id)arg10;
- (void)flushPendingWrites;
- (_Bool)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)_registerBuiltInProviders;
- (void)_forceDataSaverPreload:(id)arg1;
- (void)_initiateDataSaverPreloadIfPossible;
- (void)_updateExpiringTilesets;
- (id)userInfoForRequesterUserInfo:(id)arg1 tileEdition:(unsigned int)arg2 tileSet:(unsigned int)arg3 eTag:(id)arg4 bundleIdentifier:(id)arg5 reason:(unsigned char)arg6;
- (void)proactiveTileDownloaderDidFinish:(id)arg1;

@end
