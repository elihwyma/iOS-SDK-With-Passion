/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEORouteRoadMatcher;

@interface GEORouteMatcher : NSObject

{
    GEOComposedRoute *_route;
    _Bool _useStrictInitialOnRouteCriteria;
    GEORouteRoadMatcher *_routeRoadMatcher;
    _Bool _shouldSnapRouteMatchToRoute;
}

@property (nonatomic) _Bool useStrictInitialOnRouteCriteria;
@property (nonatomic) _Bool shouldSnapRouteMatchToRoute;

- (void)dealloc;
- (id)initWithRoute:(id)arg1;
- (id)matchToClosestPointOnRouteWithLocation:(id)arg1;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (_Bool)_supportsSnapping;
- (id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2;
- (id)matchToRouteWithLocation:(id)arg1;
- (void)_startRouteMatch;
- (void)_considerCandidateMatch:(id)arg1;
- (void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (double)distanceToRouteFrom:(CDStruct_c3b9c2ee)arg1 startDistance:(double)arg2 endDistance:(double)arg3;
- (id)_startStepForPreviousRouteMatch:(id)arg1;
- (id)_stepForPointIndex:(unsigned int)arg1 previousStep:(id)arg2;
- (_Bool)_shouldConsiderCourseForLocation:(id)arg1;
- (double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2;
- (void)_snapRouteMatchToRoad:(id)arg1;
- (double)distanceToRouteFrom:(CDStruct_c3b9c2ee)arg1;

@end
