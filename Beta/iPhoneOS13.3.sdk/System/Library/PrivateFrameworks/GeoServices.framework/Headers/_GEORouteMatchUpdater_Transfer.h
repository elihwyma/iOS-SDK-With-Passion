/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep, GEOPBTransitStation, GEOPBTransitStop;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_Transfer : _GEORouteMatchUpdater

{
    GEOPBTransitStation *_alightStation;
    GEOPBTransitStation *_boardStation;
    GEOPBTransitStop *_alightStop;
    GEOPBTransitStop *_boardStop;
    GEOComposedRouteStep *_alightStep;
    GEOComposedRouteStep *_transferStep;
    GEOComposedRouteStep *_boardStep;
}

- (id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2 transferStep:(id)arg3 boardStep:(id)arg4;
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (_Bool)_isLocation:(id)arg1 nearStop:(id)arg2;
- (_Bool)_isLocation:(id)arg1 nearStation:(id)arg2;

@end
