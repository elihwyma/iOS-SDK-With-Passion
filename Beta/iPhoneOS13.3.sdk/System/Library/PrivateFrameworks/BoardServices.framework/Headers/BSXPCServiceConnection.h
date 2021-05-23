/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceInterface, BSServiceQuality, BSXPCServiceConnectionContext, BSXPCServiceConnectionEventHandler, BSXPCServiceConnectionMessage, BSXPCServiceConnectionMessageReply, BSXPCServiceConnectionPeer, NSMutableArray, NSString;

@protocol BSServiceDispatchingQueue, BSXPCDecoding, BSXPCServiceConnectionParent, OS_dispatch_queue, OS_xpc_object;

@interface BSXPCServiceConnection : NSObject

{
    BSXPCServiceConnectionContext *_context;
    NSString *_proem;
    struct os_unfair_lock_s _lock;
    unsigned int _lock_activationGeneration;
    BSXPCServiceConnectionPeer *_lock_peer;
    id <BSServiceDispatchingQueue> _lock_connection_queue;
    NSObject<OS_xpc_object> *_lock_connection;
    NSMutableArray *_lock_childConnections;
    NSMutableArray *_lock_connectionActivatedEvents;
    NSMutableArray *_lock_connectionEstablishedEvents;
    BSXPCServiceConnectionMessage *_lock_activationMessage;
    BSXPCServiceConnectionMessageReply *_lock_activationReply;
    BSXPCServiceConnectionMessage *_lock_invalidationMessage;
    BSXPCServiceConnectionEventHandler *_lock_eventHandler;
    id <BSXPCServiceConnectionParent> _lock_parent;
    _Bool _lock_configured;
    _Bool _lock_activated;
    _Bool _lock_sendsMustWaitForEstablished;
    _Bool _lock_established;
    _Bool _lock_remotelyInvalidated;
    _Bool _lock_clientInvalidated;
    _Bool _lock_invalidated;
}

@property (nonatomic, readonly) BSXPCServiceConnectionContext *_context;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *_XPCConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_XPCConnectionTargetQueue;
@property (nonatomic, readonly) BSXPCServiceConnectionPeer *peer;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id remoteTarget;
@property (copy, nonatomic, readonly) BSServiceQuality *serviceQuality;
@property (copy, nonatomic, readonly) BSServiceInterface *interface;
@property (nonatomic, readonly) id <BSXPCDecoding> initiatingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_isInvalidated) _Bool _invalidated;
@property (nonatomic, readonly, getter=_isClientInvalidated) _Bool _clientInvalidated;

+ (id)currentContext;
+ (id)connectionWithServiceName:(id)arg1 privileged:(_Bool)arg2;
+ (id)connectionWithConnection:(id)arg1;
+ (id)connectionWithEndpoint:(id)arg1 nonLaunching:(_Bool)arg2 description:(id)arg3;
+ (id)_connectionWithXPCConnection:(id)arg1 endpointDescription:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_eventHandler;
- (id)createMessage;
- (void)_lock_invalidate;
- (void)configure:(CDUnknownBlockType)arg1;
- (void)_setParent:(id)arg1;
- (id)_initWithContext:(id)arg1;
- (_Bool)activateNowOrWhenReady:(CDUnknownBlockType)arg1;
- (id)createMessageWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasChildren;
- (void)_parentInvalidated;
- (void)_invalidateChildConnection:(id)arg1;
- (void)_lock_associateNewChildConnection:(id)arg1;
- (_Bool)_lock_activateNowOrWhenReady:(CDUnknownBlockType)arg1 withParent:(id)arg2;
- (void)_connection_handleEvent:(id)arg1;
- (void)_connection_consumeLock_didActivateWithPeer:(id)arg1;
- (void)_connection_consumeLock_runPendedEventsIfAppropriate;
- (void)_lock_enqueueConnectionEstablishedEvent:(CDUnknownBlockType)arg1;
- (void)_lock_disconnect;
- (void)_connection_handleMessage:(id)arg1 fromPeer:(id)arg2 withHandoff:(id)arg3;
- (void)_connection_handleActivationMessage:(id)arg1 fromPeer:(id)arg2;
- (void)_connection_handleInvalidateMessage:(id)arg1 withHandoff:(id)arg2;
- (void)_connection_consumeLock_handleError:(id)arg1 notYetLocked:(_Bool)arg2;
- (void)_lock_enqueueChildActivateEvent:(CDUnknownBlockType)arg1 forHandoff:(id)arg2;
- (id)_lock_createMessageWithParent:(id)arg1;

@end
