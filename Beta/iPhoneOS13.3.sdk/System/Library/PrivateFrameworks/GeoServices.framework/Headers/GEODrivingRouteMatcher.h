/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEORouteMatcher.h>

__attribute__((visibility("hidden")))
@interface GEODrivingRouteMatcher : GEORouteMatcher

- (id)initWithRoute:(id)arg1;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (_Bool)_supportsSnapping;
- (id)_startStepForPreviousRouteMatch:(id)arg1;
- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4;
- (double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3;
- (double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2;
- (double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2;

@end
