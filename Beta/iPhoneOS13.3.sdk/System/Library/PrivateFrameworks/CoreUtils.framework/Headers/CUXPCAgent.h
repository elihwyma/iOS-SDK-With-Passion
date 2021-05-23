/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString, NSXPCConnection, NSXPCInterface, NSXPCListener, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface CUXPCAgent : NSObject

{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    struct NSMutableSet *_xpcCnxSet;
    NSXPCListener *_xpcListener;
    CDUnknownBlockType _connectionStartedHandler;
    CDUnknownBlockType _connectionEndedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSXPCInterface *_remoteObjectInterface;
}

@property (copy, nonatomic) CDUnknownBlockType connectionStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType connectionEndedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_interrupted;
- (_Bool)activateDirectAndReturnError:(id *)arg1;
- (void)_connectionInvalidated:(id)arg1;

@end
