/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep, GEOComposedTransitTripRouteStep, GEOPBTransitStation, GEOPBTransitStop;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_EnterBoard : _GEORouteMatchUpdater

{
    GEOPBTransitStop *_transitStop;
    GEOPBTransitStation *_transitStation;
    CDStruct_2c43369c _entranceCoordinate;
    struct PolylineCoordinate _routeCoordinateApproaching;
    struct PolylineCoordinate _routeCoordinateAtStation;
    GEOComposedRouteStep *_enterStationStep;
    GEOComposedRouteStep *_boardVehicleStep;
    GEOComposedTransitTripRouteStep *_rideStep;
    _Bool _hasEnteredStation;
}

- (id).cxx_construct;
- (id)initWithTransitRouteMatcher:(id)arg1 boardVehicleStep:(id)arg2;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (_Bool)_hasLocationEnteredStation:(id)arg1 routeMatch:(id)arg2;
- (_Bool)_hasLocationExitedStation:(id)arg1;
- (_Bool)_isLocationNearEndOfWalkingLeg:(id)arg1;
- (_Bool)_isLocationNearAccessPoint:(id)arg1;
- (_Bool)_isLocationNearTransitNode:(id)arg1;

@end
