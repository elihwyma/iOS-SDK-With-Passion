/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSeriesQuantityDataAggregator.h>

@interface HDAudioExposureAggregator : HDSeriesQuantityDataAggregator

- (void)addDatum:(id)arg1 toAccumulatedData:(id)arg2;
- (_Bool)shouldFreezeCurrentSeries:(id)arg1 lastDatum:(id)arg2 seriesLength:(long long)arg3 configuration:(id)arg4 aggregationInterval:(double)arg5;

@end
