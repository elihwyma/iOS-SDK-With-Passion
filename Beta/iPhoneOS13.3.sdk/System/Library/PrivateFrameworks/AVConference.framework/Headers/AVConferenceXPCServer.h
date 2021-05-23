/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface AVConferenceXPCServer : NSObject

{
    NSObject<OS_xpc_object> *listener;
    NSMutableArray *clientConnections;
    NSMutableDictionary *registeredBlocks;
    NSObject<OS_dispatch_queue> *incomingMessageQueue;
    NSObject<OS_dispatch_queue> *outgoingMessageQueue;
    NSObject<OS_dispatch_queue> *clientConnectionsQueue;
}

@property (readonly) NSObject<OS_xpc_object> *listener;
@property (readonly) NSMutableDictionary *registeredBlocks;

+ (id)AVConferenceXPCServerSingleton;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)deregisterFromService:(char *)arg1;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)registerBlockForService:(char *)arg1 block:(CDUnknownBlockType)arg2 queue:(id)arg3 eventLogLevel:(int)arg4;
- (void)_xpc_start_listening_for_connections;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 context:(id)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 toAllClientsWithContext:(id)arg3;
- (id)newNSDictionaryFromXPCDictionary:(id)arg1;
- (id)newNSErrorFromNSDictionary:(id)arg1;
- (id)newNSDictionaryFromNSError:(id)arg1;
- (void)_xpc_remove_connections_from_list;
- (id)newXPCDictionaryFromNSDictionary:(id)arg1 forEvent:(id)arg2;
- (id)_xpc_get_connection_from_list_for_context:(id)arg1;
- (id)_xpc_get_connections_from_list_for_context:(id)arg1;
- (id)_xpc_get_connection_from_list_for_connection:(id)arg1;
- (void)_xpc_handle_incoming_request:(id)arg1;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 context:(id)arg4;
- (id)newClientDiedDictionary;
- (void)appendPIDToDictionary:(id)arg1 pid:(int)arg2;
- (void)appendContextToDictionary:(id)arg1 forConnection:(id)arg2;
- (id)authorizedTokenData;
- (void)_xpc_add_connection_to_list:(id)arg1;
- (void)_xpc_remove_connection_from_list:(id)arg1;

@end
