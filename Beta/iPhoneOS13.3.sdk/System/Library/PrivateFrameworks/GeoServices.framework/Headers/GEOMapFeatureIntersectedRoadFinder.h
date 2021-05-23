/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder

{
    GEOTileLoader *_tileLoader;
}

- (id)initWithTileLoader:(id)arg1;
- (id)_findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 roadToIgnore:(id)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_tilesAdjacentToTile:(struct _GEOTileKey)arg1 atPoint:(CDStruct_6e3f967a)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)findRoadsAtPreviousIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadsAtNextIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
