/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKUnit;

@interface HKQuantity : NSObject <Swift>

{
    HKUnit *_unit;
    double _value;
}

@property (nonatomic, readonly, getter=_unit) HKUnit *unit;
@property (nonatomic, readonly, getter=_value) double value;

+ (_Bool)supportsSecureCoding;
+ (id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2;
+ (id)_quantityWithBeatsPerMinute:(double)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)doubleValueForUnit:(id)arg1;
- (_Bool)isCompatibleWithUnit:(id)arg1;
- (id)_initWithUnit:(id)arg1 doubleValue:(double)arg2;
- (id)_quantityByAddingQuantity:(id)arg1;
- (_Bool)_isZero;
- (id)_foundationMeasurement;
- (_Bool)hk_isLessThanQuantity:(id)arg1;
- (_Bool)hk_isGreaterThanQuantity:(id)arg1;
- (double)_beatsPerMinute;

@end
