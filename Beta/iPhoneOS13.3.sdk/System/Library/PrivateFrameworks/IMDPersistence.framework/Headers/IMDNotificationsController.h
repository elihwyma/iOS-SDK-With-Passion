/*
 Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

#import <Foundation/NSObject.h>

@class CNContact, IMBusinessNameManager, NSArray, UNNotificationCategory, UNUserNotificationCenter;

@interface IMDNotificationsController : NSObject

{
    long long _lastAlertedMessageDate;
    long long _lastAlertedFailedMessageDate;
    UNUserNotificationCenter *_notificationCenter;
    UNNotificationCategory *_incomingMessageNotificationCategory;
    UNNotificationCategory *_incomingFilesNotificationCategory;
    IMBusinessNameManager *_businessNameManager;
    CNContact *_meContact;
    NSArray *_meTokens;
    id _suggestionsService;
}

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) UNNotificationCategory *incomingMessageNotificationCategory;
@property (retain, nonatomic) UNNotificationCategory *incomingFilesNotificationCategory;
@property (retain, nonatomic) IMBusinessNameManager *businessNameManager;
@property (retain, nonatomic) CNContact *meContact;
@property (retain, nonatomic) NSArray *meTokens;
@property long long lastAlertedMessageDate;
@property long long lastAlertedFailedMessageDate;
@property (retain, nonatomic) id suggestionsService;

+ (id)sharedInstance;
+ (id)_truncateNameIfNeeded:(id)arg1;
+ (id)_contactKeysForMe;
+ (id)_addressForHandle:(struct _IMDHandleRecordStruct *)arg1;
+ (int)validateAlertCount:(int)arg1;
+ (int)reminderAlertCount;
+ (id)_IMDCoreSpotlightCNContactForAddress:(id)arg1;
+ (id)_uncanonicalizedAddressForHandle:(struct _IMDHandleRecordStruct *)arg1;
+ (id)_addressBookNameForAddress:(id)arg1 orContact:(id)arg2;
+ (id)_countryCodeForHandle:(struct _IMDHandleRecordStruct *)arg1;
+ (id)_formattedDisplayStringForAddress:(id)arg1 countryCode:(id)arg2;
+ (id)_displayNameForHandle:(struct _IMDHandleRecordStruct *)arg1 andContact:(id)arg2 suggestionProvider:(CDUnknownBlockType)arg3;
+ (id)_displayNameForBusinessChatAddress:(id)arg1 businessNameManager:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)_setupFirstLoad;
- (void)_setUpNotificationCenter;
- (void)_setupBusinessNameManager;
- (void)_setupMeContactAndTokens;
- (id)_makeNotificationCategories;
- (_Bool)_hasMigratedPreferences;
- (id)_legacyDatePreference;
- (long long)_legacyRowIDPreference;
- (long long)_legacyDateForMessageWithRowIDPreference:(long long)arg1;
- (void)_setLastPostedDateFromMigration:(id)arg1;
- (void)_setHasMigratedPreferenceTrue;
- (void)_migrateLastedPostedPreferencesIfNeeded;
- (void)_storeLastAlertedMessageDate:(long long)arg1;
- (void)_storeLastAlertedFailedMessageDate:(long long)arg1;
- (id)_messages:(id)arg1 newerThanDate:(long long)arg2;
- (id)_messagesSortedByDate:(id)arg1;
- (id)_generateNotificationRequestForMessageRecord:(struct _IMDMessageRecordStruct *)arg1 isUrgentMessage:(_Bool)arg2 isCarouselUITriggered:(_Bool)arg3 isMostActive:(_Bool)arg4 shouldAdvanceLastAlertedMessageDate:(_Bool *)arg5;
- (_Bool)_shouldPostNotificationRequest:(id)arg1;
- (void)advanceLastAlertedMessageDate:(long long)arg1;
- (id)_generateNotificationRequestForDeliveryError:(struct _IMDMessageRecordStruct *)arg1 isCarouselUITriggered:(_Bool)arg2;
- (void)advanceLastAlertedFailedMessageDate:(long long)arg1;
- (void)_registerUserNotificationsForFailedDeliveryMessageRecords:(id)arg1 isCarouselUITriggered:(_Bool)arg2;
- (void)_registerUserNotificationsForMessageRecords:(id)arg1 newerThanDate:(long long)arg2 areUrgentMessages:(_Bool)arg3 isCarouselUITriggered:(_Bool)arg4 isMostActiveDevice:(_Bool)arg5;
- (void)_postNotifications;
- (void)__postNotificationsIsMostActiveDevice:(_Bool)arg1;
- (void)_isMostActiveDeviceWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)postNotifications;
- (id)defaultsSharedInstance;
- (_Bool)_isRaiseGestureEnabled;
- (void)_populateBodyForNotificationContent:(id)arg1 messageDictionary:(id)arg2;
- (id)_displayNameForHandle:(struct _IMDHandleRecordStruct *)arg1 andContact:(id)arg2;
- (id)_displayNameForBusinessChatAddress:(id)arg1;
- (id)_previewFileURLForTransferURL:(id)arg1 utiType:(id)arg2;
- (_Bool)_chatHasDNDSet:(id)arg1;
- (_Bool)_handleIsSpokenMessageWhitelisted:(struct _IMDHandleRecordStruct *)arg1 chat:(id)arg2 message:(id)arg3;
- (void)_proceedMostActiveDevice:(_Bool)arg1 isBlockCalled:(_Bool *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_shouldUseOriginalURLForUTIType:(id)arg1;
- (unsigned long long)_getMessagesSpokenWhitelistLevel:(_Bool *)arg1;
- (_Bool)_messageIsFromKnownContact:(id)arg1;
- (_Bool)_messageIsFromFavorite:(id)arg1;
- (id)_lastTwoMessagesForChat:(struct _IMDChatRecordStruct **)arg1;
- (id)_suggestedDisplayNameForAddress:(id)arg1;
- (id)_nicknameDisplayNameForID:(id)arg1;
- (id)_nicknameInfoForAddress:(id)arg1;
- (void)_setUpSuggestionService;
- (_Bool)_filteringSettingConfirmed;
- (_Bool)_deviceIsElgibileToBeForcedIntoFilteringUnknownSenders;
- (_Bool)_isUnknownSenderFilteringOn;
- (_Bool)_isSpamFilteringOn;
- (_Bool)_notificationIsFromAFilteredSender:(id)arg1 messageDictionary:(id)arg2;
- (_Bool)_overrideDNDForMessagesAddressingMe;
- (_Bool)_amIMentionedInMessage:(id)arg1;
- (_Bool)_haveMigrated;
- (id)_messageDictionaryForMessageRecord:(struct _IMDMessageRecordStruct *)arg1;
- (id)_chatDictionaryForMessageRecord:(struct _IMDMessageRecordStruct *)arg1;
- (_Bool)_messageShouldBeSilentlyDeliveredForBusinessChat:(id)arg1;
- (unsigned long long)screenTimeNotificationOptionsForChatDictionary:(id)arg1;
- (_Bool)_shouldOverrideChatSilencingBecauseImMentioned:(id)arg1;
- (_Bool)_messageShouldBeSpoken:(id)arg1 chatDictionary:(id)arg2 isMostActive:(_Bool)arg3;
- (_Bool)_shouldPostNotificationForChat:(id)arg1 messageDictionary:(id)arg2;
- (void)_populateBasicNotificationIdentifyingContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 isCarouselUITriggered:(_Bool)arg4;
- (void)_populateBodyForNotificationContent:(id)arg1 messageDictionary:(id)arg2 onlyPopulateWasMentionedString:(_Bool)arg3;
- (void)_populateTitleForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3;
- (void)_populateSubtitleForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3;
- (void)_populateSoundAndDisplayActivationForNotificationContent:(id)arg1 chatDictionary:(id)arg2 messageDictionary:(id)arg3 isMostActive:(_Bool)arg4;
- (void)_populateIgnoresDoNotDisturb:(id)arg1 messageDictionary:(id)arg2 isUrgentMessage:(_Bool)arg3;
- (void)_populateAttachmentsForNotificationContent:(id)arg1 messageDictionary:(id)arg2 messageRecord:(struct _IMDMessageRecordStruct *)arg3;
- (void)_populateUserInfoOnContentForWatch:(id)arg1 messageDictionary:(id)arg2 chatDictionary:(id)arg3 isCarouselUITriggered:(_Bool)arg4;
- (void)_populateNotificationCategoryContent:(id)arg1 messageDictionary:(id)arg2;
- (void)_populateUserInfoForMessageContent:(id)arg1 messageDictionary:(id)arg2 messageIsAddressedToMe:(_Bool)arg3;
- (void)_populateRealertCountForNotificationContent:(id)arg1;
- (void)_populateBodyAndTitleForSendReceivedAsJunkNotificationContent:(id)arg1 messageDictionary:(id)arg2;
- (void)_populateBodyAndTitleForSendFailedNotificationContent:(id)arg1 messageDictionary:(id)arg2;
- (void)_setContactInMessageDictionary:(struct _IMDHandleRecordStruct *)arg1 messageDictionary:(id)arg2;
- (_Bool)_chatHasDNDSetBasedOnDNDIdentifier:(id)arg1;
- (id)_groupHashForHandles:(id)arg1 lastAddressedHandle:(id)arg2;
- (id)_lastMessageTimeForChat:(struct _IMDChatRecordStruct **)arg1;
- (void)retractNotificationsForReadMessages:(id)arg1;
- (void)repostNotificationsFromFirstUnlock;
- (void)postUrgentNotificationForMessages:(id)arg1;
- (void)postFirstUnlockMessage:(id)arg1 forIdentifier:(id)arg2;
- (id)_previewFileURLForTransferURL:(id)arg1;
- (unsigned long long)_getSpokenMessageWhitelistLevelVersion;
- (void)_setSpokenMessageWhitelistLevelVersion:(unsigned long long)arg1;
- (void)_setMessagesSpokenWhitelistLevelInPreferences:(unsigned long long)arg1;

@end
