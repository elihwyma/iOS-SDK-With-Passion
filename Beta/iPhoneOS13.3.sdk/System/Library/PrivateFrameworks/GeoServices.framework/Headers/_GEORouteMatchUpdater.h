/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEOMapFeatureAccess, GEOMotionContext, GEOTransitRouteMatcher;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater : NSObject

{
    GEOTransitRouteMatcher *_routeMatcher;
    GEOComposedRoute *_route;
    GEOMapFeatureAccess *_mapFeatureAccess;
    GEOMotionContext *_motionContext;
    double _stationRadius;
}

- (unsigned long long)priority;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (_Bool)_isLocation:(id)arg1 nearTransitPoint:(CDStruct_c3b9c2ee)arg2 transitID:(unsigned long long)arg3 featureSize:(double)arg4;
- (id)initWithTransitRouteMatcher:(id)arg1;
- (_Bool)_isLocation:(id)arg1 nearStop:(id)arg2;
- (_Bool)_isLocation:(id)arg1 nearStation:(id)arg2;
- (double)_stationRadiusForStation:(id)arg1 accessPoint:(id)arg2 adjacentWalkingLegCoordinate:(CDStruct_c3b9c2ee)arg3;

@end
