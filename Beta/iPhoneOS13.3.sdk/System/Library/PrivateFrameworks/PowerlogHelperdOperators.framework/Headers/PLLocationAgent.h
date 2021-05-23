/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSNumber, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;

@interface PLLocationAgent : PLAgent

{
    PLCFNotificationOperatorComposition *_techStatusChangedNotification;
    NSDate *_lastTechStatusNotificationDate;
    NSNumber *_techStatusLimiterIsActive;
    PLXPCListenerOperatorComposition *_logLevelNotification;
    PLXPCListenerOperatorComposition *_statusBarNotification;
    PLXPCListenerOperatorComposition *_clientStatusNotification;
    PLXPCListenerOperatorComposition *_locationGPSListener;
    PLEntryNotificationOperatorComposition *_sbcLevelChanged;
    NSMutableDictionary *_clientStatusTypeStrings;
    NSMutableSet *_processes;
    NSMutableDictionary *_bundleIDToWeightUsingGPSCache;
    NSMutableDictionary *_bundleIDToWeightUsingWiFiCache;
    NSMutableDictionary *_bundleIDToWeightUsingLocationCache;
    NSMutableDictionary *_activeClients;
    NSMutableSet *_activeBackgroundLocationClients;
    NSDate *_lastResyncActiveClientsDate;
    double _gps_segment_power;
    NSDate *_gps_segment_lastWrittenDate;
    double _gps_segment_lastWrittenTimestamp;
    NSDate *_gps_segment_date;
    double _gps_segment_timestamp;
}

@property (retain) PLCFNotificationOperatorComposition *techStatusChangedNotification;
@property (retain) NSDate *lastTechStatusNotificationDate;
@property (retain) NSNumber *techStatusLimiterIsActive;
@property (retain) PLXPCListenerOperatorComposition *logLevelNotification;
@property (retain) PLXPCListenerOperatorComposition *statusBarNotification;
@property (retain) PLXPCListenerOperatorComposition *clientStatusNotification;
@property (retain) PLXPCListenerOperatorComposition *locationGPSListener;
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged;
@property (retain) NSMutableDictionary *clientStatusTypeStrings;
@property (retain) NSMutableSet *processes;
@property (retain) NSMutableDictionary *bundleIDToWeightUsingGPSCache;
@property (retain) NSMutableDictionary *bundleIDToWeightUsingWiFiCache;
@property (retain) NSMutableDictionary *bundleIDToWeightUsingLocationCache;
@property (retain) NSMutableDictionary *activeClients;
@property (retain) NSMutableSet *activeBackgroundLocationClients;
@property (retain) NSDate *lastResyncActiveClientsDate;
@property double gps_segment_power;
@property (retain) NSDate *gps_segment_lastWrittenDate;
@property double gps_segment_lastWrittenTimestamp;
@property (retain) NSDate *gps_segment_date;
@property double gps_segment_timestamp;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionClientStatus;
+ (id)entryEventForwardDefinitionTechStatus;
+ (id)entryEventForwardDefinitionClientStatus;
+ (id)entryEventForwardDefinitionLogLevel;
+ (id)entryEventForwardDefinitionStatusBar;
+ (id)entryEventNoneDefinitionClientStatusDebug;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)processesOfInterest:(id)arg1;
- (void)writeModeledPower;
- (void)logEventForwardTechStatus_withLimiter;
- (void)logEventForwardClientStatuswithPayload:(id)arg1;
- (void)UpdateGnssPowerMetric:(id)arg1;
- (_Bool)shouldRateLimitTechStatus;
- (void)logEventForwardTechStatus;
- (id)humanReadableNameForTechnology:(id)arg1;
- (void)updateLocalCacheWithClient:(id)arg1 withType:(id)arg2 withEntry:(id)arg3;
- (void)updateClientsLocationInfo:(id)arg1;
- (void)resyncActiveClients;
- (void)logEventNoneClientStatusDebugWithClients:(id)arg1;
- (id)lastEntryWithClient:(id)arg1 withType:(id)arg2 withEntryKey:(id)arg3;
- (id)getOpenEntryForClientSettings:(id)arg1 withTimeStarted:(id)arg2 withClient:(id)arg3 withType:(id)arg4 withEntryKey:(id)arg5;
- (void)closeOpenEntryForClient:(id)arg1 withOpenEntry:(id)arg2 withTimeStopped:(id)arg3;
- (void)updateLocationDistributionEvents;
- (void)updateLocationQualificationEvents;
- (void)modelGpsSegmentPower:(id)arg1 withGpsPower:(double)arg2 withTotalDuration:(double)arg3;
- (void)logEventPointClientStatus;
- (void)logEventNoneClientStatus;

@end
