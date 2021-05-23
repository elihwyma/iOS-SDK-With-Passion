/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDActiveDataAggregator.h>

@class HKQuantityType;

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator

{
    HKQuantityType *_quantityType;
}

@property (copy, nonatomic, readonly) HKQuantityType *quantityType;

- (id)description;
- (id)objectType;
- (id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 freezeSeries:(_Bool)arg6 error:(id *)arg7;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;
- (Class)sensorDatumClass;
- (id)_aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 interval:(double)arg6;

@end
