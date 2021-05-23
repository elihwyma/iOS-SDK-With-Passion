/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICRemoteRequestOperationController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _numberOfActiveRequests;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_source> *_clientConnectionInvalidationTimer;
}

+ (id)sharedRemoteRequestOperationController;

- (id)_init;
- (id)_clientConnection;
- (void)_willBeginExecutingRemoteRequestOperation;
- (void)_didEndExecutingRemoteRequestOperation;
- (void)performRemoteRequestOperationWithExecutionContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleInvalidationOfClientConnection;
- (void)_cancelClientConnectionInvalidationTimer;
- (void)_invalidateClientConnection;
- (void)_clientConnectionInvalidationTimerDidExpire;

@end
