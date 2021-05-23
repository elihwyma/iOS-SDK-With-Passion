/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <Preferences/PSListController.h>

@class BBSectionInfo, NPSDomainAccessor, NSMutableArray, NSMutableDictionary, NSString, PSSpecifier;

@interface BPSNotificationAppController : PSListController

{
    _Bool _mirrorSettings;
    NSString *_bundleIdentifier;
    BBSectionInfo *_bbSectionInfo;
    NSMutableArray *_notificationApplicationSpecifiers;
    NPSDomainAccessor *_bbAppsSettings;
    NSMutableArray *_notificationSpecifiers;
    NSMutableDictionary *_sectionInfo;
    unsigned long long _settingsMode;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) BBSectionInfo *bbSectionInfo;
@property (retain, nonatomic) NSMutableArray *notificationApplicationSpecifiers;
@property (retain, nonatomic) NPSDomainAccessor *bbAppsSettings;
@property (nonatomic, readonly) NSMutableArray *notificationSpecifiers;
@property (nonatomic, readonly) _Bool mirrorSettings;
@property (nonatomic, readonly) _Bool showAlerts;
@property (nonatomic, readonly) unsigned long long alertingMode;
@property (nonatomic, readonly) _Bool showPreview;
@property (nonatomic, readonly) NSMutableDictionary *sectionInfo;
@property (nonatomic, readonly) PSSpecifier *previewSwitchSpecifier;
@property (nonatomic) unsigned long long settingsMode;

- (id)init;
- (id)bundle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)applicationBundleIdentifier;
- (long long)alertType;
- (id)specifiers;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)bulletinBoardSettings;
- (id)sectionInfoForBBSectionInfo:(id)arg1;
- (_Bool)suppressMirrorOption;
- (void)setMirrorSettings:(_Bool)arg1;
- (_Bool)caresAboutSubsections;
- (void)updateSubsections;
- (_Bool)suppressAlertSpecifiers;
- (void)removeAlertOptions;
- (_Bool)_suppressSendToNotificationCenterOption;
- (void)removeSendToNotificationCenterOption;
- (void)setSoundsValue:(id)arg1 forSpecifier:(id)arg2;
- (id)soundsValue:(id)arg1;
- (void)setVibrationValue:(id)arg1 forSpecifier:(id)arg2;
- (id)vibrationValue:(id)arg1;
- (void)setNotificationGroupingValue:(id)arg1 specifier:(id)arg2;
- (id)notificationGroupingValue:(id)arg1;
- (id)applicationGroupSpecifiers;
- (void)removeMirrorOptions;
- (_Bool)suppressAllMirrorSpecifiers;
- (id)localizedMirroringDetailFooter;
- (id)mirroredApplicationGroupSpecifiers;
- (id)customGroupSpecifierForDescription:(id)arg1;
- (id)localizedPaneTitle;
- (_Bool)watchHasCapabilitySendToNotificationCenter;
- (_Bool)suppressSendToNotificationCenterOption;
- (void)writeSectionState;
- (void)mirrorSettingsChanged:(_Bool)arg1;
- (void)setAlertingMode:(unsigned long long)arg1;
- (id)localizedPreviewChoiceTitle;
- (void)setShowPreviewValue:(id)arg1 forSpecifier:(id)arg2;
- (id)showPreviewValue:(id)arg1;
- (id)glanceSpecifierForIdentifier:(id)arg1;
- (void)_showSettingsNotifications;
- (id)notificationGroupTitles;
- (id)notificationGroupValues;
- (_Bool)wantsPreviewChoice;
- (id)localizedPreviewGroupLabel;
- (id)localizedPreviewGroupFooter;

@end
