/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class NSDictionary, NSSet;

@interface PLBatteryBreakdownService : PLService

{
    _Bool _showGizmoQualifier;
    NSSet *_rootNodeNames;
    NSSet *_nonAppNames;
    NSSet *_intermediateRootNodes;
    NSSet *_deletedAppNames;
    NSSet *_webAppNames;
    NSDictionary *_nodeIDToNodeName;
    NSDictionary *_installedBundleIDToDisplayName;
    NSDictionary *_installedPluginBundleIDToPluginEntry;
    NSDictionary *_gizmoDaemonToAppBundleID;
    NSDictionary *_gizmoIDSTopicToAppBundleID;
    NSDictionary *_rootNodeNameToRootNodeEnergyKey;
    NSDictionary *_givenNameToMappedName;
    double _totalEnergyDay;
    double _totalEnergyWeek;
}

@property (retain, nonatomic) NSSet *rootNodeNames;
@property (retain, nonatomic) NSSet *nonAppNames;
@property (retain, nonatomic) NSSet *intermediateRootNodes;
@property (retain, nonatomic) NSSet *deletedAppNames;
@property (retain, nonatomic) NSSet *webAppNames;
@property (retain, nonatomic) NSDictionary *nodeIDToNodeName;
@property (retain, nonatomic) NSDictionary *installedBundleIDToDisplayName;
@property (retain, nonatomic) NSDictionary *installedPluginBundleIDToPluginEntry;
@property (retain, nonatomic) NSDictionary *gizmoDaemonToAppBundleID;
@property (retain, nonatomic) NSDictionary *gizmoIDSTopicToAppBundleID;
@property (retain, nonatomic) NSDictionary *rootNodeNameToRootNodeEnergyKey;
@property (retain, nonatomic) NSDictionary *givenNameToMappedName;
@property _Bool showGizmoQualifier;
@property double totalEnergyDay;
@property double totalEnergyWeek;

+ (void)load;
+ (id)installedPlugins;
+ (id)defaults;
+ (id)whereValidName;
+ (id)pluginEntryFromProxy:(id)arg1;
+ (id)rootNodeQualificationNameWithQualificationName:(id)arg1 withRootNodeName:(id)arg2;
+ (_Bool)canSetQualifier:(int)arg1 forBundleID:(id)arg2;
+ (id)combineQualifiers:(id)arg1;
+ (id)appNameForBundleID:(id)arg1;

