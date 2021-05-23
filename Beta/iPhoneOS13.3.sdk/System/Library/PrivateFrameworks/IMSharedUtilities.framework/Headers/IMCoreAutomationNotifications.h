/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMCoreAutomationNotifications : NSObject

{
    long long _chatsWrittenCount;
    long long _messagesWrittenCount;
    long long _attachmentsWrittenCount;
}

@property (readonly) long long chatsWrittenCount;
@property (readonly) long long messagesWrittenCount;
@property (readonly) long long attachmentsWrittenCount;

+ (id)sharedInstance;

- (id)init;
- (void)clearSyncCounts;
- (void)postCoreAutomationNotificationWithDictionary:(id)arg1 withVerboseLogging:(_Bool)arg2;
- (void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg1 chatsDidsync:(_Bool)arg2 messagesDidSync:(_Bool)arg3 attachmentsDidSync:(_Bool)arg4;
- (void)postCoreAutomationNotificationWithAction:(id)arg1;
- (void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg1 withErrorString:(id)arg2;
- (void)postCoreAutomationNotificationFinishedTapToDownload:(id)arg1 downloadedFromCloudKitSuccessfully:(_Bool)arg2;
- (void)addNewChatsSyncedCount:(long long)arg1;
- (void)addNewAttachmentsSyncedCount:(long long)arg1;
- (void)addNewMessagesSyncedCount:(long long)arg1;

@end
