/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NRMockServerNSXPCConnection, NSString, NSXPCInterface;

@protocol OS_dispatch_queue;

@interface NRMockClientNSXPCConnection : NSObject

{
    NSString *_name;
    NRMockServerNSXPCConnection *_serverConnection;
    id _synchronousRemoteObjectProxy;
    id _remoteObjectProxy;
    _Bool _invalidated;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _interruptionHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NRMockServerNSXPCConnection *serverConnection;
@property (nonatomic, readonly) _Bool invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (retain, nonatomic, readonly) id remoteObjectProxy;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) int processIdentifier;
@property (retain, nonatomic, readonly) NSString *processName;

- (void)invalidate;
- (void)_invalidate;
- (void)resume;
- (void)_setQueue:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)suspend;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)valueForEntitlement:(id)arg1;
- (void)runCompletionBlock:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyAsync:(_Bool)arg1;

@end
