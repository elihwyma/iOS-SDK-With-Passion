/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class BSPlatform, NSMutableDictionary, NSMutableSet, NSSet, NSString, UNSAttachmentsService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationServiceExtensionManager, UNSNotificationSettingsService, UNSPushRegistrationRepository;

@protocol OS_dispatch_queue, UNSRemoteNotificationServerObserver, _DASActivityScheduler;

@interface UNSRemoteNotificationServer : NSObject

{
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationSettingsService *_notificationSettingsService;
    UNSAttachmentsService *_attachmentsService;
    UNSPushRegistrationRepository *_pushRegistrationRepository;
    id <_DASActivityScheduler> _duetActivityScheduler;
    UNSNotificationServiceExtensionManager *_serviceExtensionManager;
    BSPlatform *_platform;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_apsQueue;
    NSMutableSet *_cloudKitBundleIdentifiers;
    NSMutableSet *_contentAvailableBundleIdentifiers;
    NSMutableSet *_quietServiceExtensionBundleIdentifiers;
    NSMutableSet *_foregroundBundleIdentifiers;
    NSMutableSet *_installedBundleIdentifiers;
    NSMutableSet *_restrictedBundleIdentifiers;
    NSMutableSet *_runningBundleIdentifiers;
    NSMutableSet *_userNotificationEnabledBundleIdentifiers;
    NSSet *_backgroundAppRefreshBlackList;
    NSMutableDictionary *_bundleIdentifierToRegistration;
    NSMutableDictionary *_environmentsToConnections;
    NSMutableDictionary *_processBundleIdentifiersToApplicationBundleIdentifiers;
    NSMutableSet *_bundleIdentifiersNeedingToken;
    id <UNSRemoteNotificationServerObserver> _observer;
}

@property (nonatomic) id <UNSRemoteNotificationServerObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;

- (void)dealloc;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)performMigration;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (id)_initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 categoryRepository:(id)arg4 pushRegistrationRepository:(id)arg5 platform:(id)arg6 queue:(id)arg7 apsQueue:(id)arg8 duetActivityScheduler:(id)arg9 serviceExtensionManager:(id)arg10;
- (void)_queue_reloadRegistrations;
- (void)_queue_reloadBackgroundAppRefreshBlackList;
- (void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)_queue_applicationsDidDenyNotificationSettings:(id)arg1;
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didCompleteInitialization;
- (void)_queue_performMigration;
- (void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_queue_didReceiveIncomingMessage:(id)arg1;
- (_Bool)_queue_canDeliverMessageToBundle:(id)arg1;
- (_Bool)_queue_messageIsValidForDelivery:(id)arg1;
- (_Bool)_queue_enforcePushTypeForMessage:(id)arg1;
- (_Bool)_queue_allowServiceExtensionFilteringForMessage:(id)arg1;
- (void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(_Bool)arg4;
- (void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(_Bool)arg4;
- (_Bool)_queue_isPushedEnabledForApplication:(id)arg1;
- (_Bool)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1;
- (_Bool)_queue_isUserNotificationEnabledForApplication:(id)arg1;
- (void)_extensionQueue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4 enforcePushType:(_Bool)arg5;
- (void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(_Bool)arg4 extensionStart:(id)arg5 extensionEnd:(id)arg6;
- (void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queue_calculateTopics;
- (void)_queue_invalidateTokenForBundleIdentifier:(id)arg1;
- (void)_queue_removeRegistrationForBundleIdentifier:(id)arg1;
- (id)_queue_allTopicsForApplication:(id)arg1;
- (_Bool)_queue_isApplicationForeground:(id)arg1;
- (void)_queue_applicationDidBecomeForeground:(id)arg1;
- (void)_queue_applicationDidBecomeBackground:(id)arg1;
- (_Bool)_queue_isApplicationRunning:(id)arg1;
- (void)_queue_applicationDidLaunch:(id)arg1;
- (void)_queue_applicationDidTerminate:(id)arg1;
- (void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2;
- (void)_queue_backgroundRefreshApplicationsDidChange;
- (id)initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 categoryRepository:(id)arg4 pushRegistrationRepository:(id)arg5 platform:(id)arg6;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)didCompleteInitialization;
- (void)notificationSourcesDidInstall:(id)arg1;
- (_Bool)_queue_isUserNotificationEnabled:(id)arg1;
- (void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)backgroundRefreshApplicationsDidChange;
- (_Bool)allowsRemoteNotificationsForBundleIdentifier:(id)arg1;

@end
