/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NRMockClientNSXPCConnection, NRMockNSXPCListener, NSString, NSXPCInterface;

@protocol OS_dispatch_queue;

@interface NRMockServerNSXPCConnection : NSObject

{
    NRMockClientNSXPCConnection *_clientConnection;
    NRMockNSXPCListener *_listener;
    id _synchronousRemoteObjectProxy;
    id _remoteObjectProxy;
    _Bool _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _interruptionHandler;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
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

- (void)dealloc;
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
- (id)initWithListener:(id)arg1 clientConnection:(id)arg2;

@end
