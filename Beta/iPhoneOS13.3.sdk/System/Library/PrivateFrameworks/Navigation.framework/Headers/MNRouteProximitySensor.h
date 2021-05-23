/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOLocation, GEORouteMatch, GEORouteMatcher;

@interface MNRouteProximitySensor : NSObject

{
    double _proximityThreshold;
    GEOLocation *_location;
    GEORouteMatch *_routeMatch;
    GEORouteMatcher *_routeMatcher;
    unsigned long long _proximity;
}

@property (nonatomic, readonly) GEOLocation *location;
@property (nonatomic) double proximityThreshold;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) GEOLocation *closestPointOnRoute;
@property (nonatomic, readonly) GEOComposedRouteStep *closestStepOnRoute;
@property (nonatomic, readonly) double courseOnRoute;
@property (nonatomic, readonly) double distanceFromOrigin;
@property (nonatomic, readonly) double distanceFromRoute;
@property (nonatomic, readonly) double distanceFromDestination;
@property (nonatomic, readonly) double remainingTimeOnRoute;
@property (nonatomic, readonly) unsigned long long proximity;

- (id)init;
- (id)initWithRoute:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)_updateRouteMatch;
- (void)_updateProximity;

@end
