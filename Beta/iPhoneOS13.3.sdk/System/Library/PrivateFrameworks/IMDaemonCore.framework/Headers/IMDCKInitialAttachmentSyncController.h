/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <IMDaemonCore/IMDCKAttachmentSyncController.h>

@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController

{
    CKServerChangeToken *_syncToken;
}

@property (retain, nonatomic) CKServerChangeToken *syncToken;

- (void)dealloc;
- (id)ckUtilities;
- (_Bool)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(_Bool)arg1;
- (_Bool)_deviceConditionsAllowsMessageSync;
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (_Bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLatestSyncToken:(id)arg1;
- (id)latestSyncToken;

@end
