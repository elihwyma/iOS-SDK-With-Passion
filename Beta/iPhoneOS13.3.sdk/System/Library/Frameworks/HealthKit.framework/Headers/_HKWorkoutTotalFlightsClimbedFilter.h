/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class HKQuantity;

@interface _HKWorkoutTotalFlightsClimbedFilter : _HKFilter

{
    HKQuantity *_totalFlightsClimbed;
    unsigned long long _operatorType;
}

@property (nonatomic, readonly) HKQuantity *totalFlightsClimbed;
@property (nonatomic, readonly) unsigned long long operatorType;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithTotalFlightsClimbed:(id)arg1 operatorType:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
