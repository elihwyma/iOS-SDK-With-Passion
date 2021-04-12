//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class NSObject, SYChangeMessage;
@protocol OS_os_activity;

@interface SYIncomingTransactionSession : SYSession
{
    NSObject<OS_os_activity> *_sessionActivity;
    SYChangeMessage *_message;
    id /* CDUnknownBlockType */ _completion;
    BOOL canRestart;
    BOOL canRollback;
    long long state;
}

- (void)setCanRollback:(BOOL)arg1;
- (BOOL)canRollback;
- (void)setCanRestart:(BOOL)arg1;
- (BOOL)canRestart;
- (void)setState:(long long)arg1;
- (long long)state;
// - (void).cxx_destruct;
- (void)didCompleteSession;
- (void)cancelWithError:(id)arg1;
- (void)start:(id /* CDUnknownBlockType */)arg1;
- (void)_sendChanges;
- (void)_sendCancelled;
- (void)_sendComplete;
- (NSUInteger)protocolVersion;
- (BOOL)wasCancelled;
- (BOOL)isResetSync;
- (BOOL)isSending;
- (id)initWithService:(id)arg1 transaction:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;

@end

