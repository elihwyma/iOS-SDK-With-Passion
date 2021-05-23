/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMMetric.h>

@class MXMInstrument, NSDate, NSString;

@interface MXMOSSignpostMetric : MXMMetric

{
    NSDate *_startDate;
    NSDate *_stopDate;
}

@property (copy, nonatomic, readonly) MXMInstrument *instrument;
@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (_Bool)_shouldConstructProbe;
- (id)_constructProbe;
- (unsigned long long)_sampleMode;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (_Bool)_shouldAlwaysWrapInProxy;
- (_Bool)_shouldNeverWrapInProxy;
- (id)initWithSubsystem:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;

@end
