/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <IMDaemonCore/IMDMessageHistoryIDSTransactionLogSyncTask.h>

@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask

{
    IMDReplayController *_replayController;
}

- (void)dealloc;
- (id)initWithReplayController:(id)arg1 accountController:(id)arg2;
- (void)_setupAndBeginSync;
- (unsigned long long)syncTaskType;

@end
