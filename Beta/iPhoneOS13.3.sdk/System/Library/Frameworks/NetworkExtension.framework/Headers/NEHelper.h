/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface NEHelper : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    CDUnknownBlockType _incomingMessageHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_initMessage;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSObject<OS_xpc_object> *initMessage;
@property (copy) CDUnknownBlockType incomingMessageHandler;

- (void)dealloc;
- (id)connection;
- (id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 initialMessage:(id)arg3;
- (void)sendRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)initWithDelegateClassID:(int)arg1 queue:(id)arg2;

@end
