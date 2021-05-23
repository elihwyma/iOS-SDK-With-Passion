/*
 Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface DMXPCConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_replyQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (copy) CDUnknownBlockType interruptionHandler;
@property (copy) CDUnknownBlockType invalidationHandler;

- (void)invalidate;
- (void)resume;
- (id)initWithServiceName:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (void)_handleMessage:(id)arg1;
- (void)handleMessage:(id)arg1;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 syncReplyHandler:(CDUnknownBlockType)arg2;

@end
