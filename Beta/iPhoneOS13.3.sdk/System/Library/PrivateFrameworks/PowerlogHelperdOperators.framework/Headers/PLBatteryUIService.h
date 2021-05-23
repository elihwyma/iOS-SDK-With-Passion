/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogHelperdOperators/PLBatteryBreakdownService.h>

@class PLXPCResponderOperatorComposition;

@interface PLBatteryUIService : PLBatteryBreakdownService

{
    PLXPCResponderOperatorComposition *_batteryBreakdownResponder;
    PLXPCResponderOperatorComposition *_modelsResponder;
}

@property (retain) PLXPCResponderOperatorComposition *batteryBreakdownResponder;
@property (retain) PLXPCResponderOperatorComposition *modelsResponder;

+ (void)load;

- (id)init;
- (void)initOperatorDependancies;
- (id)batteryBreakdownAndGraphWithPayload:(id)arg1;
- (id)modelsWithPayload:(id)arg1;
- (_Bool)demoMode;
- (id)demoModePath;
- (struct _PLTimeIntervalRange)getlastDayRangeWithNow:(id)arg1 withNowSystem:(id)arg2;
- (struct _PLTimeIntervalRange)getlastXDayRangeWithNow:(id)arg1 withNowSystem:(id)arg2;
- (struct _PLTimeIntervalRange)getDataRangeWithNow:(id)arg1;
- (id)batteryBreakdownWithPayload:(id)arg1 withDayRange:(struct _PLTimeIntervalRange)arg2 withXDayRange:(struct _PLTimeIntervalRange)arg3 withDataRange:(struct _PLTimeIntervalRange)arg4;
- (id)modelsForGraphWithDayRange:(struct _PLTimeIntervalRange)arg1 withXDayRange:(struct _PLTimeIntervalRange)arg2 withDataRange:(struct _PLTimeIntervalRange)arg3 withQueryType:(int)arg4 andBatteryBreakdown:(id)arg5;
- (id)getLastChargeData;
- (void)incrementAggdKey;
- (id)generateTapBucketsForBucketSize:(int)arg1 withNumberOfBuckets:(int)arg2 withNowTime:(id)arg3 withDrainThreshold:(double)arg4 withQueryType:(int)arg5 withDataRange:(struct _PLTimeIntervalRange)arg6;
- (id)dateAndBatteryLevelPointsInRange:(struct _PLTimeIntervalRange)arg1;
- (id)getLPMIntervalsSpanningRange:(struct _PLTimeIntervalRange)arg1;
- (id)entriesInRange:(struct _PLTimeIntervalRange)arg1 fromEntries:(id)arg2;
- (_Bool)dateIntervals:(id)arg1 containDate:(id)arg2;
- (double)adjustScreenOnTimeSecsWithGraphValue:(double)arg1 queryType:(int)arg2 andBreakdownEntries:(id)arg3;
- (double)adjustScreenOffTimeSecsWithGraphValue:(double)arg1 withGraphScreenOnSecs:(double)arg2 queryType:(int)arg3 andBreakdownEntries:(id)arg4;
- (id)screenTimeInRange:(struct _PLTimeIntervalRange)arg1 withBucketSize:(double)arg2 withNumBuckets:(int)arg3 withDataRange:(struct _PLTimeIntervalRange)arg4 withQueryType:(int)arg5 andBatteryBreakdown:(id)arg6;
- (id)batteryLevelsAndChargingIntervalsInRange:(struct _PLTimeIntervalRange)arg1 withDataRange:(struct _PLTimeIntervalRange)arg2;
- (id)lastXDaysWithRange:(struct _PLTimeIntervalRange)arg1 withDataRange:(struct _PLTimeIntervalRange)arg2 withQueryType:(int)arg3 andBatteryBreakdown:(id)arg4;
- (_Bool)isAppEntryValidForAdjustment:(id)arg1 withQueryType:(int)arg2;
- (double)floorSeconds:(double)arg1;
- (void)testUIQuery;
- (_Bool)writeOutputDemo;

@end
