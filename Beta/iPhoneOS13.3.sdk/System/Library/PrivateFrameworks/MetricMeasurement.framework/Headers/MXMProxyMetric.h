/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMMetric.h>

@class MXMProbe;

@interface MXMProxyMetric : MXMMetric

{
    MXMMetric *__underlyingMetric;
}

@property (retain, readonly) MXMMetric *_underlyingMetric;
@property (copy, readonly) MXMProbe *_remoteProbe;
@property (copy, readonly) MXMMetric *metric;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;
- (_Bool)_shouldConstructProbe;
- (id)_constructProbe;
- (id)initWithMetric:(id)arg1;
- (unsigned long long)_sampleMode;
- (_Bool)prepareWithOptions:(id)arg1 error:(id *)arg2;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (void)willStop;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (_Bool)_shouldAlwaysWrapInProxy;
- (_Bool)_shouldNeverWrapInProxy;

@end
