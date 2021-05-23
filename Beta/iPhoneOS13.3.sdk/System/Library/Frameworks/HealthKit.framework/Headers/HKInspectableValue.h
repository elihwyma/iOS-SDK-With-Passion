/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKCodedQuantity, HKCodedValueCollection, HKMedicalDate, HKMedicalDateInterval, HKRatioValue, HKUCUMUnitDisplayConverter, NSArray, NSDateComponents, NSString;

@protocol NSObject><NSSecureCoding;

@interface HKInspectableValue : NSObject <Swift>

{
    long long _valueType;
    id <NSObject><NSSecureCoding> _value;
}

@property (nonatomic, readonly) HKUCUMUnitDisplayConverter *converter;
@property (nonatomic, readonly) id <NSObject><NSSecureCoding> value;
@property (nonatomic, readonly) long long valueType;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (copy, nonatomic, readonly) HKCodedQuantity *codedQuantityValue;
@property (copy, nonatomic, readonly) HKRatioValue *ratioValue;
@property (copy, nonatomic, readonly) HKMedicalDate *medicalDateValue;
@property (copy, nonatomic, readonly) HKMedicalDateInterval *medicalDateIntervalValue;
@property (copy, nonatomic, readonly) NSDateComponents *dateComponentsValue;
@property (copy, nonatomic, readonly) NSArray *medicalCodings;
@property (copy, nonatomic, readonly) HKCodedValueCollection *codedValueCollection;
@property (copy, nonatomic, readonly) NSArray *dataAbsentReasonCodings;
@property (nonatomic, readonly) NSString *unitString;

+ (_Bool)supportsSecureCoding;
+ (id)inspectableValueWithCodedQuantity:(id)arg1;
+ (id)inspectableValueWithNull;
+ (id)inspectableValueWithValueType:(long long)arg1 value:(id)arg2;
+ (id)inspectableValueWithString:(id)arg1;
+ (id)inspectableValueWithRatio:(id)arg1;
+ (id)inspectableValueWithMedicalDate:(id)arg1;
+ (id)inspectableValueWithMedicalDateInterval:(id)arg1;
+ (id)inspectableValueWithDateComponents:(id)arg1;
+ (id)inspectableValueWithMedicalCodings:(id)arg1;
+ (id)inspectableValueWithCodedValueCollection:(id)arg1;
+ (id)inspectableValueWithDataAbsentReasonCodings:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithValueType:(long long)arg1 value:(id)arg2;
- (void)_assertValueType;
- (id)_unitStringForCodedValueCollection:(id)arg1;
- (void)_assertValueClass:(Class)arg1;

@end
