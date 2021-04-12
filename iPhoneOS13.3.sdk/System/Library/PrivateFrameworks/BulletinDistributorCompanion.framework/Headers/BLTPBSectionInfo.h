//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class BLTPBSectionIcon, NSMutableArray, NSString;

@interface BLTPBSectionInfo : PBCodable <NSCopying>
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
    BOOL _allowsNotifications;
    BOOL _criticalAlertSetting;
    BOOL _displaysCriticalBulletinsLegacy;
    BOOL _excludeFromBulletinBoard;
    BOOL _iconsStripped;
    BOOL _phoneAllowsNotifications;
    BOOL _showsInLockScreen;
    BOOL _showsInNotificationCenter;
    BOOL _showsMessagePreview;
    BOOL _showsOnExternalDevices;
    BOOL _suppressFromSettings;
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

+ (Class)subsectionsType;
@property(retain, nonatomic) NSString *watchSectionID; // @synthesize watchSectionID=_watchSectionID;
@property(nonatomic) int phoneAuthorizationStatus; // @synthesize phoneAuthorizationStatus=_phoneAuthorizationStatus;
@property(nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) BOOL excludeFromBulletinBoard; // @synthesize excludeFromBulletinBoard=_excludeFromBulletinBoard;
@property(nonatomic) BOOL criticalAlertSetting; // @synthesize criticalAlertSetting=_criticalAlertSetting;
@property(nonatomic) BOOL phoneAllowsNotifications; // @synthesize phoneAllowsNotifications=_phoneAllowsNotifications;
@property(nonatomic) BOOL iconsStripped; // @synthesize iconsStripped=_iconsStripped;
@property(retain, nonatomic) BLTPBSectionIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
@property(retain, nonatomic) NSString *factorySectionID; // @synthesize factorySectionID=_factorySectionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) int subsectionPriority; // @synthesize subsectionPriority=_subsectionPriority;
@property(retain, nonatomic) NSMutableArray *subsections; // @synthesize subsections=_subsections;
@property(nonatomic) BOOL displaysCriticalBulletinsLegacy; // @synthesize displaysCriticalBulletinsLegacy=_displaysCriticalBulletinsLegacy;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned int suppressedSettings; // @synthesize suppressedSettings=_suppressedSettings;
@property(nonatomic) BOOL allowsNotifications; // @synthesize allowsNotifications=_allowsNotifications;
@property(nonatomic) BOOL showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(nonatomic) unsigned int alertType; // @synthesize alertType=_alertType;
@property(nonatomic) unsigned int pushSettings; // @synthesize pushSettings=_pushSettings;
@property(nonatomic) unsigned int notificationCenterLimit; // @synthesize notificationCenterLimit=_notificationCenterLimit;
@property(nonatomic) BOOL showsOnExternalDevices; // @synthesize showsOnExternalDevices=_showsOnExternalDevices;
@property(nonatomic) BOOL showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property(nonatomic) BOOL showsInNotificationCenter; // @synthesize showsInNotificationCenter=_showsInNotificationCenter;
@property(nonatomic) BOOL suppressFromSettings; // @synthesize suppressFromSettings=_suppressFromSettings;
@property(nonatomic) int sectionCategory; // @synthesize sectionCategory=_sectionCategory;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasWatchSectionID;
- (int)StringAsSpokenNotificationSetting:(id)arg1;
- (id)spokenNotificationSettingAsString:(int)arg1;
@property(nonatomic) BOOL hasSpokenNotificationSetting;
@property(nonatomic) int spokenNotificationSetting; // @synthesize spokenNotificationSetting=_spokenNotificationSetting;
- (int)StringAsNotificationCenterSetting:(id)arg1;
- (id)notificationCenterSettingAsString:(int)arg1;
@property(nonatomic) BOOL hasNotificationCenterSetting;
@property(nonatomic) int notificationCenterSetting; // @synthesize notificationCenterSetting=_notificationCenterSetting;
- (int)StringAsLockScreenSetting:(id)arg1;
- (id)lockScreenSettingAsString:(int)arg1;
@property(nonatomic) BOOL hasLockScreenSetting;
@property(nonatomic) int lockScreenSetting; // @synthesize lockScreenSetting=_lockScreenSetting;
@property(nonatomic) BOOL hasPhoneAuthorizationStatus;
@property(nonatomic) BOOL hasAuthorizationStatus;
@property(nonatomic) BOOL hasExcludeFromBulletinBoard;
- (int)StringAsGroupingSetting:(id)arg1;
- (id)groupingSettingAsString:(int)arg1;
@property(nonatomic) BOOL hasGroupingSetting;
@property(nonatomic) int groupingSetting; // @synthesize groupingSetting=_groupingSetting;
@property(nonatomic) BOOL hasCriticalAlertSetting;
@property(nonatomic) BOOL hasPhoneAllowsNotifications;
@property(nonatomic) BOOL hasIconsStripped;
@property(readonly, nonatomic) BOOL hasIcon;
@property(readonly, nonatomic) BOOL hasUniversalSectionID;
@property(readonly, nonatomic) BOOL hasFactorySectionID;
@property(nonatomic) BOOL hasVersion;
@property(nonatomic) BOOL hasSubsectionPriority;
- (id)subsectionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)subsectionsCount;
- (void)addSubsections:(id)arg1;
- (void)clearSubsections;
@property(nonatomic) BOOL hasDisplaysCriticalBulletinsLegacy;
@property(readonly, nonatomic) BOOL hasDisplayName;
@property(nonatomic) BOOL hasSuppressedSettings;
@property(nonatomic) BOOL hasAllowsNotifications;
@property(nonatomic) BOOL hasShowsMessagePreview;
@property(nonatomic) BOOL hasAlertType;
@property(nonatomic) BOOL hasPushSettings;
@property(nonatomic) BOOL hasNotificationCenterLimit;
@property(nonatomic) BOOL hasShowsOnExternalDevices;
@property(nonatomic) BOOL hasShowsInLockScreen;
@property(nonatomic) BOOL hasShowsInNotificationCenter;
@property(nonatomic) BOOL hasSuppressFromSettings;
@property(nonatomic) BOOL hasSectionCategory;
@property(nonatomic) BOOL hasSectionType;
@property(readonly, nonatomic) BOOL hasSubsectionID;
@property(readonly, nonatomic) BOOL hasSectionID;
- (id)description;

@end

