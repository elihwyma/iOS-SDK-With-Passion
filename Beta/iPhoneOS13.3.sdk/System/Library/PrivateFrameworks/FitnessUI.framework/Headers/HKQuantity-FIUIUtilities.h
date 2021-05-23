/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <HealthKit/HKQuantity.h>

@interface HKQuantity (FIUIUtilities)

- (_Bool)fiui_isNonzero;
- (double)fiui_doubleValueByDividingByQuantity:(id)arg1;

@end
