/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableDictionary, NSMutableSet, UNSApplicationLauncher, UNSLocalizationService, UNSNotificationCategoryRepository;

@protocol OS_dispatch_queue;

@interface UNSApplicationService : NSObject

{
    NSMutableSet *_foregroundBundleIdentifiers;
    NSMutableDictionary *_processBundleIdentifiersToApplicationBundleIdentifiers;
    UNSApplicationLauncher *_applicationLauncher;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSLocalizationService *_localizationService;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)notificationSourcesDidInstall:(id)arg1;
- (id)initWithApplicationLauncher:(id)arg1 categoryRepository:(id)arg2 localizationService:(id)arg3;
- (_Bool)isApplicationForeground:(id)arg1;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_notificationSourcesDidInstall:(id)arg1;
- (void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
