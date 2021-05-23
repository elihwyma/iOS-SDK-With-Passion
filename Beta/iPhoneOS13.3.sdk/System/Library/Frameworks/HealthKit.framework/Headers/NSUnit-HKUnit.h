/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSUnit.h>

@interface NSUnit (HKUnit)

+ (double)hk_conversionCoefficient:(id)arg1;
+ (double)hk_conversionConstant:(id)arg1;
+ (_Bool)hk_isSIUnit:(id)arg1;
+ (id)hk_prefixForCoefficient:(double)arg1;
+ (_Bool)hk_equalCoefficient:(double)arg1 forUnit:(id)arg2;
+ (_Bool)hk_equalConstant:(double)arg1 forUnit:(id)arg2;

- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;
- (id)hk_equivalentUnit;
- (id)hk_convertQuantityWithValue:(double)arg1 constant:(double)arg2 coefficient:(double)arg3;
- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentQuantityWithValue:(double)arg1;

@end
