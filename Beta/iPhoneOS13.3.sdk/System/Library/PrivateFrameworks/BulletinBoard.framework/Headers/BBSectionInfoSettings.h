/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface BBSectionInfoSettings : NSObject

{
    _Bool _showsOnExternalDevices;
    _Bool _showsCustomSettingsLink;
    long long _authorizationStatus;
    long long _notificationCenterSetting;
    long long _lockScreenSetting;
    long long _contentPreviewSetting;
    unsigned long long _alertType;
    unsigned long long _pushSettings;
    long long _carPlaySetting;
    long long _criticalAlertSetting;
    long long _spokenNotificationSetting;
    long long _bulletinGroupingSetting;
}

@property (nonatomic) _Bool showsInLockScreen;
@property (nonatomic) _Bool showsInNotificationCenter;
@property (nonatomic) _Bool showsMessagePreview;
@property (copy, nonatomic, readonly) NSDictionary *stateCapture;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) _Bool allowsNotifications;
@property (nonatomic) long long notificationCenterSetting;
@property (nonatomic) long long lockScreenSetting;
@property (nonatomic) _Bool showsOnExternalDevices;
@property (nonatomic) _Bool showsCustomSettingsLink;
@property (nonatomic) long long contentPreviewSetting;
@property (nonatomic) unsigned long long alertType;
@property (nonatomic) unsigned long long pushSettings;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long criticalAlertSetting;
@property (nonatomic) long long spokenNotificationSetting;
@property (nonatomic) long long bulletinGroupingSetting;

+ (_Bool)supportsSecureCoding;
+ (id)sectionInfoSettingsForManagedBundleID:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultsForSectionType:(long long)arg1;
- (id)_authorizationStatusDescription;
- (id)_contentPreviewSettingDescription;
- (id)_alertTypeDescription;
- (id)_bulletinGroupingSettingDescription;

@end
