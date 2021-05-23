/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYSession.h>

@class NSObject;

@protocol OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYIncomingFullSyncSession : SYSession

{
    NSObject<OS_os_activity> *_sessionActivity;
    long long _state;
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    _Bool canRestart;
    _Bool canRollback;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *sessionActivity;

- (long long)state;
- (void)setState:(long long)arg1;
- (void)cancelWithError:(id)arg1;
- (unsigned long long)protocolVersion;
- (id)initWithService:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (_Bool)isResetSync;
- (_Bool)isSending;
- (void)_sendEndSessionResponse:(id)arg1;
- (void)_continueProcessing;
- (_Bool)canRestart;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRollback:(_Bool)arg1;
- (void)_setStateQuietly:(long long)arg1;
- (void)_sessionComplete;
- (void)_processNextState;
- (void)_installStateListener;
- (void)_handleBatchChunk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleEndSync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_notifyErrorAndShutdown;
- (void)_sessionEnded;
- (void)_cancelSession;

@end
