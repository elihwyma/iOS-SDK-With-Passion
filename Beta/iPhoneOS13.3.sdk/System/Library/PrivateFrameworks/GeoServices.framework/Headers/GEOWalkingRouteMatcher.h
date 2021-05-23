/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEORouteMatcher.h>

__attribute__((visibility("hidden")))
@interface GEOWalkingRouteMatcher : GEORouteMatcher

{
    unsigned long long _newStepProgressions;
}

- (id)initWithRoute:(id)arg1;
- (double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned int)arg2 previousMatchGood:(_Bool)arg3;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned int)arg2;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (_Bool)_supportsSnapping;

@end
