/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMapTable;

@interface GEOAddressCorrectionRequester : NSObject

{
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s _pendingRequestsLock;
}

+ (id)sharedRequester;

- (id)init;
- (void)dealloc;
- (void)cancelRequest:(id)arg1;
- (void)startAddressCorrectionInitRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startAddressCorrectionUpdateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;

@end
