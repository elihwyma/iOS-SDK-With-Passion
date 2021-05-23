/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

#import <MetricMeasurement/Swift-Protocol.h>

@class MXMSampleTag, NSData, NSMeasurement, NSNumber, NSSet, NSString, NSUnit;

@interface MXMSample : NSObject <Swift>

{
    NSUnit *_unit;
    void *_underlyingValue;
    unsigned long long _underlyingValueLength;
    NSData *_date;
    unsigned long long _timestamp;
    NSSet *_attributes;
    unsigned long long _valueType;
    unsigned long long _length;
    MXMSampleTag *_tag;
}

@property (copy, nonatomic, readonly) NSMeasurement *asMeasurementValue;
@property (copy, nonatomic, readonly) NSNumber *asNumberValue;
@property (nonatomic, readonly) double floatValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) unsigned long long unsignedValue;
@property (nonatomic, readonly) NSData *date;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (copy, nonatomic, readonly) NSSet *attributes;
@property (nonatomic, readonly) unsigned long long valueType;
@property (nonatomic, readonly) unsigned long long length;
@property (copy, nonatomic, readonly) NSUnit *unit;
@property (nonatomic, readonly) MXMSampleTag *tag;
@property (copy, nonatomic, readonly) NSString *shortDesc;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3 unit:(id)arg4 timestamp:(unsigned long long)arg5;
- (id)attributeWithName:(id)arg1;
- (const double *)numberValueDouble;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 doubleValue:(double)arg3;
- (id)initWithTag:(id)arg1 attributes:(id)arg2 pixelBufferValue:(struct __CVBuffer *)arg3;
- (id)convertToUnit:(id)arg1;

@end
