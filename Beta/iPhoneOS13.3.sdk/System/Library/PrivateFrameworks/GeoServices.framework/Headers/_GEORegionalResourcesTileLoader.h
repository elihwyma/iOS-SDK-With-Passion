/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEORegionalResourceTileData, GEOResourceLoader, GEOResourceManifestConfiguration;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesTileLoader : NSObject

{
    GEORegionalResourceTileData *_tile;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOResourceLoader *_resourceLoader;
    struct os_unfair_lock_s _lock;
    struct _GEOTileKey _tileKey;
}

@property (nonatomic, readonly) struct _GEOTileKey *tileKeyPtr;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)loadResourcesForTileKey:(const struct _GEOTileKey *)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 signpostID:(unsigned long long)arg4 finished:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;

@end
