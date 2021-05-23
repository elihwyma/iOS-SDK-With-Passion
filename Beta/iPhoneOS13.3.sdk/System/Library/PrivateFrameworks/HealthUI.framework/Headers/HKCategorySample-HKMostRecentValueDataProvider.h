/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKCategorySample.h>

@interface HKCategorySample (HKMostRecentValueDataProvider)

- (id)dataProviderValue;
- (void)addDetailValuesToSection:(id)arg1;
- (void)_addHeartEventDetailValuesToSection:(id)arg1;
- (void)_addDefaultCategoryDetailValuesToSection:(id)arg1;

@end
