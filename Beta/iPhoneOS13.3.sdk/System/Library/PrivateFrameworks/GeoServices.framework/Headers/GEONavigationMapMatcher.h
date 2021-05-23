/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEOLocationShifter, GEONavigationMatchResult, GEORoadMatcher, GEORouteMatcher;

@interface GEONavigationMapMatcher : NSObject

{
    _Bool _isSimulation;
    GEOComposedRoute *_route;
    GEONavigationMatchResult *_previousMatchResult;
    GEORouteMatcher *_routeMatcher;
    GEORoadMatcher *_roadMatcher;
    GEOLocationShifter *_locationShifter;
}

@property (retain, nonatomic) GEORouteMatcher *routeMatcher;
@property (retain, nonatomic) GEORoadMatcher *roadMatcher;
@property (retain, nonatomic) GEOLocationShifter *locationShifter;
@property (retain, nonatomic) GEONavigationMatchResult *previousMatchResult;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (nonatomic) _Bool isSimulation;

- (int)transportType;
- (id)initWithRoute:(id)arg1;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)_routeMatcherForRoute:(id)arg1;
- (void)setShouldSnapRouteMatchToRoute:(_Bool)arg1;
- (id)updateForReroute:(id)arg1 location:(id)arg2;
- (void)resetToLocation:(id)arg1;

@end
