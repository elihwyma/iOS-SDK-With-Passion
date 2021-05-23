/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, NSXPCListenerEndpoint;

@protocol AKAuthorizationClientProtocol;

@interface AKAuthorizationDaemonConnection : NSObject

{
    struct os_unfair_lock_s _unfairLock;
    NSXPCConnection *_connection;
    id <AKAuthorizationClientProtocol> _contextManager;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithListenerEndpoint:(id)arg1 exportedInterface:(id)arg2;
- (void)_connectionInterruptionHandler;
- (void)_connectionInvalidationHandler;

@end
