/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKQuantitySample.h>

@interface HKQuantitySample (HKMostRecentValueDataProvider)

- (id)dataProviderValue;
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (void)addDetailValuesToSection:(id)arg1;

@end
