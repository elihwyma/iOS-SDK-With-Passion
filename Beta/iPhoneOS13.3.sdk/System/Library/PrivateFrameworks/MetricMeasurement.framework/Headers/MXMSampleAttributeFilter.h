/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMSampleAttribute.h>

#import <MetricMeasurement/Swift-Protocol.h>

@class NSArray, NSNumber, NSSet, NSString;

@interface MXMSampleAttributeFilter : MXMSampleAttribute <Swift>

{
    NSArray *_matchingStringAttributeValues;
    NSArray *_matchingNumericAttributeValues;
}

@property (nonatomic, readonly) _Bool finite;
@property (nonatomic, readonly, getter=finite) _Bool isFinite;
@property (copy, nonatomic, readonly) id value;
@property (copy, nonatomic, readonly) NSSet *values;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (copy, nonatomic, readonly) NSNumber *numericValue;
@property (copy, nonatomic, readonly) NSSet *stringValues;
@property (copy, nonatomic, readonly) NSSet *numericValues;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttribute:(id)arg1;
- (id)initWithAttributeName:(id)arg1 numericValue:(id)arg2;
- (id)initWithAttributeName:(id)arg1 stringValue:(id)arg2;
- (id)initWithAttributeName:(id)arg1 valueType:(long long)arg2 value:(id)arg3;
- (id)initWithAttributeName:(id)arg1 stringValues:(id)arg2;
- (id)initWithAttributeName:(id)arg1 numericValues:(id)arg2;
- (_Bool)_matchesSampleAttributeNameWithName:(id)arg1;
- (_Bool)_matchesSampleAttributeValueTypeWithAttributeValueType:(long long)arg1;
- (_Bool)_matchesSampleAttributeValueWithValue:(id)arg1;
- (_Bool)matchesSampleWithAttribute:(id)arg1;

@end
