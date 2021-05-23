/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <StorageSettings/STStoragePlugin.h>

@class IMCloudKitHooks, NSArray, NSDate, NSDictionary, NSString, STStorageActionTip, STStorageOptionTip;

@interface CKStoragePlugin : STStoragePlugin

{
    _Bool _cachedAttachmentsTakeUpSignificantSpace;
    STStorageOptionTip *_cachedAutoDeleteMessagesTip;
    unsigned long long _cachedSpaceSavedByAutoDeletingMessages;
    double _lastQuerySpaceSavedByAutoDeletingMessagesTime;
    STStorageActionTip *_cachedReviewLargeConversationsTip;
    unsigned long long _cachedSpaceSavedByReviewingLargeConversations;
    double _lastQuerySpaceSavedByReviewingLargeConversationsTime;
    STStorageActionTip *_cachedReviewLargeAttachmentsTip;
    NSDate *_cachedAttachmentsTakeUpSignificantSpaceDate;
    STStorageOptionTip *_cachedMessagesOniCloudTip;
    unsigned long long _cachedSpaceSavedByDeletingNonSyncedAttachments;
    double _lastQuerySpaceSavedByNonSyncedDeletingAttachments;
    NSArray *_appSpecifiers;
    NSArray *_cloudAppSpecifiers;
    NSDictionary *_spaceTakenByAttachmentClass;
    IMCloudKitHooks *_cloudKitHooks;
}

@property (retain, nonatomic) STStorageOptionTip *cachedAutoDeleteMessagesTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByAutoDeletingMessages;
@property (nonatomic) double lastQuerySpaceSavedByAutoDeletingMessagesTime;
@property (retain, nonatomic) STStorageActionTip *cachedReviewLargeConversationsTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByReviewingLargeConversations;
@property (nonatomic) double lastQuerySpaceSavedByReviewingLargeConversationsTime;
@property (retain, nonatomic) STStorageActionTip *cachedReviewLargeAttachmentsTip;
@property (nonatomic) _Bool cachedAttachmentsTakeUpSignificantSpace;
@property (retain, nonatomic) NSDate *cachedAttachmentsTakeUpSignificantSpaceDate;
@property (retain, nonatomic) STStorageOptionTip *cachedMessagesOniCloudTip;
@property (nonatomic) unsigned long long cachedSpaceSavedByDeletingNonSyncedAttachments;
@property (nonatomic) double lastQuerySpaceSavedByNonSyncedDeletingAttachments;
@property (retain, nonatomic) NSArray *appSpecifiers;
@property (retain, nonatomic) NSArray *cloudAppSpecifiers;
@property (retain, nonatomic) NSDictionary *spaceTakenByAttachmentClass;
@property (retain, nonatomic) IMCloudKitHooks *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_representedApp;

- (id)init;
- (void)dealloc;
- (void)_loadTips;
- (void)_iCloudHooksSetEnabledReturned:(id)arg1;
- (void)_iCloudHooksValuesChanged:(id)arg1;
- (void)_loadAppSpecifiers;
- (void)_loadiCloudAppSpecifiers;
- (_Bool)_cloudKitEnabled;
- (unsigned long long)messageDatabaseSize;
- (long long)_purgeableDiskSpace;
- (void)_enableAutoDeleteMessages;
- (void)_enableMessagesOniCloud;
- (unsigned long long)_spaceSavedByReviewingLargeConversations;
- (id)_spaceTakenForSpecifier:(id)arg1;
- (void)_loadAttachmentSizes;
- (id)_autoDeleteMessagesTip;
- (id)_reviewLargeAttachmentsTip;
- (id)_messagesOniCloudTip;
- (_Bool)_attachmentsTakeUpMoreSpaceThanBytes:(unsigned long long)arg1;
- (_Bool)_forceShowingAutoDeleteMessagesTip;
- (unsigned long long)_spaceSavedByAutoDeleteMessages;
- (_Bool)_shouldDisplayAutoDeleteMessagesTip;
- (unsigned long long)_totalSpaceOfLargeConversations;
- (_Bool)_forceShowingReviewLargeAttachmentsTip;
- (_Bool)_attachmentsTakeUpSignificantSpace;
- (_Bool)_shouldDisplayReviewLargeAttachmentsTip;
- (long long)_totalSpaceOfAttachments;
- (void)_displayICloudErrorMessage;
- (void)_refreshMessageOniCloudTipIfNeeded;
- (void)enableOptionForTip:(id)arg1;
- (id)documentAppIdentifiers;
- (id)documentSpecifiersForApp:(id)arg1;
- (id)cloudDocumentSpecifiers;
- (id)externDataSizeAppIdentifiers;
- (long long)externDataSizeForApp:(id)arg1;
- (unsigned long long)_spaceSavedByDeletingNonSyncedAttachments;

@end
