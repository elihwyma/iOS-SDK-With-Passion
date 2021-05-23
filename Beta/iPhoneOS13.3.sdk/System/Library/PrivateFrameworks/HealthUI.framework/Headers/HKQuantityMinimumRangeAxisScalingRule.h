/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKAbstractMinimumRangeScalingRule.h>

@class HKQuantity, HKUnit, NSDictionary;

@interface HKQuantityMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule

{
    HKQuantity *_defaultYAxisRangeQuantity;
    NSDictionary *_axisRangeQuantityOverrides;
    HKUnit *_unit;
}

@property (retain, nonatomic) HKUnit *unit;

+ (id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2;

- (_Bool)isCompatibleWithQuantityType:(id)arg1;
- (void)_convertQuantities;

@end
