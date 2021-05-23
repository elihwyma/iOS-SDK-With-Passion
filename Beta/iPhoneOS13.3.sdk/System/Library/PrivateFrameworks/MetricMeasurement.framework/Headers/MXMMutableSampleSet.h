/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMMutableSampleSet : MXMSampleSet

- (void)appendSet:(id)arg1;
- (void)appendAttribute:(id)arg1;
- (void)appendSample:(id)arg1;
- (void)appendIntValue:(int)arg1 timestamp:(unsigned long long)arg2;
- (void)appendIntegerValue:(long long)arg1 timestamp:(unsigned long long)arg2;
- (void)appendUnsignedIntValue:(unsigned int)arg1 timestamp:(unsigned long long)arg2;
- (void)appendUnsignedIntegerValue:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)appendDoubleValue:(double)arg1 timestamp:(unsigned long long)arg2;
- (void)appendFloatValue:(float)arg1 timestamp:(unsigned long long)arg2;

@end
