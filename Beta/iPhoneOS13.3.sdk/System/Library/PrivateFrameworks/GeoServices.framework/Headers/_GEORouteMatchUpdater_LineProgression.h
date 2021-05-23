/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedTransitTripRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater

{
    GEOComposedTransitTripRouteStep *_boardStep;
    GEOComposedTransitTripRouteStep *_alightStep;
    struct PolylineCoordinate _startRouteCoordinate;
}

- (unsigned long long)priority;
- (id).cxx_construct;
- (id)initWithTransitRouteMatcher:(id)arg1 tripLeg:(id)arg2;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
