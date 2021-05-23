/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class HKQuantity;

@interface _HKWorkoutGoalFilter : _HKFilter

{
    HKQuantity *_comparisonQuantity;
    unsigned long long _goalType;
    unsigned long long _operatorType;
}

@property (nonatomic, readonly) HKQuantity *comparisonQuantity;
@property (nonatomic, readonly) unsigned long long goalType;
@property (nonatomic, readonly) unsigned long long operatorType;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithComparisonQuantity:(id)arg1 goalType:(unsigned long long)arg2 operatorType:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
