/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOTileLoader, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureTileFinder : NSObject

{
    unsigned long long _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileSetStyle;
    NSString *_tileLoaderClientIdentifier;
    GEOTileLoader *_tileLoader;
}

- (void)cancel;
- (id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4 tileLoader:(id)arg5;
- (id)findTilesAround:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 allowNetwork:(_Bool)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)initWithTileLoader:(id)arg1;
- (id)findTileWithKey:(struct _GEOTileKey)arg1 allowNetwork:(_Bool)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_findTilesInList:(id)arg1 allowNetwork:(_Bool)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_tileLoaderClientIdentifier;
- (id)initWithZoomLevel:(unsigned long long)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileSetStyle:(int)arg4;

@end
