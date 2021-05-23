/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString, PLCFNotificationOperatorComposition, PLMonotonicTimer, PLXPCResponderOperatorComposition;

@interface PLAggregateDictionaryService : PLService

{
    double remainderUnpluggedEnergy;
    double remainderUnpluggedTime;
    _Bool _firstScreenOnAfterWake;
    NSMutableArray *_registeredNotifications;
    PLMonotonicTimer *_dailyTaskTimer;
    PLCFNotificationOperatorComposition *_blmAggregateCFNotification;
    NSNumber *_currentMachWakeTime;
    NSString *_wakeReasons;
    NSString *_wakeReasonString;
    NSMutableDictionary *_validReasonsDictionary;
    PLCFNotificationOperatorComposition *_aggregateMetricsListener;
    PLCFNotificationOperatorComposition *_aggregateMetricsForceListener;
    PLCFNotificationOperatorComposition *_aggregateMetricsTodayListener;
    PLCFNotificationOperatorComposition *_aggregateMetricsTodayForceListener;
    PLCFNotificationOperatorComposition *_aggregateMetrics24hrsListener;
    PLCFNotificationOperatorComposition *_aggregateMetrics24hrsForceListener;
    PLCFNotificationOperatorComposition *_aggregateMetrics1hrListener;
    PLCFNotificationOperatorComposition *_aggregateMetrics1hrForceListener;
    PLXPCResponderOperatorComposition *_metricSummarizationStateResponder;
    struct AggState _last_state;
}

@property (retain) NSMutableArray *registeredNotifications;
@property (retain) PLMonotonicTimer *dailyTaskTimer;
@property (retain) PLCFNotificationOperatorComposition *blmAggregateCFNotification;
@property struct AggState last_state;
@property _Bool firstScreenOnAfterWake;
@property (retain) NSNumber *currentMachWakeTime;
@property (retain) NSString *wakeReasons;
@property (retain) NSString *wakeReasonString;
@property (retain) NSMutableDictionary *validReasonsDictionary;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrForceListener;
@property (retain) PLXPCResponderOperatorComposition *metricSummarizationStateResponder;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventNoneDefinitionSessionsFile;
+ (_Bool)metrickitClientsAvailable;

- (id)init;
- (void)initOperatorDependancies;
- (void)initValidReasonsDictionary;
- (void)registerForAudioNotifications;
- (void)registerForCameraNotifications;
- (void)registerForBluetoothNotifications;
- (void)registerForUIKitNotifications;
- (void)registerForSpringboardNotifications;
- (void)registerForVideoNotifications;
- (void)registerForMailNotifications;
- (void)registerForStoreNotifications;
- (void)registerForCalendarNotifications;
- (void)registerForCoreMediaNotifications;
- (void)registerForApplicationNotifications;
- (void)registerForLocationNotifications;
- (void)registerForBatteryNotifications;
- (void)registerForSCDynamicStoreNotifications;
- (void)registerForSafariNotifications;
- (void)registerForBacklightLatencyNotifications;
- (void)setupMetricsAggregation;
- (void)addToDurationScalarKey:(id)arg1 withDuration:(double)arg2;
- (void)logDuration:(double)arg1 asDistribution:(id)arg2;
- (void)logAggregateUIKitKeyboardActivityKey:(id)arg1 withInfo:(id)arg2 AggDKey:(id)arg3;
- (void)logAggregateUIKitActivityKey:(id)arg1 withInfo:(id)arg2 AggDKey:(id)arg3;
- (void)updateAggregateStateWithEntry:(id)arg1;
- (unsigned long long)abstimeToNanosec:(unsigned long long)arg1;
- (unsigned long long)bucketWakeTime:(unsigned long long)arg1;
- (void)setupMetricsListeners;
- (void)createMetricsFile:(id)arg1;
- (void)logEventNoneSessionsFile;
- (void)registerForAssertionNotifications;

@end
