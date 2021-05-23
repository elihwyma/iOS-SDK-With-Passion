/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface SSXPCConnection : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _disconnectBlock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    CDUnknownBlockType _messageBlock;
}

@property (copy) CDUnknownBlockType disconnectBlock;
@property (copy) CDUnknownBlockType messageBlock;

- (id)init;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)setReplyQueue:(id)arg1;
- (id)createXPCEndpoint;
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_reloadEventHandler;
- (void)sendSynchronousMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)_initSSXPCConnection;
- (id)copyReplyQueue;

@end
