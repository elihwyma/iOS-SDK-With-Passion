/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKHealthStore.h>

@interface HKHealthStore (HKUIAdditions)

+ (id)queryForMostRecentSampleOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)localizationStringSuffixForWheelchairUser:(_Bool)arg1;
+ (id)localizationStringAdditionForWheelchairUser;
+ (id)queryForMostRecentQuantityOfType:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_queryForMostRecentSampleOfType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_mostRecentStartDateSortDescriptorForQuantityType:(id)arg1;
+ (void)_processQuantitySample:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)_isHighFrequencyQuantityType:(id)arg1;
+ (void)_queryForHighFrequencyMostRecentQuantityOfType:(id)arg1 sample:(id)arg2 healthStore:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_processStatisticsCollection:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)_assignMostRecentQuantity:(id *)arg1 dateInterval:(id *)arg2 forQuantitySample:(id)arg3;
+ (id)queryForMostRecentQuantityOfType:(id)arg1 predicate:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (id)createMedicalIDData;
- (void)hk_fetchExistingDemographicInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)hk_fetchExistingDemographicInformationWithOptions:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_populateDemographicsWrapper:(id)arg1 withFirstName:(id)arg2 lastName:(id)arg3 meContact:(id)arg4;
- (id)hk_researchAppBundleIdentifiers;

@end
