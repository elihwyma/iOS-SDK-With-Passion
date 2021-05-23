/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSLock, NSString, NSXPCConnection, NSXPCInterface, PKXPCForwarder;

@protocol NSObject, PKForegroundActiveArbiter, PKInvalidatable, PKXPCServiceDelegate;

@interface PKXPCService : NSObject

{
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    id _exportedObject;
    NSString *_className;
    NSString *_serviceResumedNotificationName;
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
    PKXPCForwarder *_exportedProxy;
    _Bool _suspendCallbacks;
    _Bool _forceConnectionOnResume;
    id <PKForegroundActiveArbiter> _foregroundActiveArbiter;
    id <NSObject> _foregroundListener;
    id <NSObject> _backgroundListener;
    id <PKInvalidatable> _serviceResumedListenerInvalidater;
    id <PKXPCServiceDelegate> _delegate;
    NSString *_machServiceName;
    unsigned long long _options;
}

@property (nonatomic, readonly) NSString *machServiceName;
@property (nonatomic, readonly) unsigned long long options;
@property (weak, nonatomic) id <PKXPCServiceDelegate> delegate;
@property (nonatomic, readonly, getter=isSuspended) _Bool suspended;
@property (nonatomic, readonly) _Bool connectionEstablished;
@property (nonatomic) _Bool forceConnectionOnResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setForegroundActiveArbiter:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 options:(unsigned long long)arg6;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5;
- (id)remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_registerForServiceListenerResumedNotifications;
- (void)_establishServiceConnection;
- (void)_unregisterForServiceListenerResumedNotifications;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_invalidateConnectionIfPossible;
- (CDUnknownBlockType)_newWrappedErrorHandlerForHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_newErrorHandlerWithSemaphore:(id)arg1;
- (id)existingRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_createConnectionIfPossible:(_Bool)arg1;
- (void)_sendResumed;
- (void)_sendSuspended;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_3d581f42)arg2;
- (id)remoteObjectProxyWithSemaphore:(id)arg1;
- (id)existingRemoteObjectProxy;
- (id)existingSynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end
