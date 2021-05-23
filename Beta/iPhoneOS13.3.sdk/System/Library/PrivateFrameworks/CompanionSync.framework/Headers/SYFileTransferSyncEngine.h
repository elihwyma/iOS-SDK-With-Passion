/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYSyncEngine.h>

@class IDSMessageContext, IDSService, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSObject, NSString, NSURL, SYDevice, SYStartSyncSession, _SYInputStreamer, _SYOutputStreamer;

@protocol OS_dispatch_queue, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface SYFileTransferSyncEngine : SYSyncEngine

{
    _Bool _inSession;
    _Bool _sessionCanceled;
    SYStartSyncSession *_sessionStartMessage;
    NSURL *_outputFileURL;
    _SYOutputStreamer *_outputStream;
    NSURL *_inputFileURL;
    _SYInputStreamer *_inputStream;
    IDSMessageContext *_inputPriorityBoostContext;
    NSURL *_responseFileURL;
    _SYOutputStreamer *_responseStream;
    _Bool _responsesCanceled;
    IDSService *_idsService;
    SYDevice *_activeDevice;
    SYDevice *_sessionDevice;
    SYDevice *_responseDevice;
    struct os_unfair_lock_s _idsQueueLock;
    NSObject<OS_dispatch_queue> *_idsQueue;
    _Bool _idsQueueIsSuspended;
    _Bool _idsQueueResumedLock;
    NSMutableIndexSet *_messageRows;
    NSMutableIndexSet *_responseMessageRows;
    NSMutableArray *_deferredIncomingSessions;
    NSMutableSet *_singleMessageUUIDs;
    struct os_unfair_lock_s _messageMapLock;
    NSMutableDictionary *_messageIDsToSessionIDs;
    NSObject<OS_os_transaction> *_closureTransaction;
    NSObject<OS_os_transaction> *_responseSessionTransaction;
    NSDictionary *_customIDSOptions;
}

@property (copy, nonatomic) NSDictionary *customIDSOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)suspend;
- (void)endSession;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;
- (_Bool)resume:(id *)arg1;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (_Bool)buffersSessions;
- (void)_recordLastSeqNo:(id)arg1;
- (id)stateForLogging;
- (_Bool)targetIsNearby;
- (void)beginSession;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (_Bool)buffersHandshake;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)_cancelSession;
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;
- (id)_fileTransferHeader;
- (_Bool)isInSession;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (void)_resumeIdsQueue;
- (id)idsOptions:(id)arg1;
- (unsigned long long)_crcChecksum:(id)arg1;
- (void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;
- (void)endFileTransferForStream:(id)arg1 atURL:(id)arg2 target:(id)arg3 wasCancelled:(_Bool)arg4 messageRows:(id)arg5;
- (_Bool)_sessionDeviceCanUseSingleMessages;
- (id)idsOptions:(id)arg1 forFileTransfer:(_Bool)arg2;
- (void)_enqueueSingleMessage:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)_handleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (_Bool)_shouldTreatAsSessionEnd:(id)arg1;
- (void)_reallyHandleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)_cancelResponses;
- (void)_consumeRemainingStreamDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_readNextProtobuf:(CDUnknownBlockType)arg1;
- (id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3;
- (void)_handleError:(id)arg1 messageID:(id)arg2 streamer:(id)arg3;
- (void)_handleIncomingStreamDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleProtobuf:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 isResponse:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)beginResponseSession;
- (void)_suspendIdsQueue;
- (void)endResponseSession;
- (id)_assumeOwnershipOfURL:(id)arg1 error:(id *)arg2;
- (void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;
- (void)_processNMSMessageData:(id)arg1 context:(id)arg2;

@end
