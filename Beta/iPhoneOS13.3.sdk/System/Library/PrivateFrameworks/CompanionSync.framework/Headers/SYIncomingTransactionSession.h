/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYSession.h>

@class NSObject, SYChangeMessage;

@protocol OS_os_activity;

@interface SYIncomingTransactionSession : SYSession

{
    NSObject<OS_os_activity> *_sessionActivity;
    SYChangeMessage *_message;
    CDUnknownBlockType _completion;
    _Bool canRestart;
    _Bool canRollback;
    long long state;
}

- (long long)state;
- (void)setState:(long long)arg1;
- (void)cancelWithError:(id)arg1;
- (_Bool)wasCancelled;
- (unsigned long long)protocolVersion;
- (void)start:(CDUnknownBlockType)arg1;
- (_Bool)isResetSync;
- (_Bool)isSending;
- (_Bool)canRestart;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRollback:(_Bool)arg1;
- (void)didCompleteSession;
- (void)_sendComplete;
- (void)_sendChanges;
- (void)_sendCancelled;
- (id)initWithService:(id)arg1 transaction:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
