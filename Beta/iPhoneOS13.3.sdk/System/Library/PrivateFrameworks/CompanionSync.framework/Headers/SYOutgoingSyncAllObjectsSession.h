/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYSession.h>

@class NSMutableArray, NSObject;

@protocol OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingSyncAllObjectsSession : SYSession

{
    NSObject<OS_os_activity> *_sessionActivity;
    long long _state;
    _Bool _errorIsLocal;
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    double _sessionStartTime;
    NSMutableArray *_changesToSend;
    _Bool _cancelled;
    _Bool canRestart;
    _Bool canRollback;
}

- (long long)state;
- (void)setState:(long long)arg1;
- (void)cancelWithError:(id)arg1;
- (_Bool)wasCancelled;
- (unsigned long long)protocolVersion;
- (id)initWithService:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (_Bool)isResetSync;
- (_Bool)isSending;
- (_Bool)canRestart;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRollback:(_Bool)arg1;
- (void)_setStateQuietly:(long long)arg1;
- (void)_processNextState;
- (void)_installStateListener;
- (void)_installTimers;
- (double)remainingSessionTime;
- (_Bool)_handleBatchSyncEndResponse:(id)arg1 error:(id *)arg2;
- (void)_sendChanges;
- (void)_sessionCompleteWithError:(id)arg1;
- (void)_fetchChanges;
- (void)_sessionFailed;

@end
