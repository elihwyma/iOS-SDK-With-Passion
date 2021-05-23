/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapRegion, GEOPBTransitLine, GEOPDTransitTripGeometry, NSArray, NSMutableArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface GEOTransitTripRouteBuilder : NSObject

{
    NSMutableArray *_steps;
    NSMutableArray *_composedGuidanceEvents;
    NSMutableArray *_legs;
    NSMutableData *_pointsData;
    NSMutableArray *_pointSections;
    GEOMapRegion *_boundingMapRegion;
    GEOPDTransitTripGeometry *_geometry;
    GEOPBTransitLine *_line;
    NSArray *_stops;
}

@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) NSMutableArray *pointSections;

- (void)buildRoute:(id)arg1;
- (id)initWithGeometry:(id)arg1 andLine:(id)arg2 andStops:(id)arg3;
- (void)buildPointSectionsForRoute:(id)arg1;
- (double)_buildPointSectionsForRoute:(id)arg1 pointRange:(struct _NSRange)arg2 stepIndex:(unsigned long long)arg3 currentTransitLineColor:(id)arg4 startDistance:(double)arg5;

@end
