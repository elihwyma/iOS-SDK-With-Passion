/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity, NSDateInterval;

@interface HKDiscreteQuantitySample : HKQuantitySample

{
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
    HKQuantity *_mostRecentQuantity;
    NSDateInterval *_mostRecentQuantityDateInterval;
    _Bool __hasMinimumQuantity;
    _Bool __hasMaximumQuantity;
    _Bool __hasMostRecentQuantity;
    _Bool __hasMostRecentQuantityDateInterval;
}

@property (copy, nonatomic, setter=_setMinimumQuantity:) HKQuantity *minimumQuantity;
@property (copy, nonatomic, setter=_setAverageQuantity:) HKQuantity *averageQuantity;
@property (copy, nonatomic, setter=_setMaximumQuantity:) HKQuantity *maximumQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantity:) HKQuantity *mostRecentQuantity;
@property (copy, nonatomic, setter=_setMostRecentQuantityDateInterval:) NSDateInterval *mostRecentQuantityDateInterval;
@property (nonatomic) _Bool _hasMinimumQuantity;
@property (nonatomic) _Bool _hasMaximumQuantity;
@property (nonatomic) _Bool _hasMostRecentQuantity;
@property (nonatomic) _Bool _hasMostRecentQuantityDateInterval;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;

@end
