/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsKit/NCNotificationSectionSettings.h>

@interface NCNotificationSectionSettings (Bulletin)

@property (nonatomic, readonly) _Bool notificationsEnabled;
@property (nonatomic, readonly) _Bool criticalAlertsEnabled;
@property (nonatomic, readonly) _Bool showsInNotificationCenter;
@property (nonatomic, readonly) _Bool showsInLockScreen;
@property (nonatomic, readonly) long long subSectionPriority;
@property (nonatomic, readonly) unsigned long long contentPreviewSetting;
@property (nonatomic, readonly) unsigned long long groupingSetting;

+ (id)notificationSectionSettingsForBBSectionInfo:(id)arg1;

- (unsigned long long)_contentPreviewSettingFromBBContentPreviewSetting:(long long)arg1;
- (unsigned long long)_groupingSettingFromBBGroupingSetting:(long long)arg1;
- (id)_notificationSectionSettingsForSubSectionWithIdentifier:(id)arg1;
- (unsigned long long)contentPreviewSettingForRequestWithSubSectionIdentifiers:(id)arg1;

@end
