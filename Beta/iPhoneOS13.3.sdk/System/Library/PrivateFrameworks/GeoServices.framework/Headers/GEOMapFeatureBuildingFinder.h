/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureBuildingFinder : GEOMapFeatureAccessFinder

{
    GEOTileLoader *_tileLoader;
}

- (id)initWithTileLoader:(id)arg1;
- (id)findBuildingsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
