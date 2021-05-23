/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSBaseXPCServer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableSet *_clients;
    _Bool _connectionResumed;
    _Bool _usesAnonymousConnection;
    NSString *_serviceName;
    int _notifyToken;
}

@property (nonatomic, getter=usesAnonymousConnection) _Bool usesAnonymousConnection;

- (void)dealloc;
- (void)run;
- (void)_invalidate;
- (id)queue;
- (id)_connection;
- (id)_clients;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)registerServerSuspended;
- (void)resumeServer;
- (void)_addClientConnection:(id)arg1;
- (id)_notifyTokenName;
- (_Bool)queue_shouldAcceptNewConnection:(id)arg1;
- (id)queue_newClientForConnection:(id)arg1;
- (void)_queue_removeClientConnection:(id)arg1;
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;
- (void)queue_clientAdded:(id)arg1;
- (id)_queue_clientForConnection:(id)arg1;
- (void)queue_clientRemoved:(id)arg1;
- (Class)queue_classForNewClientConnection:(id)arg1;
- (void)_sendReplyForMessage:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendMessageReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (void)_sendReply:(id)arg1 messagePacker:(CDUnknownBlockType)arg2;
- (id)_getStringFromMessage:(id)arg1 key:(char *)arg2;
- (id)_copyEndpoint;

@end
