//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMSampleTimeSeries : MXMSampleSet
{
    MXMSampleTimeSeries *_time;
}

// - (void).cxx_destruct;
- (void)_appendAbsoluteTime:(NSUInteger)arg1;
- (id)initWithTimeSeries:(double )arg1 unit:(id)arg2 length:(NSUInteger)arg3;
- (id)initWithContinuousTimeSeries:(NSUInteger )arg1 length:(NSUInteger)arg2;
- (id)initWithAbsoluteTimeSeries:(NSUInteger )arg1 length:(NSUInteger)arg2;
- (id)init;
@property(readonly, retain, nonatomic) MXMSampleTimeSeries *timeIndex;

@end
