/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDDemoDataFoodDatabase, NSArray;

@interface HDDemoDataFoodSampleGenerator : HDDemoDataBaseSampleGenerator

{
    HDDemoDataFoodDatabase *_foodDatabase;
    double _nextMealTime;
    double _nextBreakfastTime;
    double _nextLunchTime;
    double _nextSnackTime;
    double _nextDinnerTime;
    double _lastMealTime;
    NSArray *_lastMeal;
    double _nextBloodGlucoseSampleTime;
    double _nextBloodGlucoseFingerStickSampleTime;
    double _nextBloodGlucoseMealTime;
    double _lastBloodGlucose;
    double _nextInsulinPumpBasalSampleTime;
    double _carbohydratesLeftToDigest;
    double _bloodGlucoseCarbohydrateGlycemicRate;
    double _bloodGlucoseDecreaseRateDueToInsulin;
    double _nextWaterConsumedSampleTime;
}

@property (retain, nonatomic) HDDemoDataFoodDatabase *foodDatabase;
@property (nonatomic) double nextMealTime;
@property (nonatomic) double nextBreakfastTime;
@property (nonatomic) double nextLunchTime;
@property (nonatomic) double nextSnackTime;
@property (nonatomic) double nextDinnerTime;
@property (nonatomic) double lastMealTime;
@property (copy, nonatomic) NSArray *lastMeal;
@property (nonatomic) double nextBloodGlucoseSampleTime;
@property (nonatomic) double nextBloodGlucoseFingerStickSampleTime;
@property (nonatomic) double nextBloodGlucoseMealTime;
@property (nonatomic) double lastBloodGlucose;
@property (nonatomic) double nextInsulinPumpBasalSampleTime;
@property (nonatomic) double carbohydratesLeftToDigest;
@property (nonatomic) double bloodGlucoseCarbohydrateGlycemicRate;
@property (nonatomic) double bloodGlucoseDecreaseRateDueToInsulin;
@property (nonatomic) double nextWaterConsumedSampleTime;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateWaterAndCaffeineSampleForTodayIfNeededWith:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (double)totalDailyInsulinTherapyRequirementForDemoPerson:(id)arg1;
- (long long)mealTypeForTime:(double)arg1;
- (id)_mealForDemoPerson:(id)arg1 atTime:(double)arg2;
- (_Bool)_isTypicalNutritionTrackingQuantityType:(id)arg1;
- (double)_computeNutrientForDemoPerson:(id)arg1 atTime:(double)arg2 mealItem:(id)arg3 quantityType:(id)arg4;
- (id)basalInsulinInjectionForDemoPerson:(id)arg1 quantityType:(id)arg2 totalDailyInsulinInUnits:(double)arg3 sampleDate:(id)arg4;
- (id)bolusInsulinDeliveryForFoodItems:(id)arg1 totalDailyInsulinInUnits:(double)arg2;
- (id)bloodGlucoseForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)basalInsulinPumpDeliveryForDemoPerson:(id)arg1 quantityType:(id)arg2 totalDailyInsulinInUnits:(double)arg3 currentTime:(double)arg4 sampleDate:(id)arg5;
- (id)waterConsumedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computeMealTimeForDemoPerson:(id)arg1 fromTime:(double)arg2 mealTimeType:(long long)arg3 timeMean:(double)arg4 stdDev:(double)arg5;
- (double)_computeBloodGlucoseForDemoPerson:(id)arg1 atTime:(double)arg2 weight:(double)arg3;
- (double)basalInsulinDeliveryForTotalDailyInsulinInUnits:(double)arg1 timeInterval:(double)arg2;
- (double)_nextMealTimeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (_Bool)_isDemoPersonConsumingCaffeine:(id)arg1 atTime:(double)arg2;
- (void)_generateRandomLastMeal;
- (id)_lastMeal;

@end
