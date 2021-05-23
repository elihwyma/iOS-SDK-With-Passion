/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMProbe.h>

@class MXMProxyMetric;

@interface MXMProxyProbe : MXMProbe

{
    MXMProxyMetric *_proxyMetric;
}

@property (readonly) MXMProxyMetric *proxyMetric;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProxyMetric:(id)arg1;
- (void)updateNowUntilStoppedWithUpdateHandler:(CDUnknownBlockType)arg1 stopHandler:(CDUnknownBlockType)arg2;
- (id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long *)arg2;

@end
