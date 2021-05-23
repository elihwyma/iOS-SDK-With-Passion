/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class BKSApplicationStateMonitor, NSSet, NSString, UNSApplicationLauncher, UNSApplicationService, UNSAttachmentsRepository, UNSAttachmentsService, UNSBundleLibrarian, UNSContentProtectionManager, UNSDaemonLauncher, UNSDefaultDataProviderFactory, UNSLocalizationService, UNSLocationMonitor, UNSNotificationAuthorizationService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationScheduleRepository, UNSNotificationSchedulingService, UNSNotificationSettingsService, UNSNotificationTopicRepository, UNSPendingNotificationRepository, UNSPushRegistrationRepository, UNSRemoteNotificationServer, UNSSettingsGateway, UNSUserNotificationServerConnectionListener, UNSUserNotificationServerRemoteNotificationConnectionListener, UNSUserNotificationServerSettingsConnectionListener;

@protocol OS_dispatch_queue;

@interface UNSUserNotificationServer : NSObject

{
    UNSApplicationLauncher *_applicationLauncher;
    UNSApplicationService *_applicationService;
    UNSAttachmentsRepository *_attachmentsRepository;
    UNSBundleLibrarian *_librarian;
    UNSContentProtectionManager *_contentProtectionManager;
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSLocalizationService *_localizationService;
    UNSUserNotificationServerConnectionListener *_userNotificationServerConnectionListener;
    UNSUserNotificationServerSettingsConnectionListener *_userNotificationServerSettingsConnectionListener;
    UNSUserNotificationServerRemoteNotificationConnectionListener *_userNotificationServerRemoteNotificationConnectionListener;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSNotificationAuthorizationService *_notificationAuthorizationService;
    UNSNotificationSettingsService *_notificationSettingsService;
    UNSNotificationRepository *_notificationRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    UNSPushRegistrationRepository *_pushRegistrationRepository;
    UNSRemoteNotificationServer *_remoteNotificationService;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    UNSLocationMonitor *_locationMonitor;
    UNSDaemonLauncher *_daemonLauncher;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    NSSet *_systemSourceBundleIdentifiers;
    NSString *_libraryDirectory;
    NSString *_directory;
    UNSSettingsGateway *_settingsGateway;
    NSObject<OS_dispatch_queue> *_installedSourceQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;

- (id)init;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_localeDidChange;
- (void)_timeDidChangeSignificantly;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)_registerLoggers;
- (id)_loadAllSystemNotificationSourceDescriptions;
- (void)_migrateUserNotificationsRepositories;
- (void)_migrateNotificationRepository;
- (void)_migratePendingNotificationRequests;
- (void)_migrateNotificationCategories;
- (void)_migratePushRegistrations;
- (void)_migrateNotificationSchedule;
- (void)_migrateAttachments;
- (void)_removePushStore;
- (void)_validateNotificationRepository;
- (void)_addObserverForApplicationStateMonitor;
- (void)_addObserverForApplicationStateRestore;
- (void)_addObserverForApplicationWorkspaceChanges;
- (void)_addObserverForBackgroundRefreshApplicationChanges;
- (void)_addObserverForContentProtectionChanges;
- (void)_addObserverForDataProviderFactoryChanges;
- (void)_addObserverForLocaleChanges;
- (void)_addObserverForRemoteNotificationServiceChanges;
- (void)_addObserverForSignificantTimeChanges;
- (void)initialSystemNotificationSourcesDidInstall:(id)arg1;
- (void)initialApplicationsDidInstall:(id)arg1;
- (void)_ensureAttachmentsIntegrity;
- (void)_installedSourceQueue_notificationSourcesDidInstall:(id)arg1;
- (void)_applicationsDidInstall:(id)arg1;
- (void)_installedSourceQueue_notificationSourcesDidUninstall:(id)arg1;
- (_Bool)isApplicationForeground:(id)arg1;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;
- (void)_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_removeNotificationSourceDirectories:(id)arg1;
- (void)_removeBundleLibrarianMappingsForSourceDescriptions:(id)arg1;
- (void)_applicationStateDidRestore;
- (void)_backgroundRefreshApplicationsDidChange;
- (void)_triggerLocationArrowForBundleIdentifier:(id)arg1;

@end
