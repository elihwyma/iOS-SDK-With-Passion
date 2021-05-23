/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationDrivingMapMatcher : GEONavigationMapMatcher

- (int)transportType;
- (_Bool)_locationMeetsSpeedThresholdForRoadMatch:(id)arg1 distanceFromRoute:(double)arg2;
- (_Bool)_shouldConsiderRoadMatch:(id)arg1 overRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (double)_approximateMaxSpeedForRoad:(CDStruct_c8b5ad3f *)arg1;
- (id)_routeMatcherForRoute:(id)arg1;

@end
