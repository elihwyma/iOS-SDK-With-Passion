/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class HKQuantity, NSArray, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel

{
    _Bool _databaseLoading;
    _Bool _deviceLocked;
    HKQuantity *_activeEnergyTotal;
    HKQuantity *_activeEnergyGoal;
    double _appleExerciseTimeTotal;
    double _appleExerciseTimeGoal;
    long long _appleStandHoursTotal;
    long long _appleStandHoursGoal;
    NSArray *_activeEnergyChartData;
    NSArray *_appleExerciseTimeChartData;
    NSArray *_appleStandHourChartData;
}

@property (nonatomic) _Bool databaseLoading;
@property (retain, nonatomic) HKQuantity *activeEnergyTotal;
@property (retain, nonatomic) HKQuantity *activeEnergyGoal;
@property (nonatomic) double appleExerciseTimeTotal;
@property (nonatomic) double appleExerciseTimeGoal;
@property (nonatomic) long long appleStandHoursTotal;
@property (nonatomic) long long appleStandHoursGoal;
@property (retain, nonatomic) NSArray *activeEnergyChartData;
@property (retain, nonatomic) NSArray *appleExerciseTimeChartData;
@property (retain, nonatomic) NSArray *appleStandHourChartData;
@property (nonatomic, readonly) _Bool userHasDoneActivitySetup;
@property (nonatomic, readonly) _Bool deviceLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)formattingManager;
+ (id)idealizedEntryModel;
+ (id)lockedEntryModel;
+ (id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)_signatureCornerFromModel:(id)arg1;
+ (id)_signatureBezelFromModel:(id)arg1;
+ (id)_signatureRectangleFromModel:(id)arg1;
+ (id)_LocalizedStringWithActiveEnergy:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (long long)availabilityState;
- (id)templateForComplicationFamily:(long long)arg1;
- (double)activeEnergyCompletionPercentage;
- (double)appleExerciseTimeCompletionPercentage;
- (double)appleStandHourCompletionPercentage;
- (id)loggingString;

@end
