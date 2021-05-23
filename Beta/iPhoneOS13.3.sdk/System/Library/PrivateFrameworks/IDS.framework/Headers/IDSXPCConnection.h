/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString, NSXPCConnection;

@protocol NSXPCProxyCreating, OS_dispatch_queue;

@interface IDSXPCConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSMutableDictionary *_pendingTransactions;
    IDSXPCConnection *_rootConnection;
    id <NSXPCProxyCreating> _remoteObject;
    CDUnknownBlockType _invalidationHandler;
    _Bool _forSyncMessaging;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableDictionary *pendingTransactions;
@property (retain, nonatomic) IDSXPCConnection *rootConnection;
@property (retain, nonatomic) id <NSXPCProxyCreating> remoteObject;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) _Bool forSyncMessaging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)valueForEntitlement:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (_Bool)hasEntitlement:(id)arg1;
- (id)initForSyncMessagingWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2;
- (id)initWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2;
- (id)remoteObjectProxyWithTimeoutInSeconds:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)initWithRemoteObject:(id)arg1 rootConnection:(id)arg2;
- (id)_initWithQueue:(id)arg1 takingOverAndResumingConnection:(id)arg2 forSyncMessaging:(_Bool)arg3;
- (void)_cleanupAllPendingTransactions;
- (id)initWithQueue:(id)arg1 remoteObject:(id)arg2;

@end
