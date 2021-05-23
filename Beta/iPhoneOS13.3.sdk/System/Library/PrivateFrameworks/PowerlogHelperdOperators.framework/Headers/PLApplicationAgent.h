/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLAgent.h>

@class BKSApplicationStateMonitor, NSDate, NSMutableSet, NSSet, NSString;

@interface PLApplicationAgent : PLAgent

{
    NSMutableSet *_keyboardPlugins;
    NSMutableSet *_widgetPlugins;
    NSDate *_startDateForOverAllBackGroundActivity;
    NSSet *_currentDisplayIdentifiers;
    BKSApplicationStateMonitor *_appStateMonitor;
}

@property (retain) NSMutableSet *keyboardPlugins;
@property (retain) NSMutableSet *widgetPlugins;
@property (retain) NSDate *startDateForOverAllBackGroundActivity;
@property (retain) NSSet *currentDisplayIdentifiers;
@property (retain) BKSApplicationStateMonitor *appStateMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;
+ (id)installedPlugins;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)appVersionForBundle:(id)arg1;
+ (int)appTypeFromProxy:(id)arg1;
+ (id)pluginEntryFromProxy:(id)arg1;
+ (id)appNameForBundleID:(id)arg1;
+ (id)entryEventForwardDefinitionApplication;
+ (id)entryEventBackwardDefinitionApplicationMemory;
+ (id)entryEventNoneAppVersions;
+ (id)entryEventNoneAllApps;
+ (id)entryEventNoneAllPlugins;
+ (id)entryAggregateDefinitionApplicationReason;
+ (void)addAppVersion:(id)arg1 withVersion:(id)arg2;
+ (void)removeAppVersion:(id)arg1 forVersion:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)log;
- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (void)displayIdentifiersDidChange;
- (void)logEventPointApplicationForDisplayID:(id)arg1 withPid:(int)arg2 withState:(id)arg3 withReasons:(id)arg4;
- (_Bool)appAnalyticsEnabled;
- (void)logEventBackwardApplicationMemoryWithBundleId:(id)arg1 withSuspendedMemory:(id)arg2 withPeakMemory:(id)arg3;
- (void)logAllPlugins;
- (void)logAllAppsAndVersions;
- (void)buildAppVersionDictionary;
- (id)extensionSetWithType:(id)arg1;
- (void)refreshAllAppsAndPlugins;
- (void)logEventPointApplication;
- (void)logEventPointApplicationForDisplayID:(id)arg1;
- (void)logInstalledAppWithProxy:(id)arg1 withBundleID:(id)arg2;
- (void)logUninstalledApp:(id)arg1;
- (void)logInstalledPlugin:(id)arg1;
- (void)logInstalledAppVersionWithProxy:(id)arg1 withBundleID:(id)arg2;
- (void)logUpdatedAppVersion:(id)arg1;
- (void)logUninstalledAppVersion:(id)arg1;
- (void)buildQueryWithQuery:(id)arg1 withKey:(id)arg2 withValue:(id)arg3;

@end
