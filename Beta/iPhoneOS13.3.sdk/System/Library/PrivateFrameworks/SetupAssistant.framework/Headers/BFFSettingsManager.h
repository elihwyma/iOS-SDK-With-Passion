/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber;

@interface BFFSettingsManager : NSObject

{
    NSMutableArray *_stashedPaths;
    NSMutableDictionary *_stashedPreferences;
    NSMutableDictionary *_stashedManagedConfigurationSettings;
    NSMutableArray *_stashedButtonHaptics;
    NSNumber *_stashedAssistantEnabled;
    NSNumber *_stashedAssistantVoiceTriggerEnabled;
    NSNumber *_stashedLocationServicesEnabled;
    NSData *_stashedLocationServicesSettings;
    NSData *_stashedWatchData;
    NSArray *_stashedFlowSkipIdentifiers;
    NSNumber *_stashedScreenTimeEnabled;
    NSNumber *_stashedAutoUpdateEnabled;
    NSData *_stashedAccessibilityData;
    NSDictionary *_stashedDeviceToDeviceMigrationSuccessInfo;
    NSNumber *_stashedUserInterfaceStyleMode;
}

+ (id)sharedManager;

- (id)init;
- (void)reset;
- (_Bool)hasStashedValuesOnDisk;
- (_Bool)removeSafeHaven;
- (void)postDidRestoreSafeHavenNotification;
- (void)setScreenTimeEnabled:(_Bool)arg1;
- (void)setAutoUpdateEnabled:(_Bool)arg1;
- (void)setUserInterfaceStyleMode:(long long)arg1;
- (void)_reset:(_Bool)arg1;
- (id)loadConfigurationFromDisk;
- (void)setObject:(id)arg1 forDomain:(id)arg2 key:(id)arg3;
- (id)_preferencesForDomain:(id)arg1;
- (void)stashPath:(id)arg1;
- (void)clearHapticTypeForButtonKind:(long long)arg1;
- (_Bool)hideStashInSafeHavenAsProvisional:(_Bool)arg1;
- (void)populatePathsToStash;
- (_Bool)hasStashedValues;
- (long long)stashConfigurationType;
- (_Bool)_stashConfiguration:(_Bool)arg1;
- (_Bool)_stashPaths;
- (_Bool)_commitStash;
- (id)stashProductVersion;
- (id)stashBuildVersion;
- (unsigned long long)_restoreConfiguration;
- (void)_applyStashedPreferences;
- (void)_applyStashedManagedConfiguration;
- (void)_applyStashedButtonHaptics;
- (void)_applyAssistantPreferences;
- (void)_applyLocationServices;
- (void)_applyLocationServicesSettings;
- (void)_restoreWatchData;
- (void)_applyStashedFlowSkipIdentifiers;
- (void)_applyScreenTimePreferences;
- (void)_applyAutoUpdatePreferences;
- (void)_restoreAccessibilityData;
- (void)_applyUserInterfaceStyleMode;
- (void)_restoreStashedFiles;
- (id)_shovePath:(id)arg1 toPath:(id)arg2;
- (unsigned long long)stashVersion;
- (void)setBool:(_Bool)arg1 forManagedConfigurationSetting:(id)arg2;
- (void)removeBoolSettingForManagedConfigurationSetting:(id)arg1;
- (void)setBool:(_Bool)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)stashHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)stashLocationServicesChoice:(_Bool)arg1;
- (void)stashLocationServicesSettings:(id)arg1;
- (void)stashWatchData:(id)arg1;
- (void)setAssistantEnabled:(_Bool)arg1;
- (void)setAssistantVoiceTriggerEnabled:(_Bool)arg1;
- (void)stashDeviceToDeviceMigrationSuccessInfo:(id)arg1;
- (void)stashFlowSkipIdentifiers:(id)arg1;
- (void)stashAccessibilityData:(id)arg1;
- (_Bool)hideStashInSafeHaven;
- (void)applySafeHavenStash;

@end
