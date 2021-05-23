/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_Arrival : _GEORouteMatchUpdater

{
    GEOComposedRouteStep *_arrivalStep;
    GEOComposedRouteStep *_previousExitStationStep;
    struct PolylineCoordinate _arrivalRouteCoordinate;
    CDStruct_2c43369c _destinationLocationCoordinate;
}

- (id).cxx_construct;
- (id)initWithRoute:(id)arg1 arrivalStep:(id)arg2;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
