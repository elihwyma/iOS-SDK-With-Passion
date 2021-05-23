/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUXPCAgent, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CUXPCAgentConnection : NSObject

{
    CUXPCAgent *_agent;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)connectionInvalidated;

@end
