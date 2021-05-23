/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@interface PLMetricsFormatterMetricKit : NSObject

{
    _Bool _processHangs;
}

@property _Bool processHangs;

- (id)init;
- (void)publishMetrics:(id)arg1 andSignpostData:(id)arg2 forDate:(id)arg3;
- (id)constructPayloadWithMetrics:(id)arg1 andSignpostData:(id)arg2 forDate:(id)arg3;
- (_Bool)hangtracerEnabled:(id)arg1;
- (void)addPowerMetrics:(id)arg1 toAppData:(id)arg2;
- (void)addPerfMetrics:(id)arg1 toAppData:(id)arg2;
- (void)addSignpostData:(id)arg1 forApp:(id)arg2 toAppData:(id)arg3;
- (void)addTelemetryForMetricInconsistencies:(id)arg1;
- (id)constructCellularHistogram:(id)arg1;
- (id)constructHistogramBucketsWithDuration:(int)arg1 andData:(id)arg2;
- (int)computeBucketEndWithDuration:(int)arg1 andValue:(int)arg2;
- (void)addBucketWithDuration:(int)arg1 WithEnd:(int)arg2 andCount:(unsigned long long)arg3 toList:(id)arg4;
- (id)constructCellularData:(id)arg1;
- (void)normalizeCellularData:(id)arg1;
- (void)addBucketWithSignalBar:(short)arg1 withTime:(id)arg2 toList:(id)arg3;

@end
