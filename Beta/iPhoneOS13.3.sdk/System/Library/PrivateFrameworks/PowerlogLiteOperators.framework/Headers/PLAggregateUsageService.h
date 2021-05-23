/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class PLEntryNotificationOperatorComposition, PLIntervalData, PowerUISmartChargeClient;

@interface PLAggregateUsageService : PLService

{
    PLEntryNotificationOperatorComposition *_displayOnNotification;
    PLEntryNotificationOperatorComposition *_displayOffNotification;
    PLEntryNotificationOperatorComposition *_wakeEntryNotification;
    PLEntryNotificationOperatorComposition *_sleepEntryNotification;
    PLEntryNotificationOperatorComposition *_audioEntryNotification;
    PLEntryNotificationOperatorComposition *_batteryIsChargingEntryNotification;
    PLEntryNotificationOperatorComposition *_batteryExternalConnectedEntryNotification;
    PLEntryNotificationOperatorComposition *_chargingEntryNotification;
    PLEntryNotificationOperatorComposition *_lockStateEntryNotification;
    PLIntervalData *_intervalData;
    PowerUISmartChargeClient *_smartChargingClient;
}

@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *sleepEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *audioEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *batteryIsChargingEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *batteryExternalConnectedEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *chargingEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *lockStateEntryNotification;
@property (retain) PLIntervalData *intervalData;
@property (retain) PowerUISmartChargeClient *smartChargingClient;

+ (void)load;
+ (id)defaults;

- (id)init;
- (void)testService;
- (void)initOperatorDependancies;
- (void)handleConnectedChange:(id)arg1;
- (void)instantiateMetrics;
- (void)initializeMetrics;
- (void)registerForEntryNotifications;
- (void)scheduleSubmissionAfter:(unsigned long long)arg1;
- (void)getSmartChargingBitmap;
- (void)handleScreenStateChange:(id)arg1 withState:(_Bool)arg2;
- (void)handleWakeStateChange:(id)arg1 withState:(_Bool)arg2;
- (void)handleAudioStateChange:(id)arg1;
- (void)handleLockStateChange:(id)arg1;
- (void)handleChargingChange:(id)arg1;
- (void)handleExternalConnectedChange:(id)arg1;
- (void)submitMetricsToAggd;
- (int)numIntervalsToFill;
- (void)updateSampledMetrics;
- (void)handleLargeTimeGap;

@end
