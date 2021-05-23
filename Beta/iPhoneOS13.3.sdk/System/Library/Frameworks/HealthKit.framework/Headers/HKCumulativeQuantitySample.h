/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity;

@interface HKCumulativeQuantitySample : HKQuantitySample

@property (copy, nonatomic, setter=_setSumQuantity:) HKQuantity *sumQuantity;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;

- (id)sum;

@end
