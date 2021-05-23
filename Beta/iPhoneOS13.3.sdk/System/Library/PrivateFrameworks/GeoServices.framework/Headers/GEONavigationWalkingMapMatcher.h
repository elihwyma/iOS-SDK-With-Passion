/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEONavigationMapMatcher.h>

@interface GEONavigationWalkingMapMatcher : GEONavigationMapMatcher

{
    unsigned long long _numProgressionsOffRoute;
}

- (int)transportType;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)_routeMatcherForRoute:(id)arg1;

@end
