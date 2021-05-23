/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKUnit.h>

@class _HKDimension, _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKCompoundUnit : HKUnit

{
    _HKFactorization *_baseUnits;
    _HKDimension *_dimension;
    struct os_unfair_lock_s _dimensionLock;
}

+ (_Bool)supportsSecureCoding;
+ (id)unitWithBaseUnits:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dimension;
- (id)unitString;
- (id)_baseUnits;
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)arg1 withCycleSet:(id)arg2;
- (id)_initWithBaseUnits:(id)arg1;

@end
