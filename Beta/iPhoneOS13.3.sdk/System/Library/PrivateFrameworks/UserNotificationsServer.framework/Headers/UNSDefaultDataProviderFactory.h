/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class BBDataProviderConnection, BBObserver, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UNSApplicationLauncher, UNSAttachmentsService, UNSDaemonLauncher, UNSLocalizationService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationTopicRepository, UNSSettingsGateway;

@protocol OS_dispatch_queue;

@interface UNSDefaultDataProviderFactory : NSObject

{
    NSMutableDictionary *_bundleIdentifierToDataProvider;
    NSMutableSet *_authorizedBundleIdentifiers;
    NSMutableSet *_supportedBundleIdentifiers;
    NSMutableArray *_observers;
    UNSApplicationLauncher *_appLauncher;
    UNSDaemonLauncher *_daemonLauncher;
    UNSLocalizationService *_localizationService;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSAttachmentsService *_attachmentsService;
    BBDataProviderConnection *_dataProviderConnection;
    BBObserver *_settingsObserver;
    UNSSettingsGateway *_settingsGateway;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (id)authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (void)updateAuthorizationWithOptions:(unsigned long long)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestAuthorizationStatus:(long long)arg1 withOptions:(unsigned long long)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setCriticalAlertAuthorization:(_Bool)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (id)initWithApplicationLauncher:(id)arg1 daemonLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 topicRepository:(id)arg6 localizationService:(id)arg7 settingsGateway:(id)arg8;
- (void)_queue_addObserver:(id)arg1;
- (void)_queue_removeObserver:(id)arg1;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;
- (id)_queue_notificationSettingsForBundleIdentifier:(id)arg1;
- (id)_queue_notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (void)_queue_updateSettingsWithAuthorizationStatus:(long long)arg1 options:(unsigned long long)arg2 forNotificationSourceDescription:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_queue_setCriticalAlertAuthorization:(_Bool)arg1 forNotificationSourceDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_queue_authorizedBundleIdentifiersForBundleIdentifiers:(id)arg1;
- (void)_queue_applicationDidEnableNotificationSettings:(id)arg1;
- (void)_queue_applicationDidDisableNotificationSettings:(id)arg1;
- (id)_queue_effectiveSectionInfoForBundleIdentifier:(id)arg1;
- (id)_queue_sectionInfoForBundleIdentifier:(id)arg1;
- (void)_queue_setSectionInfo:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_createDataProviderWithNotificationSourceDescription:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_queue_notificationSourceDidUninstall:(id)arg1;
- (void)_queue_notificationSourceDidInstall:(id)arg1;
- (void)_queue_createNewDefaultDataProviders:(id)arg1;
- (void)_queue_removeDataProviderWithBundleIdentifier:(id)arg1;
- (void)_queue_sectionInfoDidChange:(id)arg1;

@end
