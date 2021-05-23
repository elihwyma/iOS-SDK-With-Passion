/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder, GEOVectorTile, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeConnectionFinder : GEOMapRequest

{
    GEOMapAccess *_map;
    GEOMapTileFinder *_tileFinder;
    NSMutableArray *_builders;
    GEOVectorTile *_tile;
    CDStruct_3b01f0aa *_junction;
    CDStruct_2c43369c _coordinate;
}

- (void)cancel;
- (void)_findConnections:(CDUnknownBlockType)arg1 incoming:(_Bool)arg2;
- (id)initWithMap:(id)arg1 tile:(id)arg2 junction:(CDStruct_3b01f0aa *)arg3 coordinate:(CDStruct_c3b9c2ee)arg4;
- (void)findConnectionsOut:(CDUnknownBlockType)arg1;
- (void)findConnectionsIn:(CDUnknownBlockType)arg1;

@end
