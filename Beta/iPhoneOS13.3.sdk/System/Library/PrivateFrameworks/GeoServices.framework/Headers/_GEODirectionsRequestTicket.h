/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEODirectionsRequest, GEODirectionsRequester, NSArray, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _GEODirectionsRequestTicket : NSObject

{
    GEODirectionsRequest *_request;
    _Bool _isReroute;
    GEOComposedRoute *_originalRoute;
    NSArray *_waypoints;
    _Bool _isDoom;
    NSNumber *_requestPriority;
    _Bool _active;
    _Bool _canceled;
    NSDictionary *_userInfo;
    GEODirectionsRequester *_directionsRequester;
}

@property (nonatomic) _Bool isReroute;
@property (retain, nonatomic) GEOComposedRoute *originalRoute;
@property (retain, nonatomic) NSArray *waypoints;
@property (nonatomic, readonly) _Bool active;
@property (nonatomic, readonly) _Bool canceled;
@property (copy, nonatomic) NSNumber *requestPriority;
@property (nonatomic) _Bool isDoom;
@property (weak, nonatomic) GEODirectionsRequester *directionsRequester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GEODirectionsRequest *request;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;

- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 directionsRequester:(id)arg2;

@end
