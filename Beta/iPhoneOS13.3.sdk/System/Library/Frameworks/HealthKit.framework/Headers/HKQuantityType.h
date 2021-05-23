/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSampleType.h>

@class HKUnit, _HKDimension;

@interface HKQuantityType : HKSampleType

{
    HKUnit *_canonicalUnit;
    struct os_unfair_lock_s _canonicalUnitLock;
}

@property (nonatomic, readonly) _HKDimension *dimension;
@property (nonatomic, readonly) HKUnit *canonicalUnit;
@property (readonly) long long aggregationStyle;

+ (id)_quantityTypeWithCode:(long long)arg1;

- (_Bool)isCompatibleWithUnit:(id)arg1;
- (id)_initWithCode:(long long)arg1;
- (void)validateUnit:(id)arg1;
- (_Bool)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id *)arg3;
- (void)validateUnitFromString:(id)arg1;

@end
