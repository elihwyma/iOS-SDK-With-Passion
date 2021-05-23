/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

#import <MetricMeasurement/Swift-Protocol.h>

@class MXMSample, MXMSampleTag, MXMSampleTimeSeries, NSArray, NSMutableDictionary, NSSet, NSUnit;

@interface MXMSampleSet : NSObject <Swift>

{
    MXMSampleTag *_tag;
    NSUnit *_unit;
    MXMSampleTimeSeries *_timeIndex;
    CDStruct_4bcfbbae *_index;
    void *_underlyingBuffer;
    long long _underlyingBufferLength;
    NSArray *_cachedSamples;
    NSMutableDictionary *_attributesMap;
}

@property (nonatomic, readonly) MXMSample *min;
@property (nonatomic, readonly) MXMSample *max;
@property (nonatomic, readonly) MXMSample *distance;
@property (nonatomic, readonly) MXMSampleSet *range;
@property (nonatomic, readonly) MXMSample *geoMean;
@property (nonatomic, readonly) MXMSample *standardDeviation;
@property (nonatomic, readonly) MXMSample *relativeStandardDeviation;
@property (nonatomic, readonly) MXMSample *sum;
@property (nonatomic) CDStruct_4bcfbbae *index;
@property (nonatomic) void *underlyingBuffer;
@property (nonatomic) long long underlyingBufferLength;
@property (retain) NSArray *cachedSamples;
@property (nonatomic, readonly) NSMutableDictionary *attributesMap;
@property (copy, readonly) NSSet *attributes;
@property (readonly) double *doubleValues;
@property (readonly) double *firstDoubleValue;
@property (readonly) double *lastDoubleValue;
@property (readonly) MXMSampleTag *tag;
@property (readonly) NSUnit *unit;
@property (retain, readonly) MXMSampleTimeSeries *timeIndex;
@property (copy, readonly) NSArray *samples;
@property (readonly) unsigned long long length;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 unit:(id)arg2 attributes:(id)arg3;
- (id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 doubleValues:(double *)arg5 length:(unsigned long long)arg6;
- (id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4;
- (id)initWithTime:(id)arg1 tag:(id)arg2 unit:(id)arg3 attributes:(id)arg4 values:(void *)arg5 length:(unsigned long long)arg6 valueSize:(unsigned long long)arg7;
- (void)_prepareUnderlyingBufferSizeWithAdditionalBytes:(unsigned long long)arg1;
- (void)_appendSample:(id)arg1;
- (void)_appendDoubleValue:(double)arg1 timestamp:(unsigned long long)arg2;
- (id)attributeWithName:(id)arg1;
- (id)sampleWithIndex:(unsigned long long)arg1;
- (void)_appendAttribute:(id)arg1;
- (void)_appendSet:(id)arg1;

@end
