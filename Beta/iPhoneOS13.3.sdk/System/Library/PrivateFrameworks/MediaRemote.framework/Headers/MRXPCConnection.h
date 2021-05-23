/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRXPCConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_customXpcHandlers;
    NSObject<OS_xpc_object> *_connection;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (copy, nonatomic) CDUnknownBlockType messageHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) int pid;

- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)sendSyncMessage:(id)arg1 error:(id *)arg2;
- (void)_registerCallbacks;
- (void)addCustomXPCHandler:(CDUnknownBlockType)arg1 forKey:(unsigned long long)arg2;
- (void)removeCustomXPCHandler:(unsigned long long)arg1;
- (void)sendMessageWithType:(unsigned long long)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end
