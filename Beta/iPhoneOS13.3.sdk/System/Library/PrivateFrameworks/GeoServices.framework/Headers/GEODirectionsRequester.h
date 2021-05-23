/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol _GEODirectionsRequesterServerProxy;

@interface GEODirectionsRequester : NSObject

{
    id <_GEODirectionsRequesterServerProxy> _serverProxy;
}

+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (id)sharedRequester;

- (id)init;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 callbackQueue:(id)arg2 finished:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(_Bool)arg3 isDoomRequest:(_Bool)arg4 requestPriority:(id)arg5 callbackQueue:(id)arg6 finished:(CDUnknownBlockType)arg7 networkActivity:(CDUnknownBlockType)arg8 error:(CDUnknownBlockType)arg9;
- (void)finalizeRequest:(id)arg1;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(_Bool)arg3 isDoomRequest:(_Bool)arg4 requestPriority:(id)arg5 finished:(CDUnknownBlockType)arg6 networkActivity:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;

@end
