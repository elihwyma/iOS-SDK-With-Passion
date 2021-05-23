/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBSectionIcon, BBSectionInfoSettings, NSArray, NSData, NSDictionary, NSString;

@interface BBSectionInfo : NSObject

{
    NSString *_sectionID;
    NSString *_subsectionID;
    long long _sectionType;
    long long _sectionCategory;
    BBSectionInfoSettings *_sectionInfoSettings;
    BBSectionInfoSettings *_managedSectionInfoSettings;
    NSString *_pathToWeeAppPluginBundle;
    NSString *_displayName;
    BBSectionIcon *_icon;
    NSArray *_subsections;
    BBSectionInfo *_parentSection;
    NSString *_factorySectionID;
    NSArray *_dataProviderIDs;
    _Bool _suppressFromSettings;
    _Bool _hideWeeApp;
    NSString *_appName;
    long long _subsectionPriority;
    unsigned long long _suppressedSettings;
    unsigned long long _version;
}

@property (copy, nonatomic) BBSectionInfoSettings *managedSectionInfoSettings;
@property (nonatomic, readonly) _Bool usesManagedSettings;
@property (nonatomic, readonly) BBSectionInfoSettings *readableSettings;
@property (nonatomic, readonly) BBSectionInfoSettings *writableSettings;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) _Bool allowsNotifications;
@property (nonatomic) _Bool showsOnExternalDevices;
@property (nonatomic) _Bool showsCustomSettingsLink;
@property (nonatomic) long long contentPreviewSetting;
@property (nonatomic) long long spokenNotificationSetting;
@property (nonatomic) unsigned long long alertType;
@property (nonatomic) unsigned long long pushSettings;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long criticalAlertSetting;
@property (nonatomic) long long lockScreenSetting;
@property (nonatomic) long long notificationCenterSetting;
@property (nonatomic) long long bulletinGroupingSetting;
@property (nonatomic) _Bool hideWeeApp;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) BBSectionIcon *icon;
@property (copy, nonatomic) NSArray *subsections;
@property (weak, nonatomic) BBSectionInfo *parentSection;
@property (copy, nonatomic) NSString *factorySectionID;
@property (copy, nonatomic) NSArray *dataProviderIDs;
@property (copy, nonatomic, readonly) NSDictionary *stateCapture;
@property (copy, nonatomic) NSString *sectionID;
@property (copy, nonatomic) NSString *subsectionID;
@property (nonatomic) long long sectionType;
@property (nonatomic) long long sectionCategory;
@property (nonatomic) _Bool suppressFromSettings;
@property (copy, nonatomic) BBSectionInfoSettings *sectionInfoSettings;
@property (nonatomic) unsigned long long suppressedSettings;
@property (copy, nonatomic) NSString *pathToWeeAppPluginBundle;
@property (nonatomic, readonly) _Bool hasEnabledSettings;
@property (nonatomic, readonly) _Bool isDeliveredQuietly;
@property (nonatomic) long long subsectionPriority;
@property (nonatomic) unsigned long long version;
@property (nonatomic) _Bool enabled;
@property (copy, nonatomic, readonly) NSData *iconData;
@property (nonatomic) unsigned long long bulletinCount;
@property (nonatomic) unsigned long long notificationCenterLimit;

+ (_Bool)supportsSecureCoding;
+ (id)defaultSectionInfoForType:(long long)arg1;
+ (id)defaultSectionInfoForSection:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (_Bool)showsInNotificationCenter;
- (_Bool)showsInLockScreen;
- (_Bool)showsMessagePreview;
- (id)initWithDefaultsForSectionType:(long long)arg1;
- (void)setShowsMessagePreview:(_Bool)arg1;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1 defaultContentPreviewSetting:(long long)arg2 globalSpokenNotificationSetting:(long long)arg3;
- (id)effectiveSectionInfoWithDefaultContentPreviewSetting:(long long)arg1 globalSpokenNotificationSetting:(long long)arg2;
- (id)_subsectionForID:(id)arg1;
- (_Bool)queryAndUseManagedSettings;
- (void)_replaceSubsection:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (_Bool)queryAndUseManagedSettingsForSectionID:(id)arg1;
- (void)_configureWithDefaultsForSectionType:(long long)arg1;
- (_Bool)_isDeliveredQuietly;
- (void)_deliverQuietly:(_Bool)arg1;
- (id)_suppressedSettingsList:(unsigned long long)arg1;
- (void)_addSubsection:(id)arg1;
- (void)setShowsInNotificationCenter:(_Bool)arg1;
- (void)setShowsInLockScreen:(_Bool)arg1;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)deliverQuietly:(_Bool)arg1;
- (id)copyFromManagedSettings;
- (long long)disabledSettingForSetting:(long long)arg1;
- (void)updateWithDefaultSectionInfo:(id)arg1;
- (long long)emergencySetting;
- (void)setEmergencySetting:(long long)arg1;

@end
