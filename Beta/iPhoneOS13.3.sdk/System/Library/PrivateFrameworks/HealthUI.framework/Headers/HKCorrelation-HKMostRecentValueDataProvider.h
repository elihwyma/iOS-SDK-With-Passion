/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKCorrelation.h>

@interface HKCorrelation (HKMostRecentValueDataProvider)

- (id)dataProviderValue;
- (void)addDetailValuesToSection:(id)arg1;
- (void)_hk_bloodPressureDetailRowsWithSection:(id)arg1;
- (void)_hk_bloodPressureDetailRowForSampleType:(id)arg1 title:(id)arg2 section:(id)arg3;

@end