- (_Bool)isBackgroundRefreshEnabled:(id)arg1;
- (void)clearState;
- (id)batteryBreakdownWithTimeRange:(struct _PLTimeIntervalRange)arg1 withDataRange:(struct _PLTimeIntervalRange)arg2 withEntryTimeInterval:(double)arg3 withQueryType:(int)arg4;
- (id)suggestionsWithEnergyEntries:(id)arg1;
- (double)totalSumEnergyRatioCutOff;
- (id)batteryBreakdownWithTimeRange:(struct _PLTimeIntervalRange)arg1 withDataRange:(struct _PLTimeIntervalRange)arg2 withEntryTimeInterval:(double)arg3 withQueryType:(int)arg4 withTotalSumEnergyRatioCutOff:(double)arg5;
- (_Bool)wasGizmoConnectedInRange:(struct _PLTimeIntervalRange)arg1;
- (id)energyEntriesWithRange:(struct _PLTimeIntervalRange)arg1 withEntryTimeInterval:(double)arg2 withQueryType:(int)arg3;
- (id)addForegroundAndBackgroundDurations:(id)arg1 withRange:(struct _PLTimeIntervalRange)arg2 withQueryType:(int)arg3;
- (id)addNotificationValues:(id)arg1 withRange:(struct _PLTimeIntervalRange)arg2 withQueryType:(int)arg3;
- (id)populateEnergyBucketKeysWithEntries:(id)arg1;
- (id)populateRootNodeEnergyKeysWithEnergyEntries:(id)arg1;
- (id)populateBLDKeysWithEnergyEntries:(id)arg1;
- (id)applyStaticNameTransformationsWithEnergyEntries:(id)arg1;
- (id)combineDuplicatesWithEnergyEntries:(id)arg1;
- (id)adjustExtensionBackgroundTimeWithEnergyEntries:(id)arg1;
- (id)applyDynamicNameTransformationsWithEnergyEntries:(id)arg1;
- (id)adjustForegroundTimesWithEnergyEntries:(id)arg1;
- (id)adjustBackgroundTimesWithEnergyEntries:(id)arg1;
- (id)determineDisplayNamesWithEnergyEntries:(id)arg1;
- (id)filterWithEnergyEntries:(id)arg1 withQueryType:(int)arg2;
- (id)filterEnergyEntriesBasedOnTime:(id)arg1 withQueryType:(int)arg2;
- (id)removeNodesNotToShowInInternalUI:(id)arg1 withQueryType:(int)arg2;
- (id)qualifiersWithEnergyEntry:(id)arg1 bucketSize:(double)arg2 andTotalEnergy:(double)arg3;
- (double)computeTotalForegroundDuration:(id)arg1;
- (double)computeTotalBackgroundDuration:(id)arg1;
- (_Bool)shouldShowBatteryBreakdownWithTotalSumEnergy:(double)arg1 withtotalSumEnergyRatioCutOff:(double)arg2;
- (_Bool)shouldSuggestAutoLockWithEnergyEntries:(id)arg1 andSavedEnergyPercent:(double *)arg2;
- (_Bool)shouldSuggestAutoBrightnessWithEnergyEntries:(id)arg1 andSavedEnergyPercent:(double *)arg2;
- (_Bool)shouldSuggestReduceBrightnessWithEnergyEntries:(id)arg1 andSavedEnergyPercent:(double *)arg2;
- (_Bool)shouldShowOngoingRestoreInsight;
- (_Bool)shouldShowUpgradeInsightWithQueryType:(int)arg1;
- (double)getLastUpgradeTimestamp;
- (double)getfirstEntryTimestampFromDb;
- (id)getUsageDataWithStartTime:(double)arg1 withMidTime:(double)arg2 withEndTime:(id)arg3;
- (short)energyMetricBucketForRootNodeID:(id)arg1;
- (_Bool)isForegroundOnlyBucket:(short)arg1;
- (id)nonAppsRuntimesWithRange:(struct _PLTimeIntervalRange)arg1;
- (double)nonAppRuntimeWithEventForwardTableName:(id)arg1 withRange:(struct _PLTimeIntervalRange)arg2 andIdentificationKey:(id)arg3;
- (_Bool)showRootNodesInInternal;
- (int)appTypeForName:(id)arg1;
- (id)adjustFGBGTimeForNonAppEnergyEntry:(id)arg1;
- (id)mapDeletedAppsWithEnergyEntries:(id)arg1;
- (id)mapPluginsToAppsWithEnergyEntries:(id)arg1;
- (id)mapGizmoToAppsWithEnergyEntries:(id)arg1;
- (id)reaccountExchangeEntriesWithEnergyEntries:(id)arg1;
- (id)reaccountBackupRestoreWithEnergyEntries:(id)arg1;
- (id)mapCloudDocsToAppsWithEnergyEntries:(id)arg1;
- (int)minimumRequiredQueryTypeForAppType:(int)arg1;
- (_Bool)inDemoMode;
- (id)nonNullValue:(id)arg1 withKey:(id)arg2;
- (_Bool)isBackgroundLocationUsageAlwaysEnabled:(id)arg1 withLocationDict:(id)arg2;
- (id)shouldSuggestBackgroundCPUWithEnergyEntries:(id)arg1;
- (id)shouldSuggestBackgroundLocationWithEnergyEntries:(id)arg1;
- (id)getUpgradeDataWithLastUpgradeTimestamp:(double)arg1 withFirstEntryTimestampFromDB:(double)arg2 withNow:(id)arg3 withBeforeUpgrade:(_Bool)arg4 withRange:(struct _PLTimeIntervalRange)arg5;

@end
