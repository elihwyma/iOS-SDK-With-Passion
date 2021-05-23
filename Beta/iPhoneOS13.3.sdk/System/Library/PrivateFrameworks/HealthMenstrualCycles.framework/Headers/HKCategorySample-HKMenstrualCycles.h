/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

#import <HealthKit/HKCategorySample.h>

@interface HKCategorySample (HKMenstrualCycles)

+ (id)hkmc_categorySampleWithMenstrualFlow:(long long)arg1 date:(id)arg2 startOfCycle:(_Bool)arg3;
+ (id)hkmc_categorySampleWithCervicalMucusQuality:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithOvulationTestResult:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithSexualActivity:(long long)arg1 date:(id)arg2;
+ (id)hkmc_categorySampleWithMenstrualSymptom:(unsigned long long)arg1 date:(id)arg2;
+ (id)hkmc_intermenstrualBleedingCategorySampleWithDate:(id)arg1;

- (long long)hkmc_daySummaryMenstrualFlow;
- (long long)hkmc_daySummaryCervicalMucusQuality;
- (long long)hkmc_daySummaryOvulationTestResult;
- (long long)hkmc_daySummarySexualActivity;
- (unsigned long long)hkmc_daySummarySymptom;

@end
