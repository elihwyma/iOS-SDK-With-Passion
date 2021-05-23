/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSObjCProtocol, BSXPCServiceConnection;

@protocol BSServiceDispatchingQueue, OS_dispatch_queue, OS_xpc_object;

@interface BSXPCServiceConnectionProxy : NSObject

{
    BSObjCProtocol *_remoteProtocol;
    BSObjCProtocol *_localProtocol;
    BSXPCServiceConnection *_connection;
    NSObject<OS_xpc_object> *_XPCConnection;
    NSObject<OS_dispatch_queue> *_XPCConnectionTargetQueue;
    id <BSServiceDispatchingQueue> _replyQueue;
}

@property (retain, nonatomic) BSObjCProtocol *localProtocol;
@property (retain, nonatomic) BSObjCProtocol *remoteProtocol;
@property (retain, nonatomic) BSXPCServiceConnection *connection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *XPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *XPCConnectionTargetQueue;
@property (retain, nonatomic) id <BSServiceDispatchingQueue> replyQueue;

+ (void)createImplementationForProtocol:(id)arg1;
+ (void)invokeMethod:(id)arg1 onTarget:(id)arg2 withMessage:(id)arg3 forConnection:(id)arg4;
+ (id)concreteArgumentsForArguments:(id)arg1;
+ (void)encodeArguments:(id)arg1 inArgs:(in id [10])arg2 toMessage:(id)arg3 forConnection:(id)arg4;
+ (void)decodeArguments:(id)arg1 outArgs:(out id [10])arg2 fromMessage:(id)arg3 forConnection:(id)arg4;
+ (CDStruct_ab087b89)invokeMethod:(id)arg1 onTarget:(id)arg2 withObjects:(in id [10])arg3;
+ (id)proxyForConnection:(id)arg1 withInterface:(id)arg2 activeXPCConnection:(id)arg3 xpcConnectionTargetQueue:(id)arg4 replyQueue:(id)arg5;
+ (void)invokeReplyBlock:(CDUnknownBlockType)arg1 withArguments:(id)arg2 andPayload:(id)arg3 error:(id)arg4 forConnection:(id)arg5;

- (void)dealloc;
- (_Bool)invokeMessage:(id)arg1 onTarget:(id)arg2;

@end
