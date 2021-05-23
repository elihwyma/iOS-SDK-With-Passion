/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYSession.h>

@class NSMutableIndexSet, NSObject;

@protocol OS_dispatch_group, OS_dispatch_source, OS_os_activity;

@interface SYReceivingSession : SYSession

{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    NSMutableIndexSet *_receivedBatchIndices;
    NSObject<OS_os_activity> *_sessionActivity;
    NSObject<OS_dispatch_group> *_asyncResetGroupToWaitOn;
    CDUnknownBlockType _weakBlockWaitingForReset;
    struct os_unfair_lock_s _flagsLock;
    struct {
        unsigned int state:4;
        unsigned int canRestart:1;
        unsigned int canRollback:1;
        unsigned int isResetSync:1;
        unsigned int started:1;
        unsigned int cancelled:1;
        unsigned int completed:1;
        unsigned int changedMetadata:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool metadataModified;

- (void)setDelegate:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (void)cancelWithError:(id)arg1;
- (_Bool)wasCancelled;
- (_Bool)_hasStarted;
- (void)start:(CDUnknownBlockType)arg1;
- (_Bool)_hasCompleted;
- (_Bool)isResetSync;
- (_Bool)isSending;
- (void)_continue;
- (_Bool)canRestart;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRollback:(_Bool)arg1;
- (id)_newMessageHeader;
- (void)_setStateQuietly:(long long)arg1;
- (void)_processNextState;
- (void)_installStateListener;
- (void)_installTimers;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (_Bool)_handleStartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleSyncBatchResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleRestartSessionResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleEndSessionResponse:(id)arg1 error:(id *)arg2;
- (id)initWithService:(id)arg1 isReset:(_Bool)arg2 metadata:(id)arg3;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_tweakMessageHeader:(id)arg1;
- (void)_sessionFinished;
- (void)_sendEndSessionAndError:(id)arg1;
- (void)_notifyErrorAndShutdown;
- (void)_setCancelled;
- (void)setSessionMetadata:(id)arg1;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;
- (void)_setCompleted;
- (void)_sessionCancelled;
- (void)_sessionRestarted;
- (_Bool)_postAsyncResetRequestReturningError:(id *)arg1;
- (void)_setStarted;
- (void)_midStreamErrorHandled;
- (_Bool)_isMissingSyncBatches;

@end
