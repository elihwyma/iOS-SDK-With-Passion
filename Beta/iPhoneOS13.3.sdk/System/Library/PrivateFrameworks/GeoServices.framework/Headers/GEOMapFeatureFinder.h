/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureFinder : GEOMapRequest

{
    CDStruct_2c43369c _coordinate;
    GEOMapTileFinder *_tileFinder;
    CDUnknownBlockType _roadHandler;
    CDUnknownBlockType _pointHandler;
    CDUnknownBlockType _polygonHandler;
    _Bool _ignoreUnnamedFeatures;
}

@property (copy, nonatomic) CDUnknownBlockType roadHandler;
@property (copy, nonatomic) CDUnknownBlockType pointHandler;
@property (copy, nonatomic) CDUnknownBlockType polygonHandler;
@property (nonatomic, readonly) GEOMapAccess *map;
@property (nonatomic) _Bool ignoreUnnamedFeatures;

- (void)cancel;
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2;
- (void)_pickRoadInTile:(id)arg1 tileRect:(const CDStruct_90e2a262 *)arg2 localPoint:(const Matrix_8746f91e *)arg3;
- (void)findFeatures:(CDUnknownBlockType)arg1 pointHandler:(CDUnknownBlockType)arg2 polygonHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
