/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOComposedRoute, GEODirectionsRequest, NSArray, NSDictionary, NSNumber;

@protocol GEODirectionServiceTicket <Swift>

@property (nonatomic, readonly) GEODirectionsRequest *request;
@property (nonatomic, readonly) _Bool isReroute;
@property (nonatomic, readonly) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) NSArray *waypoints;
@property (copy, nonatomic, readonly) NSNumber *requestPriority;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) _Bool isDoom;

- (unsigned short)cancel;
- (unsigned short)submitWithHandler:auditToken:networkActivity: /* Error: Ran out of types for this method. */;

@end
