/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder

{
    _Bool _flipNegativeTravelDirectionRoads;
    _Bool _visitDoubleTravelDirectionRoadsTwice;
    GEOTileLoader *_tileLoader;
}

@property (nonatomic) _Bool flipNegativeTravelDirectionRoads;
@property (nonatomic) _Bool visitDoubleTravelDirectionRoadsTwice;

- (id)initWithTileLoader:(id)arg1;
- (id)findRoadsNear:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
