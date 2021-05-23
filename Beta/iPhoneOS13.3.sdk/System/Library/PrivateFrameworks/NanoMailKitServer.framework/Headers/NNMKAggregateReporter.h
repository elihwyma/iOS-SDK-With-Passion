/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@interface NNMKAggregateReporter : NSObject

+ (id)_buildVersion;
+ (_Bool)_reportingEnabled;
+ (long long)_delayInMSFromDateSynced:(id)arg1;
+ (void)_postRawValue:(long long)arg1 key:(id)arg2;
+ (void)_postGroupedDelayInMS:(long long)arg1 key:(id)arg2;
+ (void)_postGroupedSizeInBytes:(long long)arg1 key:(id)arg2;
+ (void)_addScalarValue1ToKey:(id)arg1;
+ (void)_postGroupedValue:(float)arg1 key:(id)arg2;
+ (void)reportAttachmentDownloadDuration:(double)arg1;
+ (void)reportContentDownloadDuration:(double)arg1;
+ (void)reportMessageDeliveryDuration:(double)arg1;
+ (void)reportSyncAccountsStandaloneActiveCount:(unsigned long long)arg1;
+ (void)reportSyncAccountsStandalonePendingCount:(unsigned long long)arg1;
+ (void)reportSyncAccountsStandaloneNotSupportCount:(unsigned long long)arg1;
+ (void)reportCredentialsExpired;
+ (void)reportStandaloneFetchFailed;
+ (void)reportStandaloneMessageDeliveryFailed;
+ (void)reportStandaloneContentDownloadFailed;
+ (void)reportStandaloneAttachmentDownloadFailed;
+ (void)reportFetchManualStandalone;
+ (void)reportFetchManualInRange;
+ (void)reportFetchManualCloud;
+ (void)reportFetchResumeStandalone;
+ (void)reportFetchResumeInRange;
+ (void)reportFetchResumeCloud;
+ (void)reportHtmlContentRenderingTime:(double)arg1;
+ (void)reportTextContentRenderingTime:(double)arg1;
+ (void)reportWebKitRenderingProcessCrash;
+ (void)reportWebKitZoomInteraction;
+ (void)reportWebKitLinkTapped;
+ (void)reportDisplayingHtmlMessage;
+ (void)reportDisplayingTextMessage;
+ (void)reportMessageReceivedWithId:(id)arg1 willGenerateNotification:(_Bool)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4;
+ (void)reportMessageUpdateReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportMessageDeletionReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportOriginalMessageContentSizeInBytes:(unsigned long long)arg1;
+ (void)reportContentReceivedForMessageWithId:(id)arg1 sizeInBytes:(unsigned long long)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4;
+ (void)reportImageAttachmentReceivedForMessageWithId:(id)arg1 contentId:(id)arg2 sizeInBytes:(unsigned long long)arg3 fullSyncVersion:(unsigned long long)arg4 dateSynced:(id)arg5;
+ (void)reportAppLaunched;
+ (void)reportAppResumed;
+ (void)reportAppBackgroundRefreshed;
+ (void)reportNotificationReceivedOverCloudMessaging;
+ (void)reportNewMessageCountFetchedOverCloudMessaging:(unsigned long long)arg1;
+ (void)reportMessageDeletionCountFetchedOverCloudMessaging:(unsigned long long)arg1;
+ (void)reportMessageUpdateCountFetchedOverCloudMessaging:(unsigned long long)arg1;
+ (void)reportContentDisplayedForMessageWithId:(id)arg1 hasMainAlternative:(_Bool)arg2 hasTextAlternative:(_Bool)arg3;
+ (void)reportMailboxSelectionChanged:(id)arg1 fromWatch:(_Bool)arg2;
+ (void)reportMoreMessagesReceivedConversationSpecific:(_Bool)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportRenderedNotificationUsingLocalContent:(_Bool)arg1 mailboxSynced:(_Bool)arg2 messageSynced:(_Bool)arg3 contentDownloaded:(_Bool)arg4;
+ (void)reportFullSyncRequestedFromWatch:(_Bool)arg1 corruptionDetected:(_Bool)arg2 migrationRelated:(_Bool)arg3 idsFailureRelated:(_Bool)arg4 fullSyncVersionMatchRelated:(_Bool)arg5;
+ (void)reportHaltSyncRequestedFromWatch:(_Bool)arg1;
+ (void)reportMailLinkHandoffAdvertisedByNotification:(_Bool)arg1;
+ (void)reportMailLinkHandoffContinuedByNotification:(_Bool)arg1;
+ (void)reportMailAttachmentHandoffAdvertisedByNotification:(_Bool)arg1;
+ (void)reportMailAttachmentHandoffContinuedByNotification:(_Bool)arg1;
+ (void)reportFetchOlderMessages;
+ (void)reportFetchForBatchResponseLatency:(double)arg1;
+ (void)reportFetchForBatchedResponse:(_Bool)arg1;
+ (void)reportComposedMessageSizeInBytes:(unsigned long long)arg1;
+ (void)reportNewMessageComposedFromApp:(_Bool)arg1 mailto:(_Bool)arg2;
+ (void)reportMessageRepliedFromApp:(_Bool)arg1;
+ (void)reportComposedMessageSendFailure;
+ (void)reportNotificationAction:(unsigned long long)arg1;
+ (void)reportCellRighSwipeActionChanged:(id)arg1;
+ (void)reportCellSwipeActionTypeExecuted:(id)arg1;
+ (void)reportCellRighSwipeActionIgnored;

@end
