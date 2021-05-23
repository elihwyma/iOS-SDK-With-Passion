/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapRegion, GEORoute, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEORouteBuilder : NSObject

{
    _Bool _usesZilch;
    NSMutableArray *_steps;
    NSMutableArray *_composedGuidanceEvents;
    NSMutableArray *_legs;
    NSData *_pointsData;
    NSMutableArray *_pointSections;
    GEOMapRegion *_boundingMapRegion;
    GEORoute *_route;
}

@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) NSMutableArray *pointSections;

- (id)initWithRoute:(id)arg1;
- (void)buildRoute:(id)arg1;
- (void)buildPointSectionsForRoute:(id)arg1;
- (id)_composedRouteStepForStep:(id)arg1 route:(id)arg2;
- (id)_composedRouteLegForSteps:(id)arg1 route:(id)arg2;

@end
