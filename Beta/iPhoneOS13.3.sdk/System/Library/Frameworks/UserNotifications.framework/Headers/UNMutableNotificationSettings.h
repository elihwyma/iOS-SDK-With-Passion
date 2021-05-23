/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationSettings.h>

@interface UNMutableNotificationSettings : UNNotificationSettings

@property (nonatomic) long long authorizationStatus;
@property (nonatomic) long long soundSetting;
@property (nonatomic) long long badgeSetting;
@property (nonatomic) long long alertSetting;
@property (nonatomic) long long notificationCenterSetting;
@property (nonatomic) long long lockScreenSetting;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long alertStyle;
@property (nonatomic) long long showPreviewsSetting;
@property (nonatomic) long long criticalAlertSetting;
@property (nonatomic) _Bool providesAppNotificationSettings;
@property (nonatomic) long long announcementSetting;
@property (nonatomic) long long groupingSetting;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
