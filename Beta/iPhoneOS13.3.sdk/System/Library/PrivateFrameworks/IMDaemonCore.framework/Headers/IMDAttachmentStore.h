/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@interface IMDAttachmentStore : NSObject

- (void)markAllAttachmentsAsNotPurgeable;
- (_Bool)updateLegacyTransferGUIDIfNeeded:(id)arg1;
- (id)attachmentWithGUID:(id)arg1;
- (void)markAllAttachmentsAsNeedingCloudKitSync;
- (_Bool)updateAttachment:(id)arg1;
- (_Bool)isSafeToDeleteAttachmentAtPath:(id)arg1;
- (_Bool)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2;
- (_Bool)updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1;
- (void)markAttachmentPurgeable:(id)arg1;
- (id)fileTransferWithAttachmentRecordRef:(struct _IMDAttachmentRecordStruct *)arg1;
- (_Bool)_fileEligibleForCacheDelete:(id)arg1;
- (_Bool)_cloudkitSyncingEnabled;
- (void)markFileAsPurgeable:(id)arg1;
- (id)getAuxVideoPath:(id)arg1;
- (_Bool)_updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 andUpdateTransfer:(id)arg2;
- (_Bool)_shouldEarlyReturnForWrongItemType:(id)arg1;
- (id)_updatedMessageBody:(id)arg1 replacingGuid:(id)arg2 withGuid:(id)arg3;
- (_Bool)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2;
- (_Bool)deleteAttachmentsWithGUIDs:(id)arg1;
- (_Bool)deleteAttachmentDataForTransfer:(id)arg1;
- (_Bool)deleteAttachmentWithGUID:(id)arg1;

@end
