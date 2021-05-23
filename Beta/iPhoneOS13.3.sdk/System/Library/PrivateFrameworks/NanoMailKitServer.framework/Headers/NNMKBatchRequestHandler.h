/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NNMKResendScheduler, NNMKSyncController, NSDate, NSMutableDictionary;

@protocol NNMKBatchRequestHandlerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NNMKBatchRequestHandler : NSObject

{
    id <NNMKBatchRequestHandlerDelegate> _delegate;
    NNMKResendScheduler *_resendScheduler;
    NNMKSyncController *_syncController;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_source> *_fetchTimeoutTimer;
    NSMutableDictionary *_batchedRequestByMailboxId;
    unsigned long long _retryCountForRequestingMissingHeadersInBatchedResponse;
    NSDate *_lastRetryDate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchTimeoutTimer;
@property (retain, nonatomic) NSMutableDictionary *batchedRequestByMailboxId;
@property (nonatomic) unsigned long long retryCountForRequestingMissingHeadersInBatchedResponse;
@property (retain, nonatomic) NSDate *lastRetryDate;
@property (weak, nonatomic) id <NNMKBatchRequestHandlerDelegate> delegate;
@property (retain, nonatomic) NNMKResendScheduler *resendScheduler;
@property (retain, nonatomic) NNMKSyncController *syncController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;

- (id)init;
- (void)reset;
- (void)_rescheduleFetchTimeout;
- (void)cancelFetchTimeout;
- (id)_checkBatchFetchedMessagesWithMailbox:(id)arg1 messageHeadersToFetch:(id *)arg2 attemptsFailed:(_Bool *)arg3;
- (id)firstMessageIds:(unsigned long long)arg1 fromBatchedFetchResults:(id)arg2;
- (id)_batchedFetchResultForBatchedRequest:(id)arg1 mailbox:(id)arg2 diff:(id)arg3 localSyncedMessagesByMessageId:(id)arg4;
- (void)handleBatchRequest:(id)arg1;
- (void)handleMessageAdded:(id)arg1;
- (void)handleMessageDeleted:(id)arg1 mailboxId:(id)arg2;
- (void)startFetchTimeout;
- (id)checkBatchFetchedMessages;

@end
