/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface AVConferenceXPCClient : NSObject

{
    NSObject<OS_xpc_object> *connection;
    NSMutableDictionary *registeredBlocks;
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *connectionQueue;
    _Bool connectionPersists;
}

@property (readonly) NSObject<OS_xpc_object> *connection;
@property (readonly) NSMutableDictionary *registeredBlocks;
@property (readonly) _Bool connectionPersists;

+ (id)AVConferenceXPCClientSingleton;

- (id)init;
- (void)dealloc;
- (void)sendMessageAsync:(char *)arg1;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deregisterFromService:(char *)arg1;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3 eventLogLevel:(int)arg4;
- (id)sendMessageSync:(char *)arg1;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)createConnectionToServer;
- (id)newServerDiedDictionary;
- (void)closeConnectionToServer;
- (id)newNSDictionaryFromXPCDictionary:(id)arg1;
- (id)newNSErrorFromNSDictionary:(id)arg1;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (id)newXPCDictionaryFromNSDictionary:(id)arg1;
- (id)copyConnection;
- (id)newNSDictionaryFromNSError:(id)arg1;
- (id)newTimeoutDictionary;

@end
