/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYSession.h>

@class NSObject, _SYCountedSemaphore, _SYMessageTimerTable;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingDeltaTransactionSession : SYSession

{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_os_activity> *_sessionActivity;
    long long _state;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    _SYMessageTimerTable *_timers;
    _Bool _canRestart;
    _Bool _canRollback;
    _Bool _cancelled;
}

- (long long)state;
- (void)setState:(long long)arg1;
- (void)cancelWithError:(id)arg1;
- (_Bool)wasCancelled;
- (unsigned long long)protocolVersion;
- (id)initWithService:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (void)_fetchNextBatch;
- (_Bool)isResetSync;
- (_Bool)isSending;
- (_Bool)canRestart;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRollback:(_Bool)arg1;
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2;
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;
- (void)_notifySessionComplete;
- (void)_setStateQuietly:(long long)arg1;
- (void)_waitForMessageWindow;
- (void)_processNextState;
- (void)_installStateListener;
- (void)_setupChangeConcurrency;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;

@end
