/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataAggregator.h>

@class NSLock, NSMutableDictionary, NSObject, _HKDelayedOperation;

@protocol OS_dispatch_queue;

@interface HDActiveDataAggregator : HDDataAggregator

{
    NSLock *_aggregationLock;
    NSMutableDictionary *_currentAggregationStates;
    _HKDelayedOperation *_delayedAggregationOperation;
    NSObject<OS_dispatch_queue> *_delayedAggregationQueue;
}

- (double)aggregationIntervalForCollector:(id)arg1;
- (id)aggregateForState:(id)arg1 collector:(id)arg2 device:(id)arg3 requestedAggregationDate:(id)arg4 mode:(long long)arg5 freezeSeries:(_Bool)arg6 error:(id *)arg7;
- (id)initialAggregationState;
- (id)initWithDataCollectionManager:(id)arg1;
- (Class)sensorDatumClass;
- (void)unregisterDataCollector:(id)arg1;
- (double)aggregationInterval;
- (void)_reconsiderDelayedAggregation;
- (void)_requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 freezeSeries:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_aggregateForAllDevicesForCollector:(id)arg1 date:(id)arg2 mode:(long long)arg3 freezeSeries:(_Bool)arg4;
- (void)_aggregateForCollector:(id)arg1 device:(id)arg2 requestedAggregationDate:(id)arg3 mode:(long long)arg4 freezeSeries:(_Bool)arg5;
- (_Bool)didPersistObjects:(id)arg1 lastDatum:(id)arg2 collector:(id)arg3 error:(id *)arg4;
- (void)requestAggregationThroughDate:(id)arg1 mode:(long long)arg2 freezeSeries:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)recomputeCollectorConfiguration;
- (void)dataCollector:(id)arg1 didCollectSensorData:(id)arg2 device:(id)arg3;
- (id)configurationForCollector:(id)arg1;

@end
