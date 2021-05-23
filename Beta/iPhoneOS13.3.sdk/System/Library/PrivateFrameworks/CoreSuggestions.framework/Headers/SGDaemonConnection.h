/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSXPCConnection, NSXPCInterface;

@protocol OS_dispatch_queue;

@interface SGDaemonConnection : NSObject

{
    NSString *_machServiceName;
    NSXPCInterface *_xpcInterface;
    NSObject<OS_dispatch_queue> *_connectLock;
    NSMutableArray *_abortBlocks;
    struct _opaque_pthread_mutex_t _abortLock;
    NSXPCConnection *_xpcConnection;
}

+ (void)_useSyncXPCWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)usingSyncXPC;

- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)disconnect;
- (id)xpcConnection;
- (void)_connectToServer;
- (id)initWithMachServiceName:(id)arg1 xpcInterface:(id)arg2;
- (void)_callAbortBlocks;
- (id)waitUntilReturn:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (void)addConnectionInterruptedHandler:(CDUnknownBlockType)arg1;

@end
