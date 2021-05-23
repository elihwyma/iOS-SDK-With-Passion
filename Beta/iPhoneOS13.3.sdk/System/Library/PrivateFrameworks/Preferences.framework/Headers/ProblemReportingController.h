/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class AFSettingsConnection, HKHealthStore, NSArray, PSSpecifier, PrefsUILinkLabel;

@interface ProblemReportingController

{
    PrefsUILinkLabel *_aboutDiagnosticsLinkLabel;
    PSSpecifier *_filesystemMetadataSnapshotSpecifier;
    NSArray *_appActivitySpecifiers;
    NSArray *_iCloudSpecifiers;
    PSSpecifier *_spinnerSpecifier;
    _Bool _shouldShareHealthRecordsData;
    HKHealthStore *_healthStore;
    NSArray *_healthDataSpecifiers;
    NSArray *_healthRecordsDataSpecifiers;
    NSArray *_wheelchairDataSpecifiers;
    AFSettingsConnection *_assistantSettingsConnection;
    NSArray *_improveSiriSpecifiers;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (retain, nonatomic) AFSettingsConnection *assistantSettingsConnection;
@property (retain, nonatomic) NSArray *improveSiriSpecifiers;
@property (nonatomic) _Bool shouldShareHealthRecordsData;
@property (readonly) PSSpecifier *spinnerSpecifier;
@property (readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property (readonly) NSArray *appActivitySpecifiers;
@property (readonly) NSArray *healthDataSpecifiers;
@property (readonly) NSArray *healthRecordsDataSpecifiers;
@property (readonly) NSArray *wheelchairDataSpecifiers;

+ (_Bool)isProblemReportingEnabled;

- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)dismissAboutSheet:(id)arg1;
- (void)setProblemReportingEnabled:(_Bool)arg1;
- (id)iCloudSpecifiers;
- (id)automatedFeedbackSpecifiers;
- (void)snapshot:(id)arg1;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2;
- (id)shouldShareAppActivityWithAppDevelopers;
- (void)setBoolValue:(_Bool)arg1 forIdMSConfigKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAboutImproveSiriAnalyticsSheet;
- (void)setImproveSiriAndDictationValue:(id)arg1 specifier:(id)arg2;
- (id)getCurrentImproveSiriAndDictationValueForSpecifier:(id)arg1;
- (_Bool)shouldShowiCloudSpecifiersForAccount:(id)arg1;
- (void)setShouldShareiCloudAnalytics:(id)arg1 specifier:(id)arg2;
- (id)shouldShareiCloudAnalytics:(id)arg1;
- (void)setShouldShareHealthData:(id)arg1 specifier:(id)arg2;
- (id)shouldShareHealthDataForSpecifier:(id)arg1;
- (void)setShouldShareHealthRecordsData:(id)arg1 specifier:(id)arg2;
- (id)shouldShareHealthRecordsDataForSpecifier:(id)arg1;
- (void)_handleUpdateForSpecifierID:(id)arg1 value:(id)arg2 error:(id)arg3;
- (void)setShouldShareWheelchairData:(id)arg1 specifier:(id)arg2;
- (id)shouldShareWheelchairDataForSpecifier:(id)arg1;
- (void)setProblemReportingEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)problemReportingEnabled:(id)arg1;
- (void)checkDiagnosticsSessionAvailability;
- (void)updateiCloudAnalyticsForSpecifierID:(id)arg1;
- (void)updateHealthRecordsPreferenceForSpecifierID:(id)arg1;
- (void)launchDiagnosticsSession:(id)arg1;
- (void)showAboutSheetWithTitle:(id)arg1 content:(id)arg2;
- (void)showAboutAnalyticsSheet;
- (void)showAboutiCloudAnalyticsSheet;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutHealthDataSheet;
- (void)showAboutHealthRecordsDataSheet;
- (void)showAboutWheelchairDataSheet;
- (void)automatedFeedbackLinkTapped;
- (id)automatedFeedbackEnabled:(id)arg1;
- (void)setAutomatedFeedbackEnabled:(id)arg1 specifier:(id)arg2;

@end
