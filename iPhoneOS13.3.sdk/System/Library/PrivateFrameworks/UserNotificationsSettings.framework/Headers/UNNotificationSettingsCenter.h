//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsSettings/UNUserNotificationSettingsServiceConnectionObserver-Protocol.h>

@protocol UNNotificationSettingsCenterDelegate;

@interface UNNotificationSettingsCenter : NSObject <UNUserNotificationSettingsServiceConnectionObserver>
{
    id <UNNotificationSettingsCenterDelegate> _delegate;
}

+ (id)currentNotificationSettingsCenter;
@property(nonatomic) __weak id <UNNotificationSettingsCenterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)settingsServiceConnection:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2;
- (void)settingsServiceConnection:(id)arg1 didUpdateNotificationSourcesWithIdentifiers:(id)arg2;
- (void)setNotificationSystemSettings:(id)arg1;
- (id)notificationSystemSettings;
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
- (id)allNotificationSources;
- (id)notificationSourcesWithIdentifiers:(id)arg1;
- (id)notificationSourceWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

