/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEORouteHypothesisMonitor.h>

__attribute__((visibility("hidden")))
@interface GEORouteHypothesisMonitorWalkingDriving : GEORouteHypothesisMonitor

- (_Bool)_checkForArrival:(id)arg1 routeMatch:(id)arg2;
- (void)_fetchETAWithRouteMatch:(id)arg1;
- (void)checkRouteForLocation:(id)arg1;
- (void)_recalculateETAWithRouteMatch:(id)arg1;

@end
