/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOETATrafficUpdateRequester : NSObject

- (void)cancelRequest:(id)arg1;
- (void)sendETATrafficUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 finishedHandler:(CDUnknownBlockType)arg4;
- (void)sendConditionalETATrafficUpdateRequest:(id)arg1 timeWindowDuration:(double)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 willSendRequestHandler:(CDUnknownBlockType)arg5 finishedHandler:(CDUnknownBlockType)arg6;

@end
