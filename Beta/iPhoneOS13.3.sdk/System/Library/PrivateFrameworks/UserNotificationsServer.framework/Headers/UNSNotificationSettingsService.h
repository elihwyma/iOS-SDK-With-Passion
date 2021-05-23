/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableArray, NSString, UNSCriticalAlertAuthorizationAlertController, UNSNotificationAuthorizationAlertController, UNSSettingsGateway;

@protocol OS_dispatch_queue;

@interface UNSNotificationSettingsService : NSObject

{
    NSMutableArray *_observers;
    UNSSettingsGateway *_settingsGateway;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
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
- (id)initWithSettingsGateway:(id)arg1;
- (void)_queue_addObserver:(id)arg1;
- (void)_queue_removeObserver:(id)arg1;
- (id)notificationSystemSettings;
- (void)settingsGateway:(id)arg1 didUpdateSectionInfoForSectionIDs:(id)arg2;
- (void)settingsGateway:(id)arg1 didUpdateGlobalSettings:(id)arg2;
- (id)notificationSourceForBundleIdentifier:(id)arg1;
- (id)notificationSourcesForBundleIdentifiers:(id)arg1;
- (id)allNotificationSources;
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
- (void)setNotificationSystemSettings:(id)arg1;

@end
