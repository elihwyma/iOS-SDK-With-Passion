/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class HKQuantity, HKQuantityType;

@interface _HKQuantityFilter : _HKFilter

{
    HKQuantity *_comparisonQuantity;
    HKQuantityType *_dataType;
    unsigned long long _operatorType;
}

@property (nonatomic, readonly) HKQuantity *comparisonQuantity;
@property (nonatomic, readonly) HKQuantityType *dataType;
@property (nonatomic, readonly) unsigned long long operatorType;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 comparisonQuantity:(id)arg2 dataType:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;
- (_Bool)acceptsDataObjectWithStartTimestamp:(double)arg1 endTimestamp:(double)arg2 valueInCanonicalUnit:(double)arg3;

@end
