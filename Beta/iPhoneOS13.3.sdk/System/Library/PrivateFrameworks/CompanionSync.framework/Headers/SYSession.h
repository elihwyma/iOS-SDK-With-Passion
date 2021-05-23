/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSString, PBCodable, SYService;

@protocol OS_dispatch_queue, OS_os_transaction, SYChangeSerializer, SYSessionDelegate;

@interface SYSession : NSObject

{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    _Atomic _Bool _inTransaction;
    NSObject<OS_os_transaction> *_transaction;
    _Atomic _Bool _paused;
    NSMutableSet *_pendingMessageIDs;
    _Bool _rejectedNewSessionFromSamePeer;
    _Bool _sessionStarted;
    struct NSMutableDictionary *_stateResponders;
    struct os_unfair_lock_s _setDelegateLock;
    _Bool _isSending;
    long long _priority;
    id <SYSessionDelegate> _delegate;
    id <SYChangeSerializer> _serializer;
    NSString *_identifier;
    SYService *_service;
    NSString *_reason;
    double _perMessageTimeout;
    double _fullSessionTimeout;
    NSDictionary *_options;
    long long _maxConcurrentMessages;
    NSError *_error;
    NSDictionary *_userContext;
    NSDictionary *_sessionMetadata;
    NSObject<OS_dispatch_queue> *_queue;
    double _birthDate;
    unsigned long long _sessionSignpost;
    unsigned long long _bytesTransferred;
    unsigned long long _changeCount;
    NSMutableDictionary *_peerGenerationIDs;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property long long state;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double birthDate;
@property (nonatomic, readonly) NSDictionary *wrappedUserContext;
@property (nonatomic, readonly) double remainingSessionTime;
@property (nonatomic) unsigned long long sessionSignpost;
@property (nonatomic, readonly) unsigned long long bytesTransferred;
@property (nonatomic, readonly) unsigned long long changeCount;
@property (copy, nonatomic) NSMutableDictionary *peerGenerationIDs;
@property (nonatomic, readonly) unsigned long long protocolVersion;
@property (nonatomic) long long priority;
@property (weak, nonatomic) id <SYSessionDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) id <SYChangeSerializer> serializer;
@property (weak, nonatomic, readonly) SYService *service;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) double perMessageTimeout;
@property (nonatomic) double fullSessionTimeout;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) long long maxConcurrentMessages;
@property (retain, nonatomic) NSError *error;
@property _Bool canRestart;
@property _Bool canRollback;
@property (nonatomic, readonly) _Bool isSending;
@property (readonly) _Bool isResetSync;
@property (readonly) _Bool wasCancelled;
@property (retain, nonatomic) NSDictionary *userContext;
@property (copy, nonatomic) NSDictionary *sessionMetadata;
@property (nonatomic, readonly) unsigned long long sentChangeByteCount;
@property (nonatomic, readonly) unsigned long long sentChangeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PBCodable *stateForLogging;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)unarchiveMetadata:(id)arg1;

- (void)dealloc;
- (void)cancel;
- (id)CPSafeDescription;
- (_Bool)_beginTransaction;
- (void)cancelWithError:(id)arg1;
- (void)_handleError:(id)arg1;
- (id)initWithService:(id)arg1;
- (void)_pause;
- (void)start:(CDUnknownBlockType)arg1;
- (id)dataFromChange:(id)arg1;
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;
- (id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;
- (id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
- (void)_continue;
- (id)combinedEngineOptions:(id)arg1;
- (void)didCompleteSession;
- (void)_setStateQuietly:(long long)arg1;
- (void)didStartSession;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (_Bool)hasRejectedPeerSession;
- (void)setHasRejectedPeerSession:(_Bool)arg1;
- (_Bool)_willAcquiesceToNewSessionFromPeer:(id)arg1;
- (_Bool)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_clearOutgoingMessageUUID:(id)arg1;
- (void)_recordOutgoingMessageUUID:(id)arg1;
- (_Bool)_readyToProcessIncomingMessages;
- (void)_onSessionStateChangedTo:(long long)arg1 do:(CDUnknownBlockType)arg2;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_supercededWithSession:(id)arg1;
- (id)stateResponders;
- (id)_cancelPendingMessagesReturningFailures;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;
- (_Bool)_endTransaction;

@end
