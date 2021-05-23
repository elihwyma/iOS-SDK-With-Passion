/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class BLTPBSectionIcon, NSMutableArray, NSString;

@interface BLTPBSectionInfo : PBCodable

{
    unsigned int _alertType;
    int _authorizationStatus;
    NSString *_displayName;
    NSString *_factorySectionID;
    int _groupingSetting;
    BLTPBSectionIcon *_icon;
    int _lockScreenSetting;
    unsigned int _notificationCenterLimit;
    int _notificationCenterSetting;
    int _phoneAuthorizationStatus;
    unsigned int _pushSettings;
    int _sectionCategory;
    NSString *_sectionID;
    int _sectionType;
    int _spokenNotificationSetting;
    NSString *_subsectionID;
    int _subsectionPriority;
    NSMutableArray *_subsections;
    unsigned int _suppressedSettings;
    NSString *_universalSectionID;
    unsigned int _version;
    NSString *_watchSectionID;
    _Bool _allowsNotifications;
    _Bool _criticalAlertSetting;
    _Bool _displaysCriticalBulletinsLegacy;
    _Bool _excludeFromBulletinBoard;
    _Bool _iconsStripped;
    _Bool _phoneAllowsNotifications;
    _Bool _showsInLockScreen;
    _Bool _showsInNotificationCenter;
    _Bool _showsMessagePreview;
    _Bool _showsOnExternalDevices;
    _Bool _suppressFromSettings;
    struct {
        unsigned int alertType:1;
        unsigned int authorizationStatus:1;
        unsigned int groupingSetting:1;
        unsigned int lockScreenSetting:1;
        unsigned int notificationCenterLimit:1;
        unsigned int notificationCenterSetting:1;
        unsigned int phoneAuthorizationStatus:1;
        unsigned int pushSettings:1;
        unsigned int sectionCategory:1;
        unsigned int sectionType:1;
        unsigned int spokenNotificationSetting:1;
        unsigned int subsectionPriority:1;
        unsigned int suppressedSettings:1;
        unsigned int version:1;
        unsigned int allowsNotifications:1;
        unsigned int criticalAlertSetting:1;
        unsigned int displaysCriticalBulletinsLegacy:1;
        unsigned int excludeFromBulletinBoard:1;
        unsigned int iconsStripped:1;
        unsigned int phoneAllowsNotifications:1;
        unsigned int showsInLockScreen:1;
        unsigned int showsInNotificationCenter:1;
        unsigned int showsMessagePreview:1;
        unsigned int showsOnExternalDevices:1;
        unsigned int suppressFromSettings:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic, readonly) _Bool hasSubsectionID;
@property (retain, nonatomic) NSString *subsectionID;
@property (nonatomic) _Bool hasSectionType;
@property (nonatomic) int sectionType;
@property (nonatomic) _Bool hasSectionCategory;
@property (nonatomic) int sectionCategory;
@property (nonatomic) _Bool hasSuppressFromSettings;
@property (nonatomic) _Bool suppressFromSettings;
@property (nonatomic) _Bool hasShowsInNotificationCenter;
@property (nonatomic) _Bool showsInNotificationCenter;
@property (nonatomic) _Bool hasShowsInLockScreen;
@property (nonatomic) _Bool showsInLockScreen;
@property (nonatomic) _Bool hasShowsOnExternalDevices;
@property (nonatomic) _Bool showsOnExternalDevices;
@property (nonatomic) _Bool hasNotificationCenterLimit;
@property (nonatomic) unsigned int notificationCenterLimit;
@property (nonatomic) _Bool hasPushSettings;
@property (nonatomic) unsigned int pushSettings;
@property (nonatomic) _Bool hasAlertType;
@property (nonatomic) unsigned int alertType;
@property (nonatomic) _Bool hasShowsMessagePreview;
@property (nonatomic) _Bool showsMessagePreview;
@property (nonatomic) _Bool hasAllowsNotifications;
@property (nonatomic) _Bool allowsNotifications;
@property (nonatomic) _Bool hasSuppressedSettings;
@property (nonatomic) unsigned int suppressedSettings;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool hasDisplaysCriticalBulletinsLegacy;
@property (nonatomic) _Bool displaysCriticalBulletinsLegacy;
@property (retain, nonatomic) NSMutableArray *subsections;
@property (nonatomic) _Bool hasSubsectionPriority;
@property (nonatomic) int subsectionPriority;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic, readonly) _Bool hasFactorySectionID;
@property (retain, nonatomic) NSString *factorySectionID;
@property (nonatomic, readonly) _Bool hasUniversalSectionID;
@property (retain, nonatomic) NSString *universalSectionID;
@property (nonatomic, readonly) _Bool hasIcon;
@property (retain, nonatomic) BLTPBSectionIcon *icon;
@property (nonatomic) _Bool hasIconsStripped;
@property (nonatomic) _Bool iconsStripped;
@property (nonatomic) _Bool hasPhoneAllowsNotifications;
@property (nonatomic) _Bool phoneAllowsNotifications;
@property (nonatomic) _Bool hasCriticalAlertSetting;
@property (nonatomic) _Bool criticalAlertSetting;
@property (nonatomic) _Bool hasGroupingSetting;
@property (nonatomic) int groupingSetting;
@property (nonatomic) _Bool hasExcludeFromBulletinBoard;
@property (nonatomic) _Bool excludeFromBulletinBoard;
@property (nonatomic) _Bool hasAuthorizationStatus;
@property (nonatomic) int authorizationStatus;
@property (nonatomic) _Bool hasPhoneAuthorizationStatus;
@property (nonatomic) int phoneAuthorizationStatus;
@property (nonatomic) _Bool hasLockScreenSetting;
@property (nonatomic) int lockScreenSetting;
@property (nonatomic) _Bool hasNotificationCenterSetting;
@property (nonatomic) int notificationCenterSetting;
@property (nonatomic) _Bool hasSpokenNotificationSetting;
@property (nonatomic) int spokenNotificationSetting;
@property (nonatomic, readonly) _Bool hasWatchSectionID;
@property (retain, nonatomic) NSString *watchSectionID;

+ (Class)subsectionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSubsections:(id)arg1;
- (unsigned long long)subsectionsCount;
- (void)clearSubsections;
- (id)subsectionsAtIndex:(unsigned long long)arg1;
- (id)groupingSettingAsString:(int)arg1;
- (int)StringAsGroupingSetting:(id)arg1;
- (id)lockScreenSettingAsString:(int)arg1;
- (int)StringAsLockScreenSetting:(id)arg1;
- (id)notificationCenterSettingAsString:(int)arg1;
- (int)StringAsNotificationCenterSetting:(id)arg1;
- (id)spokenNotificationSettingAsString:(int)arg1;
- (int)StringAsSpokenNotificationSetting:(id)arg1;

@end
