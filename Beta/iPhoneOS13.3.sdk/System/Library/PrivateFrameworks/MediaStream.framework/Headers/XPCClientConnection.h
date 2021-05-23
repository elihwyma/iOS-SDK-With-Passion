/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_xpc_object, XPCClientConnectionDelegate;

@interface XPCClientConnection : NSObject

{
    NSString *_serviceName;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    id <XPCClientConnectionDelegate> _delegate;
}

@property (nonatomic, readonly) id <XPCClientConnectionDelegate> delegate;

- (id)debugDescription;
- (void)_handleConnectionEvent:(id)arg1;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;
- (void)_handleIncomingMessage:(id)arg1;
- (void)_reallySendMessage:(id)arg1 handler:(CDUnknownBlockType)arg2 sequence:(unsigned long long)arg3 retryCount:(unsigned long long)arg4;
- (void)sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;

@end
