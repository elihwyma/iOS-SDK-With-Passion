/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYSession.h>

@class NSMutableArray, NSMutableIndexSet, NSObject, SYMessageStatusRecord, _SYCountedSemaphore;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

@interface SYSendingSession : SYSession

{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSObject<OS_dispatch_source> *_messageTimer;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    unsigned long long _batchIndex;
    NSMutableIndexSet *_ackedBatchIndices;
    NSObject<OS_os_activity> *_sessionActivity;
    double _sessionStartTime;
    struct NSMutableDictionary *_batchObjectIDsByBatchIndex;
    SYMessageStatusRecord *_startMessageID;
    SYMessageStatusRecord *_endMessageID;
    NSMutableArray *_batchMessageIDs;
    struct os_unfair_lock_s _flagsLock;
    struct {
        unsigned int state:4;
        unsigned int canRestart:1;
        unsigned int canRollback:1;
        unsigned int isResetSync:1;
        unsigned int started:1;
        unsigned int cancelled:1;
        unsigned int completed:1;
        unsigned int remoteStartSent:1;
        unsigned int remoteStartConfirmed:1;
        unsigned int remoteEndSent:1;
        unsigned int remoteEndConfirmed:1;
        unsigned int localErrorOccurred:1;
    } _flags;
}

- (long long)state;
- (void)setState:(long long)arg1;
- (void)cancelWithError:(id)arg1;
- (_Bool)wasCancelled;
- (void)start:(CDUnknownBlockType)arg1;
- (void)_fetchNextBatch;
- (_Bool)isResetSync;
- (_Bool)isSending;
- (void)_continue;
- (_Bool)canRestart;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRollback:(_Bool)arg1;
- (void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2;
- (id)_newMessageHeader;
- (void)_setStateQuietly:(long long)arg1;
- (void)_sendSyncCompleteAndRunBlock:(CDUnknownBlockType)arg1;
- (void)_waitForMessageWindow;
- (void)_sendSyncCancelled;
- (void)_sendSyncRestart;
- (void)_processNextState;
- (void)_installStateListener;
- (void)_installTimers;
- (void)_setupChangeConcurrency;
- (double)remainingSessionTime;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (_Bool)_hasSentEnd;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)initWithService:(id)arg1 isReset:(_Bool)arg2;
- (_Bool)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_tweakMessageHeader:(id)arg1;
- (void)_setLocalErrorOccurred;
- (_Bool)_localErrorOccurred;
- (void)_sentEnd;
- (void)_sessionFinished;
- (void)_setComplete;
- (void)_sendEndSessionAndError:(id)arg1;
- (void)_notifyErrorAndShutdown;
- (void)_sentStart;
- (void)_startFailedForStateChangeWithError:(id)arg1;
- (void)_setCancelled;
- (void)_confirmedStart;
- (void)_confirmedEnd;
- (void)_setMessageTimer;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;

@end
