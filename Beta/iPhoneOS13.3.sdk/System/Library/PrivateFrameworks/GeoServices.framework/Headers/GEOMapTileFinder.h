/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess;

__attribute__((visibility("hidden")))
@interface GEOMapTileFinder : GEOMapRequest

{
    unsigned long long _zoomLevel;
    int _tileSize;
    int _tileScale;
    int _tileStyle;
    CDStruct_2c43369c _center;
    double _radius;
    CDUnknownBlockType _tileHandler;
    _Bool _isCanceling;
}

@property (copy, nonatomic) CDUnknownBlockType tileHandler;
@property (nonatomic, readonly) GEOMapAccess *map;
@property (nonatomic, readonly) unsigned long long zoomLevel;
@property (nonatomic, readonly) int tileSize;
@property (nonatomic, readonly) int tileScale;
@property (nonatomic, readonly) int tileStyle;

+ (id)detailedTransitTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
+ (id)realisticTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
+ (id)buildingsTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
+ (id)transitGeometryTileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;

- (void)dealloc;
- (void)cancel;
- (void)findTiles:(CDUnknownBlockType)arg1;
- (void)findTiles:(CDUnknownBlockType)arg1 excludingKey:(const struct _GEOTileKey *)arg2;
- (id)_initWithMap:(id)arg1 zoomLevel:(unsigned long long)arg2 tileSize:(int)arg3 tileScale:(int)arg4 tileStyle:(int)arg5 center:(CDStruct_c3b9c2ee)arg6 radius:(double)arg7;
- (void)_fetchDataForKeys:(const unordered_set_684af1c2 *)arg1;
- (struct _GEOTileKey)_adjacentTileKey:(const struct _GEOTileKey *)arg1 dirX:(int)arg2 dirY:(int)arg3;
- (void)findTilesAdjacentToTile:(const struct _GEOTileKey *)arg1 containingPoint:(const Matrix_8746f91e *)arg2 tileHandler:(CDUnknownBlockType)arg3;

@end
