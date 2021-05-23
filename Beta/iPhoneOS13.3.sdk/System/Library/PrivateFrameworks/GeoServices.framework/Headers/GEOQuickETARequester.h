/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODirectionsRequest, GEOETARequest, GEOQuickETARequest, NSString;

@interface GEOQuickETARequester : NSObject

{
    GEOQuickETARequest *_request;
    GEOETARequest *_simpleETARequest;
    GEODirectionsRequest *_directionsETARequest;
    NSString *_loggingFacility;
}

+ (_Bool)requestETAFromOrigin:(id)arg1 toDestinations:(id)arg2 transportType:(int)arg3 timepoint:(struct GEOTimepoint)arg4 includeDistance:(_Bool)arg5 commonOptions:(id)arg6 automobileOptions:(id)arg7 walkingOptions:(id)arg8 transitOptions:(id)arg9 auditToken:(id)arg10 handler:(CDUnknownBlockType)arg11 callbackQueue:(id)arg12;
+ (_Bool)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(CDUnknownBlockType)arg5;

- (void)cancel;
- (id)initWithRequest:(id)arg1;
- (void)_calculateSimpleETAFromAPI:(_Bool)arg1 includeSummary:(_Bool)arg2 WithHandler:(CDUnknownBlockType)arg3;
- (void)_calculateRoutingETAWithSummary:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)calculateETAFromAPI:(_Bool)arg1 includeSummary:(_Bool)arg2 WithResponseHandler:(CDUnknownBlockType)arg3;
- (void)_calculateSimpleETAFromAPI:(_Bool)arg1 WithHandler:(CDUnknownBlockType)arg2;
- (void)_calculateRoutingETAWithHandler:(CDUnknownBlockType)arg1;
- (void)calculateETAWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)calculateETAFromAPI:(_Bool)arg1 WithResponseHandler:(CDUnknownBlockType)arg2;

@end
