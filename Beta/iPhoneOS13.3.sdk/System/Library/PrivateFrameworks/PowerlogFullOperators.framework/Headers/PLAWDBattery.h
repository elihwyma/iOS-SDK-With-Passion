/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition;

@interface PLAWDBattery : PLAWDAuxMetrics

{
    _Bool _prevDeviceCharging;
    _Bool _prevDisplayON;
    PLEntryNotificationOperatorComposition *_batteryEventCallback;
    PLEntryNotificationOperatorComposition *_displayEventCallback;
    double _prevCapacity;
    double _prevVoltage;
    long long _dispOnOffCnt;
    double _prevDispTimeStamp;
    long long _batterySubmitCnt;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback;
@property double prevCapacity;
@property double prevVoltage;
@property _Bool prevDeviceCharging;
@property _Bool prevDisplayON;
@property long long dispOnOffCnt;
@property double prevDispTimeStamp;
@property long long batterySubmitCnt;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryAggregateDefinitionAwdBattery;

- (void)handleBatteryCallback:(id)arg1;
- (void)handleDisplayCallback:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (_Bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)initBatteryStats;
- (void)resetBatteryTable;
- (_Bool)isDeviceCharging:(id)arg1;
- (void)addEntryToBatteryTable:(id)arg1 withValue:(double)arg2;
- (void)processEnergyConsumedAndAddEntry:(double)arg1 withVoltage:(double)arg2;
- (void)finalizeBatteryTable;
- (void)reInitBatteryStats;

@end
