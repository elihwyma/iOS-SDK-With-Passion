/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_FerryProgression : _GEORouteMatchUpdater

{
    GEOComposedRouteStep *_boardStep;
    GEOComposedRouteStep *_alightStep;
    CDStruct_2c43369c _alightLocationCoordinate;
    double _startProgressionDistanceToDestination;
    unsigned long long _progressionCount;
}

- (unsigned long long)priority;
- (id)initWithRoute:(id)arg1 tripLeg:(id)arg2;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;

@end
