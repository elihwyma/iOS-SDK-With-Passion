/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKQuantityType.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HKSampleType, HKUnit;

@interface _HDStatisticsSyntheticQuantityType : HKQuantityType <Swift>

{
    HKSampleType *_underlyingSampleType;
    long long _overriddenAggregationStyle;
    HKUnit *_overriddenCanonicalUnit;
}

@property (copy, nonatomic, readonly) HKSampleType *underlyingSampleType;
@property (nonatomic, readonly) long long overriddenAggregationStyle;
@property (copy, nonatomic, readonly) HKUnit *overriddenCanonicalUnit;

+ (_Bool)supportsSecureCoding;
+ (id)syntheticQuantityTypeWithUnderlyingSampleType:(id)arg1 aggregationStyle:(long long)arg2 canonicalUnit:(id)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)aggregationStyle;
- (id)canonicalUnit;
- (Class)dataObjectClass;
- (id)_initWithUnderlyingSampleType:(id)arg1 aggregationStyle:(long long)arg2 canonicalUnit:(id)arg3;

@end
