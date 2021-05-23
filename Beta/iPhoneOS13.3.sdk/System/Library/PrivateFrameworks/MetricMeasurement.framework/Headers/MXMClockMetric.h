/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMMetric.h>

@class MXMInstrument, MXMSampleTag;

@interface MXMClockMetric : MXMMetric

{
    MXMSampleTag *_tag;
}

@property (nonatomic, readonly) MXMInstrument *instrument;

+ (_Bool)supportsSecureCoding;
+ (id)absoluteTime;
+ (id)continuousTime;
+ (id)allTime;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1;
- (id)_unit;
- (_Bool)_shouldConstructProbe;
- (_Bool)harvestData:(id *)arg1 error:(id *)arg2;
- (id)_unitWithTag:(id)arg1;

@end
