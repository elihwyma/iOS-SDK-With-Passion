/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDQuantityDistributionCalculator : NSObject

{
    struct HistogramState _histogramState;
}

- (id).cxx_construct;
- (void)_initializeWideBucketDatesFromStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 histogramBucketAnchor:(double)arg5 histogramBucketSize:(double)arg6;
- (void)addDataPoint:(double)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (id)quantityDistributionsWithUnit:(id)arg1;
- (_Bool)validateDateSequenceForTesting:(id)arg1;
- (_Bool)_isWideIntervalComponents:(id)arg1;
- (double)_dateComponentsToInterval:(id)arg1;

@end
