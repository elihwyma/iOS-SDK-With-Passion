/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@interface UNSNotificationSourceSettingsDescription : NSObject

{
    _Bool _supportsSounds;
    _Bool _supportsAlerts;
    _Bool _supportsBadges;
    _Bool _supportsLockScreen;
    _Bool _supportsNotificationCenter;
    _Bool _supportsCarPlay;
    _Bool _supportsSpoken;
    _Bool _modalAlertStyle;
    _Bool _alwaysShowPreviews;
    _Bool _providesAppNotificationSettings;
}

@property (nonatomic) _Bool supportsSounds;
@property (nonatomic) _Bool supportsAlerts;
@property (nonatomic) _Bool supportsBadges;
@property (nonatomic) _Bool supportsLockScreen;
@property (nonatomic) _Bool supportsNotificationCenter;
@property (nonatomic) _Bool supportsCarPlay;
@property (nonatomic) _Bool supportsSpoken;
@property (nonatomic) _Bool modalAlertStyle;
@property (nonatomic) _Bool alwaysShowPreviews;
@property (nonatomic) _Bool providesAppNotificationSettings;

+ (id)notificationSourceSettingsDescriptionFromDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
