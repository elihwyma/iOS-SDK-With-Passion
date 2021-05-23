/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACRemoteCommandHandler, IDSService, NSLock, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ACRemoteDeviceProxy : NSObject

{
    IDSService *_messageSendingService;
    NSObject<OS_dispatch_queue> *_messageSendingQueue;
    NSObject<OS_dispatch_queue> *_commandProcessingQueue;
    ACRemoteCommandHandler *_remoteCommandHandler;
    NSMutableDictionary *_completionHandlersByInternalMessageID;
    NSMutableDictionary *_internalMessageIDsByTransportID;
    NSLock *_completionHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendCommand:(id)arg1 withAccount:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_isValidCommandForOutgoingMessage:(id)arg1;
- (long long)_priorityForMessageCarryingCommand:(id)arg1;
- (_Bool)_sendMessageData:(id)arg1 toDestination:(id)arg2 withPriority:(long long)arg3 bypassDuet:(_Bool)arg4 transportID:(id *)arg5 error:(id *)arg6;
- (void)_enqueueCompletionHandler:(CDUnknownBlockType)arg1 forMessageWithInternalID:(id)arg2 transportID:(id)arg3;
- (void)_dequeueCompletionHandlersForMessageWithTransportID:(id)arg1 success:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_dequeueCompletionHandlersForMessageWithInternalID:(id)arg1 success:(_Bool)arg2 result:(id)arg3 error:(id)arg4;
- (void)_sendReplyForMessage:(id)arg1 withSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;

@end
