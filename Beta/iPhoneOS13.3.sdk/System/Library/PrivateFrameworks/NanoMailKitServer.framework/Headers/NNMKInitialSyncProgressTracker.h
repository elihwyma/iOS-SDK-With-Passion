/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol NNMKInitialSyncProgressTrackerDelegate, NNMKSyncStateManager, OS_dispatch_queue;

@interface NNMKInitialSyncProgressTracker : NSObject

{
    _Bool _trackingInitialSync;
    _Bool _isWaitingForAccounts;
    _Bool _isWaitingForMessageHeaders;
    _Bool _isWaitingForMessageContent;
    _Bool _timeoutCanceledForAccounts;
    _Bool _timeoutCanceledForMessageHeaders;
    _Bool _timeoutCanceledForMessageContent;
    id <NNMKInitialSyncProgressTrackerDelegate> _delegate;
    id <NNMKSyncStateManager> _syncStateManager;
    NSObject<OS_dispatch_queue> *_executionQueue;
    double _initialSyncProgress;
    unsigned long long _initialSyncMessagesCount;
    NSMutableSet *_initialSyncMessageIdsToSyncContent;
    NSMutableSet *_initialSyncMessageIdsOfContentToAck;
}

@property (nonatomic) _Bool trackingInitialSync;
@property (nonatomic) double initialSyncProgress;
@property (nonatomic) unsigned long long initialSyncMessagesCount;
@property (retain, nonatomic) NSMutableSet *initialSyncMessageIdsToSyncContent;
@property (retain, nonatomic) NSMutableSet *initialSyncMessageIdsOfContentToAck;
@property (nonatomic) _Bool isWaitingForAccounts;
@property (nonatomic) _Bool isWaitingForMessageHeaders;
@property (nonatomic) _Bool isWaitingForMessageContent;
@property (nonatomic) _Bool timeoutCanceledForAccounts;
@property (nonatomic) _Bool timeoutCanceledForMessageHeaders;
@property (nonatomic) _Bool timeoutCanceledForMessageContent;
@property (weak, nonatomic) id <NNMKInitialSyncProgressTrackerDelegate> delegate;
@property (retain, nonatomic) id <NNMKSyncStateManager> syncStateManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (nonatomic, readonly) _Bool isTrackingInitialSync;

+ (double)syncTimeout;

- (void)cancelTimeout;
- (void)startSyncTimeoutForAccounts;
- (void)incrementProgressBy:(double)arg1;
- (void)startSyncTimeoutForMessageHeaders;
- (void)finishedSendingInitialSyncContentToPairedDevice;
- (void)startSyncTimeoutForMessageContent;
- (void)updateProgressWithContentCompletelySyncedForMessageId:(id)arg1;
- (void)_handleInitialSyncCompleted;
- (void)initialSyncTimedOut;
- (void)resetFlags;
- (void)startTrackingInitialSync;
- (void)updateProgressWithAccountsSent;
- (void)updateProgressWithAccountsArrivedInPairedDevice;
- (void)updateProgressWithMessageHeadersSent:(id)arg1;
- (void)updateProgressWithMessageHeadersArrivedInPairedDevice;
- (void)updateProgressWithMessageContentArrivedInPairedDevice:(id)arg1;
- (void)updateProgressWithMessageContentDownloadFailed:(id)arg1;
- (void)syncCompleted;
- (void)syncFailedWithError:(id)arg1;

@end
