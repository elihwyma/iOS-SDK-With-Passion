/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableArray, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface _GEODirectionsRequesterServerRemoteProxy : NSObject

{
    geo_isolater *_isolater;
    NSMutableArray *_pendingRequests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 isDoomRequest:(_Bool)arg3 requestPriority:(id)arg4 callbackQueue:(id)arg5 finished:(CDUnknownBlockType)arg6 networkActivity:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;
- (_Bool)_finishRequest:(id)arg1;

@end
