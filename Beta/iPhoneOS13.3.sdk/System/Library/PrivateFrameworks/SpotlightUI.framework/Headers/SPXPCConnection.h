/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface SPXPCConnection : NSObject

{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    _Bool _ownsQueue;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _disconnectHandler;
    id _context;
    NSString *_bundleID;
}

@property (weak, readonly) NSString *serviceName;
@property (weak, readonly) NSString *bundleID;
@property (copy, nonatomic) CDUnknownBlockType messageHandler;
@property (copy, nonatomic) CDUnknownBlockType disconnectHandler;
@property (retain, nonatomic) id context;

- (void)dealloc;
- (void)sendMessage:(id)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)eventQueue;
- (void)shutdown;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_handleXPCError:(id)arg1;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_handleXPCMessage:(id)arg1;
- (id)eventQueueWithQOS:(unsigned int)arg1;
- (id)initWithXPCConnection:(id)arg1 qos:(unsigned int)arg2;

@end
