/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IMDAccountController, IMDCKSyncController, IMDReplayController, NSString;

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject

{
    IMDCKSyncController *_ckSyncController;
    IMDAccountController *_accountController;
    IMDReplayController *_replayController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_initWithCKSyncController:(id)arg1 accountController:(id)arg2 replayController:(id)arg3;
- (id)_newFirstUnlockReplaySyncTask;
- (id)_newIDSTransactionLogSyncTask;
- (id)_newKChatSyncTask;
- (id)newSyncTaskForType:(unsigned long long)arg1;

@end
