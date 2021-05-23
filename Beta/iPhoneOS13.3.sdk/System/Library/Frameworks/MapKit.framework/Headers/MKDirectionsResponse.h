/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEODirectionsResponse, MKMapItem, NSArray, NSString, NSURL;

@interface MKDirectionsResponse : NSObject

{
    GEODirectionsResponse *_geoResponse;
    MKMapItem *_source;
    MKMapItem *_destination;
    NSArray *_routes;
    GEOComposedRoute *_geoComposedRoute;
}

@property (retain, nonatomic, readonly) NSURL *_mapsURL;
@property (retain, nonatomic, readonly) GEODirectionsResponse *_geoResponse;
@property (retain, nonatomic, readonly) GEOComposedRoute *geoComposedRoute;
@property (retain, nonatomic, readonly) NSString *_incidentDescription;
@property (nonatomic, readonly) double _typicalTrafficRatio;
@property (nonatomic, readonly) MKMapItem *source;
@property (nonatomic, readonly) MKMapItem *destination;
@property (nonatomic, readonly) NSArray *routes;

+ (id)_responseWithGEODirectionsRouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5 error:(id *)arg6;

- (id)_route;
- (id)_initWithGEORouteResponse:(id)arg1 routeRequest:(id)arg2 request:(id)arg3 origin:(id)arg4 destination:(id)arg5;

@end
