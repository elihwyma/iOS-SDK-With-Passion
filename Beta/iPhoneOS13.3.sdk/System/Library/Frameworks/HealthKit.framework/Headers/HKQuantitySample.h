/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

@class HDCodableQuantitySample, HKQuantity, HKQuantityType;

@interface HKQuantitySample : HKSample

{
    HKQuantity *_quantity;
    long long _freezeState;
    long long _count;
    HDCodableQuantitySample *_codableQuantitySample;
}

@property (nonatomic, getter=_frozen, setter=_setFrozen:) _Bool frozen;
@property (retain, nonatomic, setter=_setCodableQuantitySample:) HDCodableQuantitySample *codableQuantitySample;
@property (copy, readonly) HKQuantityType *quantityType;
@property (copy, readonly) HKQuantity *quantity;
@property (readonly) long long count;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (id)_unfrozenQuantitySampleWithQuantityType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 device:(id)arg4;
+ (id)_quantitySamplesEnforcingDurationWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)_valueDescription;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (void)_setCount:(long long)arg1;
- (void)_setQuantity:(id)arg1;
- (_Bool)_shouldNotifyOnInsert;
- (void)_setFreezing;
- (long long)_compareFreezeStateWithSample:(id)arg1;

@end
