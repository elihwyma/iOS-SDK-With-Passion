/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol BSXPCConnectionListenerHandler, OS_dispatch_queue, OS_xpc_object;

@interface BSXPCConnectionListener : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    id <BSXPCConnectionListenerHandler> _handler;
    NSString *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) id <BSXPCConnectionListenerHandler> handler;
@property (copy, readonly) NSString *service;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithConnection:(id)arg1 forService:(id)arg2 withHandler:(id)arg3 onQueue:(id)arg4;

@end
