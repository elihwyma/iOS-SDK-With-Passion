/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMSampleTimeSeries : MXMSampleSet

{
    MXMSampleTimeSeries *_time;
}

@property (retain, nonatomic, readonly) MXMSampleTimeSeries *timeIndex;

- (id)init;
- (void)_appendAbsoluteTime:(unsigned long long)arg1;
- (id)initWithAbsoluteTimeSeries:(unsigned long long *)arg1 length:(unsigned long long)arg2;
- (id)initWithTimeSeries:(double *)arg1 unit:(id)arg2 length:(unsigned long long)arg3;
- (id)initWithContinuousTimeSeries:(unsigned long long *)arg1 length:(unsigned long long)arg2;

@end
