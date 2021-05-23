/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep, GEOPBTransitStation, GEOPBTransitStop;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_AlightExit : _GEORouteMatchUpdater

{
    GEOPBTransitStop *_alightStop;
    GEOPBTransitStation *_alightStation;
    struct PolylineCoordinate _routeCoordinateAlightStation;
    GEOComposedRouteStep *_alightStep;
    GEOComposedRouteStep *_postAlightStep;
    GEOComposedRouteStep *_postAlightWalkingStep;
}

- (id).cxx_construct;
- (id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (_Bool)_isLocationNearAlightNode:(id)arg1;

@end
