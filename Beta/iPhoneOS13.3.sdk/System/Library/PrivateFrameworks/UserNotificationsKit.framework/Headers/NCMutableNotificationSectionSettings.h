/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <UserNotificationsKit/NCNotificationSectionSettings.h>

@class NSDictionary, NSSet, NSString, UIImage;

@interface NCMutableNotificationSectionSettings : NCNotificationSectionSettings

@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *subSectionIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDictionary *settings;
@property (copy, nonatomic) NSSet *subSectionSettings;
@property (nonatomic, getter=isUserConfigurable) _Bool userConfigurable;
@property (retain, nonatomic) UIImage *settingsIcon;
@property (nonatomic) _Bool showsCustomSettingsLink;
@property (nonatomic) _Bool isDeliveredQuietly;
@property (nonatomic) _Bool hasProvisionalAuthorization;

@end
