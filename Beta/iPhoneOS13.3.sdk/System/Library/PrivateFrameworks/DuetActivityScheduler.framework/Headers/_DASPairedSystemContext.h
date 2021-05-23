/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log, _CDContext, _DKKnowledgeQuerying;

@interface _DASPairedSystemContext : NSObject

{
    _Bool _previousPluginStatus;
    int _previousMaxThermalPressure;
    int _recentTrafficSyncRequests;
    int _remoteForecastDeletionToken;
    id <_CDContext> _context;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    NSString *_identifier;
    NSUserDefaults *_persistence;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _onConditionsChange;
    CDUnknownBlockType _onApplicationStateChange;
    double _previousDefaultThreshold;
    double _previousSyncThreshold;
    double _previousBatteryLevel;
    NSMutableDictionary *_watchKitAppStatus;
    NSString *_foregroundWatchApp;
    NSMutableDictionary *_recentlyBackgroundedApps;
    NSArray *_previousExclusiveIdentifiers;
    NSMutableSet *_previousForegroundApps;
    NSDictionary *_remoteAppLaunchCount;
    NSMutableDictionary *_launchedAppCount;
    NSObject<OS_dispatch_source> *_appUsageRefreshTimer;
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) id <_CDContext> context;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUserDefaults *persistence;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) CDUnknownBlockType onConditionsChange;
@property (copy, nonatomic) CDUnknownBlockType onApplicationStateChange;
@property (nonatomic) int previousMaxThermalPressure;
@property (nonatomic) double previousDefaultThreshold;
@property (nonatomic) double previousSyncThreshold;
@property (nonatomic) double previousBatteryLevel;
@property (nonatomic) _Bool previousPluginStatus;
@property (retain, nonatomic) NSMutableDictionary *watchKitAppStatus;
@property (nonatomic) int recentTrafficSyncRequests;
@property (retain) NSString *foregroundWatchApp;
@property (retain, nonatomic) NSMutableDictionary *recentlyBackgroundedApps;
@property (retain) NSArray *previousExclusiveIdentifiers;
@property (retain, nonatomic) NSMutableSet *previousForegroundApps;
@property (retain) NSDictionary *remoteAppLaunchCount;
@property (retain) NSMutableDictionary *launchedAppCount;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *appUsageRefreshTimer;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) int remoteForecastDeletionToken;

+ (void)initialize;
+ (id)stringForPriority:(unsigned long long)arg1;
+ (id)stringForThermalLevel:(int)arg1;
+ (id)contextWithClientIdentifier:(id)arg1 callbackQueue:(id)arg2 systemConditionChangeCallback:(CDUnknownBlockType)arg3 trafficCancelationHandler:(CDUnknownBlockType)arg4;

- (void)readBudgetForRecentlyBackgroundedAppSyncTraffic;
- (void)updateAppUsageHistory;
- (void)registerForContextChanges;
- (void)deleteRemoteHistogram;
- (id)initWithClientIdentifier:(id)arg1 context:(id)arg2 knowledgeStore:(id)arg3 callbackQueue:(id)arg4 systemConditionChangeCallback:(CDUnknownBlockType)arg5 trafficCancelationHander:(CDUnknownBlockType)arg6;
- (void)handleConditionChange;
- (_Bool)isWatchPluggedIn;
- (int)watchBatteryLevel;
- (void)handleAppStateChange;
- (double)usageThresholdForPriority:(unsigned long long)arg1 batteryLevel:(int)arg2 isPluggedIn:(_Bool)arg3;
- (void)resetBudgetForRecentlyBackgroundedAppSyncTraffic;
- (void)handleWatchAppBackgrounded;
- (_Bool)didHandleExclusiveAppChange;
- (_Bool)foregroundApplicationsAllowSendingTrafficForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 furtherChecksNecessary:(_Bool *)arg3;
- (_Bool)thermalLevelsAllowSendingTrafficeForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2;
- (_Bool)thirdPartyAppPolicyAllowsSendingTrafficForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 furtherChecksNecessary:(_Bool *)arg3;
- (_Bool)batteryLevelsAllowSendingTrafficeForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2;
- (_Bool)isAnyThirdPartyApp:(id)arg1;
- (_Bool)allowSyncTrafficForRecentlyBackgroundedApp;
- (id)pairedDeviceStream;
- (_Bool)shouldBypassApplicationUsage:(id)arg1;
- (double)usageLikelihoodForApplication:(id)arg1;
- (_Bool)allowsSendingTrafficeForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 isReunionOrInitialSync:(_Bool)arg3 responseValidityDuration:(double *)arg4;
- (void)setWatchKitStatus:(_Bool)arg1 forApplication:(id)arg2;

@end
