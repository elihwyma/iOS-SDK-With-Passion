/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class BBDataProviderProxy, BBSectionIcon, BBSectionInfo, BSCFBundle, NSMutableDictionary, NSString, UNSApplicationLauncher, UNSAttachmentsService, UNSDaemonLauncher, UNSLocalizationService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationSourceDescription, UNSNotificationTopicRepository;

@protocol OS_dispatch_queue;

@interface UNSDefaultDataProvider : NSObject

{
    BBSectionIcon *_sectionIcon;
    BSCFBundle *_bundle;
    _Bool _suppressUserAuthorizationPrompt;
    UNSNotificationSourceDescription *_notificationSourceDescription;
    UNSApplicationLauncher *_appLauncher;
    UNSDaemonLauncher *_daemonLauncher;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    UNSLocalizationService *_localizationService;
    BBDataProviderProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_primaryAttachments;
    NSMutableDictionary *_primaryAttachmentMetadata;
    NSMutableDictionary *_categoryToParamSubType;
    BBSectionInfo *_sectionInfo;
}

@property (retain, nonatomic) BBDataProviderProxy *proxy;
@property (retain, nonatomic) BBSectionInfo *sectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)sortDescriptors;
- (id)sectionIdentifier;
- (id)sectionDisplayName;
- (void)dataProviderDidLoad;
- (void)noteSectionInfoDidChange:(id)arg1;
- (_Bool)syncsBulletinDismissal;
- (id)sectionParameters;
- (id)universalSectionIdentifier;
- (id)defaultSectionInfo;
- (id)sectionIcon;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)primaryAttachmentDataForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)defaultSubsectionInfos;
- (id)displayNameForSubsectionID:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)notificationRecords;
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)notificationRepository:(id)arg1 didDiscoverContentOnFirstUnlockForBundleIdentifier:(id)arg2;
- (void)setNotificationSourceDescription:(id)arg1;
- (id)_sectionIconForNotificationSourceDescription:(id)arg1;
- (id)_allCategories;
- (id)_localizeClientString:(id)arg1 inBundle:(id)arg2;
- (id)_topicForIdentifier:(id)arg1;
- (id)_defaultActionWithNotification:(id)arg1;
- (id)_categoryForIdentifier:(id)arg1;
- (id)_dismissActionForCategory:(id)arg1;
- (id)_silenceActionForCategory:(id)arg1;
- (id)_supplementaryActionsForForCategoryRecord:(id)arg1;
- (_Bool)_queue_supportsCriticalAlertsForSubsectionIDs:(id)arg1;
- (id)_pathForSoundName:(id)arg1;
- (void)_addAttachments:(id)arg1 toBulletinRequest:(id)arg2;
- (id)_queue_applicableSectionInfosForSubsectionIDs:(id)arg1;
- (id)_soundsDirectoryPathForContainerBasePath:(id)arg1;
- (_Bool)_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2;
- (id)_actionsFromActionRecords:(id)arg1;
- (id)_actionFromActionRecord:(id)arg1;
- (id)_queue_bulletinForNotification:(id)arg1;
- (id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2;
- (void)_handleBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_unarchiveNotificationFromData:(id)arg1;
- (void)_queue_notificationRepositoryDidPerformUpdates:(id)arg1;
- (void)_queue_modifyBulletinForNotification:(id)arg1;
- (void)_queue_addBulletinForNotification:(id)arg1;
- (void)_queue_withdrawBulletinForNotification:(id)arg1;
- (id)_sectionIconVariantForImageName:(id)arg1 bundlePath:(id)arg2 format:(long long)arg3 precomposed:(_Bool)arg4;
- (void)categoryRepository:(id)arg1 didChangeCategoriesForBundleIdentifier:(id)arg2;
- (void)topicRepository:(id)arg1 didChangeTopicsForBundleIdentifier:(id)arg2;
- (id)initWithNotificationSourceDescription:(id)arg1 applicationLauncher:(id)arg2 daemonLauncher:(id)arg3 categoryRepository:(id)arg4 notificationRepository:(id)arg5 topicRepository:(id)arg6 attachmentsService:(id)arg7 localizationService:(id)arg8 queue:(id)arg9;
- (void)uninstall;
- (id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2;

@end
