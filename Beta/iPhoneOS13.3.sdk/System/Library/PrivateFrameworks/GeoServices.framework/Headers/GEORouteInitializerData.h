/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEODirectionsRequest, GEODirectionsResponse, GEOETATrafficUpdateResponse, GEORouteAttributes, NSArray;

@interface GEORouteInitializerData : NSObject <Swift>

{
    NSArray *_waypoints;
    GEODirectionsResponse *_directionsResponse;
    GEOETATrafficUpdateResponse *_etaTrafficUpdateResponse;
    GEORouteAttributes *_routeAttributes;
    GEODirectionsRequest *_directionsRequest;
}

@property (nonatomic, readonly) NSArray *waypoints;
@property (nonatomic, readonly) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readonly) GEOETATrafficUpdateResponse *etaTrafficUpdateResponse;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) GEODirectionsRequest *directionsRequest;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_MapsCarPlay_isEqual:(id)arg1;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3 directionsRequest:(id)arg4;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 ETATrafficUpdateResponse:(id)arg3;

@end
