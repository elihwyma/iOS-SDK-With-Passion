/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDS/IDSTransactionLogTaskHandler.h>

@class IDSTransactionLogSyncTask, NSObject;

@protocol IDSTransactionLogTaskHandlerDelegate, OS_dispatch_queue;

@interface IDSTransactionLogSyncTaskHandler : IDSTransactionLogTaskHandler

{
    IDSTransactionLogSyncTask *_syncTask;
    NSObject<OS_dispatch_queue> *_queue;
    id <IDSTransactionLogTaskHandlerDelegate> _delegate;
}

@property (retain, nonatomic) IDSTransactionLogSyncTask *syncTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <IDSTransactionLogTaskHandlerDelegate> delegate;

- (void)perform;
- (void)_completeWithError:(id)arg1;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)qPerformWithToken:(id)arg1;
- (void)qIngestMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transactionMessagesFromTransportMessages:(id)arg1 withParticipants:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)qFetchParticipantsFromDeviceMessges:(id)arg1 andGroupsFromGroupMessages:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_destinationsInMessages:(id)arg1;
- (id)_groupIDsFromMessages:(id)arg1;
- (id)_groupsByGroupIDFromGroups:(id)arg1;
- (id)_participantsByAliasFromParticipants:(id)arg1;
- (id)_transactionMessageFromTransportMessage:(id)arg1 groups:(id)arg2 participants:(id)arg3 accountInfo:(id)arg4;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withGroupID:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withParticipants:(id)arg2 accountInfo:(id)arg3;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withDecryptedPayload:(id)arg2 accountInfo:(id)arg3;

@end
