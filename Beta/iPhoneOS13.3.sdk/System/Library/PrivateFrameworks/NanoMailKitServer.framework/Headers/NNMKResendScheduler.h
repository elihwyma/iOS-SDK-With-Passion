/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NNMKSyncController;

@protocol NNMKResendSchedulerDelegate;

@interface NNMKResendScheduler : NSObject

{
    unsigned long long _initialSyncResendInterval;
    id <NNMKResendSchedulerDelegate> _delegate;
    NNMKSyncController *_syncController;
}

@property (nonatomic) unsigned long long initialSyncResendInterval;
@property (weak, nonatomic) id <NNMKResendSchedulerDelegate> delegate;
@property (retain, nonatomic) NNMKSyncController *syncController;

- (void)resendObjectsForIDSIdentifier:(id)arg1;
- (void)deletePendingIDSMessagesForMailboxId:(id)arg1;
- (id)deviceRegistry;
- (void)_resendObjectIds:(id)arg1 type:(id)arg2 resendInterval:(unsigned long long)arg3 idsIdentifier:(id)arg4;
- (void)_scheduleIdsIdentifierForResend:(id)arg1 currentResendInterval:(unsigned long long)arg2 newResendInterval:(unsigned long long)arg3 errorCode:(long long)arg4;
- (void)_executePendingResendsAndContentRequests;
- (void)_failPendingComposedMessages;
- (void)_resendInitialSyncWithIDSIdentifier:(id)arg1 newResendInterval:(unsigned long long)arg2 mailboxIds:(id)arg3;
- (void)_resendPendingMessagesWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3;
- (void)_resendPendingMessageContentWithId:(id)arg1 sentBecauseUserRequested:(_Bool)arg2 idsIdentifier:(id)arg3 newResendInterval:(unsigned long long)arg4;
- (void)_resendPendingAccountWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3;
- (void)_resendSendingProgressForComposedMessageWithId:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3;
- (void)registerIDSIdentifier:(id)arg1 objectIds:(id)arg2 type:(id)arg3 resendInterval:(unsigned long long)arg4;
- (void)handleIDSMessageFailedWithId:(id)arg1 errorCode:(long long)arg2;
- (void)handleIDSMessageSentSuccessfullyWithId:(id)arg1;
- (void)forceRetryingAllPendingIDSMessages;
- (id)messageTypeForIDSIdentifier:(id)arg1;
- (id)objectIdsForPendingIDSIdentifier:(id)arg1;
- (void)resetInitialSyncResendInterval;

@end
