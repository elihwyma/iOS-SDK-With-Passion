/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapBuildingFinder : GEOMapRequest

{
    GEOMapTileFinder *_tileFinder;
    CDStruct_2c43369c _centerCoordinate;
    double _radius;
}

- (void)cancel;
- (id)initWithMap:(id)arg1 centerCoordinate:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (void)findBuildingsWithHandler:(CDUnknownBlockType)arg1;

@end
