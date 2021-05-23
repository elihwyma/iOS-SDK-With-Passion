/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@interface UNNotificationSettings : NSObject

{
    long long _authorizationStatus;
    long long _soundSetting;
    long long _badgeSetting;
    long long _alertSetting;
    long long _notificationCenterSetting;
    long long _lockScreenSetting;
    long long _carPlaySetting;
    long long _alertStyle;
    long long _showPreviewsSetting;
    long long _criticalAlertSetting;
    _Bool _providesAppNotificationSettings;
    long long _announcementSetting;
    long long _groupingSetting;
}

@property (nonatomic, readonly) long long groupingSetting;
@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) long long soundSetting;
@property (nonatomic, readonly) long long badgeSetting;
@property (nonatomic, readonly) long long alertSetting;
@property (nonatomic, readonly) long long notificationCenterSetting;
@property (nonatomic, readonly) long long lockScreenSetting;
@property (nonatomic, readonly) long long carPlaySetting;
@property (nonatomic, readonly) long long alertStyle;
@property (nonatomic, readonly) long long showPreviewsSetting;
@property (nonatomic, readonly) long long criticalAlertSetting;
@property (nonatomic, readonly) _Bool providesAppNotificationSettings;
@property (nonatomic, readonly) long long announcementSetting;

+ (_Bool)supportsSecureCoding;
+ (id)emptySettings;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 spokenSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 alertStyle:(long long)arg10 showPreviewsSetting:(long long)arg11 providesAppNotificationSettings:(_Bool)arg12;
+ (id)settingsWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 announcementSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 alertStyle:(long long)arg10 showPreviewsSetting:(long long)arg11 groupingSetting:(long long)arg12 providesAppNotificationSettings:(_Bool)arg13;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthorizationStatus:(long long)arg1 soundSetting:(long long)arg2 badgeSetting:(long long)arg3 alertSetting:(long long)arg4 notificationCenterSetting:(long long)arg5 lockScreenSetting:(long long)arg6 carPlaySetting:(long long)arg7 announcementSetting:(long long)arg8 criticalAlertSetting:(long long)arg9 alertStyle:(long long)arg10 showPreviewsSetting:(long long)arg11 groupingSetting:(long long)arg12 providesAppNotificationSettings:(_Bool)arg13;
- (_Bool)hasEnabledSettings;

@end
