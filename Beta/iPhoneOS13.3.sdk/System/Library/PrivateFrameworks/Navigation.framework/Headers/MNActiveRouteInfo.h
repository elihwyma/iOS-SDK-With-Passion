/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteTraffic, GEOETARoute, GEOETATrafficUpdateResponse, GEOTransitRouteUpdateRequest, NSDate, NSUUID;

@interface MNActiveRouteInfo : NSObject

{
    GEOComposedRoute *_route;
    GEOETARoute *_etaRoute;
    GEOETATrafficUpdateResponse *_etaResponse;
    NSDate *_displayETA;
    unsigned long long _displayRemainingMinutes;
    GEOComposedRouteTraffic *_traffic;
    unsigned long long _alternateRouteIndex;
}

@property (nonatomic, readonly) NSUUID *routeID;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEOETARoute *etaRoute;
@property (retain, nonatomic) GEOETATrafficUpdateResponse *etaResponse;
@property (retain, nonatomic) NSDate *displayETA;
@property (nonatomic) unsigned long long displayRemainingMinutes;
@property (retain, nonatomic) GEOComposedRouteTraffic *traffic;
@property (nonatomic) unsigned long long alternateRouteIndex;
@property (nonatomic, readonly) GEOTransitRouteUpdateRequest *transitRouteUpdateRequest;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (id)initWithRoute:(id)arg1 traffic:(id)arg2;
- (id)initWithRoute:(id)arg1 trafficRoute:(id)arg2 routeInitalizerData:(id)arg3;
- (void)updateWithETARoute:(id)arg1 offsetInMeters:(double)arg2;

@end
