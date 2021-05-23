/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface NEIPC : NSObject

{
    CDUnknownBlockType _messageHandler;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_listener;
}

@property (copy) CDUnknownBlockType messageHandler;
@property (retain) NSObject<OS_xpc_object> *connection;
@property (retain) NSObject<OS_xpc_object> *listener;
@property (readonly) _Bool connected;

- (void)stop;
- (id)startInListenModeWithQueue:(id)arg1 messageHandler:(CDUnknownBlockType)arg2;
- (void)logMessageType:(unsigned int)arg1 data:(id)arg2 actionString:(id)arg3;
- (void)handleMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setupMessageHandlingWithQueue:(id)arg1;
- (void)startWithEndpoint:(id)arg1 queue:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (_Bool)sendMessageWithType:(unsigned int)arg1 data:(id)arg2 replyQueue:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;

@end
