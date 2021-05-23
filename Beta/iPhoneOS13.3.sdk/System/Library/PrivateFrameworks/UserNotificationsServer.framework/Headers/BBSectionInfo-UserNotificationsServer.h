/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <BBSectionInfo.h>

@interface BBSectionInfo (UserNotificationsServer)

- (long long)uns_BBSectionInfoSettingForUNNotificationSetting:(long long)arg1;
- (long long)uns_notificationSettingForBBSectionInfoSetting:(long long)arg1;
- (id)uns_notificationSettings;
- (id)uns_topicSettings;
- (void)uns_setPropertiesFromAuthorizationOptions:(unsigned long long)arg1;
- (void)uns_setPropertiesFromNotificationSettings:(id)arg1 systemSettings:(id)arg2;
- (void)uns_setPropertiesFromSourceSettingsDescription:(id)arg1;
- (void)uns_setPropertiesFromTopicRecord:(id)arg1;
- (id)uns_notificationSource;

@end
