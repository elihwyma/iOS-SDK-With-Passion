/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDActiveQuantityDataAggregator.h>

@interface HDSeriesQuantityDataAggregator : HDActiveQuantityDataAggregator

- (id)_validatedState:(id)arg1;
- (id)_codableDatumsFromData:(id)arg1;
- (id)_startSeriesWithDatum:(id)arg1 device:(id)arg2;
- (_Bool)requiresNewSeriesForDatum:(id)arg1 lastDatum:(id)arg2 seriesLength:(long long)arg3 currentSeries:(id)arg4 configuration:(id)arg5 aggregationInterval:(double)arg6;
- (void)addDatum:(id)arg1 toAccumulatedData:(id)arg2;
- (_Bool)shouldFreezeCurrentSeries:(id)arg1 lastDatum:(id)arg2 seriesLength:(long long)arg3 configuration:(id)arg4 aggregationInterval:(double)arg5;
- (id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 freezeSeries:(_Bool)arg6 error:(id *)arg7;
- (id)initialAggregationState;

@end
