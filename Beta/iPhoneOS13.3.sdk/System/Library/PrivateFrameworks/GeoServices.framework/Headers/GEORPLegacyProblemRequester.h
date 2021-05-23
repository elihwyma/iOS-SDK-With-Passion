/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMapTable;

@interface GEORPLegacyProblemRequester : NSObject

{
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s _pendingRequestsLock;
}

+ (id)sharedRequester;

- (id)init;
- (void)dealloc;
- (void)cancelRequest:(id)arg1;
- (void)startSubmissionRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)startStatusRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;

@end
