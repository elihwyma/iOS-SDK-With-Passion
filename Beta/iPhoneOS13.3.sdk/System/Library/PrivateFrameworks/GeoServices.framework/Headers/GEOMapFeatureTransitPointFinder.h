/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureTransitPointFinder : GEOMapFeatureAccessFinder

{
    GEOTileLoader *_tileLoader;
}

- (id)_tileFinder;
- (id)initWithTileLoader:(id)arg1;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findTransitPointsOfType:(unsigned long long)arg1 near:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)findTransitAccessPointsForStation:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findParentOfTransitPoint:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findTransitPointsWithParent:(id)arg1 handler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)findGeometryForTransitPoint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_transitPointForFeature:(struct GEOTransitNodeFeature *)arg1;
- (id)_geometryTileFinder;

@end
