/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class CKServerChangeToken;

@interface IMDCKInitialMessageSyncController

{
    CKServerChangeToken *_syncToken;
}

@property (retain, nonatomic) CKServerChangeToken *syncToken;

- (void)dealloc;
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (_Bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;
- (void)setLatestSyncToken:(id)arg1;
- (id)latestSyncToken;
- (void)syncMessagesWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
