/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOEnrouteNoticesUtil : NSObject

+ (id)createEnrouteNoticesForComposedRoute:(id)arg1 routeInitializerData:(id)arg2;
+ (id)_createEnrouteNoticesForComposedRoute:(id)arg1 response:(id)arg2;
+ (id)_createEnrouteNoticesForComposedRoute:(id)arg1 ETAResponse:(id)arg2;
+ (id)_trafficCameraForIdentifier:(id)arg1 inResponse:(id)arg2;
+ (id)_trafficSignalForIdentifier:(id)arg1 inResponse:(id)arg2;
+ (id)_trafficCameraForIdentifier:(id)arg1 inETAResponse:(id)arg2;
+ (id)_trafficSignalForIdentifier:(id)arg1 inETAResponse:(id)arg2;

@end
