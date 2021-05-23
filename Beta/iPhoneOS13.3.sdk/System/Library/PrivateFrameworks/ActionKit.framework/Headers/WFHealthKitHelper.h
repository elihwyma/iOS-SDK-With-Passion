/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface WFHealthKitHelper : NSObject

+ (void)sourcesForSampleType:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sourceWithName:(id)arg1 ofSampleType:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)extractHKDataFromContentQuery:(id)arg1;
+ (void)setupHealthKitAccessResourcesInAction:(id)arg1;
+ (id)readableSampleTypes;
+ (id)localizedSampleTypes;
+ (void)validUnitsForQuantityType:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)localizedDisplayNameForUnit:(id)arg1 quantityTypeIdentifier:(id)arg2;
+ (id)sampleTypeIdentifierFromReadableTypeIdentifier:(id)arg1;
+ (id)readableSampleTypeIdentifierFromSampleTypeIdentifier:(id)arg1;
+ (id)readableCharacteristicTypes;
+ (id)readableBiologicalSexFromEnum:(long long)arg1;
+ (id)readableBloodTypeFromEnum:(long long)arg1;
+ (id)characteristicTypeIdentifierFromReadableTypeIdentifier:(id)arg1;
+ (id)readableTypeIdentifierFromCharacteristicTypeIdentifier:(id)arg1;
+ (id)readableWorkoutActivityTypes;
+ (_Bool)readableWorkoutActivityTypeIsValid:(id)arg1;
+ (unsigned long long)workoutActivityTypeFromReadableWorkoutActivityType:(id)arg1;
+ (id)readableWorkoutActivityTypeFromWorkoutActivityType:(unsigned long long)arg1;
+ (id)readableAppleStandingHourValues;
+ (id)readableCervicalMucusQualityValues;
+ (id)readableMenstrualFlowValues;
+ (id)readableMenstrualFlowIsStartOfCycleValues;
+ (id)readableOvulationTestResultValues;
+ (id)readableSleepAnalysisValues;
+ (id)readableSexualActivityValues;
+ (id)readableAppleStandingHourFromEnum:(long long)arg1;
+ (id)readableCervicalMucusQualityFromEnum:(long long)arg1;
+ (id)readableMenstrualFlowFromEnum:(long long)arg1;
+ (id)readableMenstrualFlowIsStartOfCycleFromBool:(_Bool)arg1;
+ (id)readableOvulationTestResultFromEnum:(long long)arg1;
+ (id)readableSleepAnalysisFromEnum:(long long)arg1;
+ (id)readableSexualActivityFromBool:(_Bool)arg1;
+ (long long)enumFromReadableAppleStandingHour:(id)arg1;
+ (long long)enumFromReadableCervicalMucusQuality:(id)arg1;
+ (long long)enumFromReadableMenstrualFlow:(id)arg1;
+ (id)boolFromReadableMenstrualFlowIsStartOfCycle:(id)arg1;
+ (long long)enumFromReadableOvulationTestResult:(id)arg1;
+ (long long)enumFromReadableSleepAnalysis:(id)arg1;
+ (id)boolFromReadableSexualActivity:(id)arg1;
+ (id)readableInsulinDeliveryReasonValues;
+ (id)readableBloodGlucoseMealTimeValues;
+ (id)readableVO2MaxTestTypeValues;
+ (id)readableInsulinDeliveryReasonFromEnum:(long long)arg1;
+ (id)readableBloodGlucoseMealTimeFromEnum:(long long)arg1;
+ (id)readableVO2MaxTestTypeFromEnum:(long long)arg1;
+ (long long)enumFromReadableInsulinDeliveryReason:(id)arg1;
+ (long long)enumFromReadableBloodGlucoseMealTime:(id)arg1;
+ (long long)enumFromReadableVO2MaxTestType:(id)arg1;

@end
