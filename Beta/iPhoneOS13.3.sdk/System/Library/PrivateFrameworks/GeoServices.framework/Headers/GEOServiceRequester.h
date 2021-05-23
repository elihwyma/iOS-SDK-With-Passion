/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMapTable;

@interface GEOServiceRequester : NSObject

{
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s _pendingRequestsLock;
}

- (id)init;
- (void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_cancelRequest:(id)arg1;
- (id)_validateResponse:(id)arg1;

@end
