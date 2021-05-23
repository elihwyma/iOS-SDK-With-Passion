/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKAbstractFixedAxisScalingRule.h>

@class HKUnit, HKValueRange, NSDictionary;

@interface HKQuantityFixedAxisScalingRule : HKAbstractFixedAxisScalingRule

{
    HKValueRange *_defaultQuantityBounds;
    NSDictionary *_quantityBoundsOverrides;
    HKUnit *_unit;
}

@property (retain, nonatomic) HKUnit *unit;

+ (id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2;

- (_Bool)isCompatibleWithQuantityType:(id)arg1;
- (void)_convertQuantityRanges;
- (id)_numberRangeFromQuantityRangeForUnit:(id)arg1 quantityRange:(id)arg2;

@end
