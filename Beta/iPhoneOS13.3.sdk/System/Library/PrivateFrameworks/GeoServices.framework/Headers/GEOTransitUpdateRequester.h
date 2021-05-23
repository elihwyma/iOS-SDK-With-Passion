/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSHashTable, geo_isolater;

@interface GEOTransitUpdateRequester : NSObject

{
    geo_isolater *_isolater;
    NSHashTable *_pendingRequests;
}

+ (id)sharedRequester;

- (id)init;
- (void)cancelTransitRouteUpdateRequest:(id)arg1;
- (void)startTransitRouteUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 networkActivity:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)_finishRequest:(id)arg1;

@end
