/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface ATXPCConnection : NSObject

{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    CDUnknownBlockType _lockdownHandler;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _disconnectHandler;
    NSMutableSet *_outstandingMessages;
    _Bool _assertionHeld;
    id _context;
}

@property (readonly) NSString *serviceName;
@property (copy, nonatomic) CDUnknownBlockType lockdownHandler;
@property (copy, nonatomic) CDUnknownBlockType messageHandler;
@property (copy, nonatomic) CDUnknownBlockType disconnectHandler;
@property (nonatomic) _Bool assertionHeld;
@property (retain, nonatomic) id context;

- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)eventQueue;
- (void)shutdown;
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_handleXPCError:(id)arg1;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_handleLockdownMessage:(void *)arg1;
- (void)_handleXPCMessage:(id)arg1;
- (void)_registerMessage:(id)arg1;
- (void)_removeMessage:(id)arg1;
- (unsigned long long)_outstandingMessages;

@end
