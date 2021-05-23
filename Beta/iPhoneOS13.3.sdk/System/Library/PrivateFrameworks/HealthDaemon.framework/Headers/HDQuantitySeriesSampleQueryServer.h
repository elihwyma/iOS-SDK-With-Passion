/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HKQuantitySample, NSDate, NSUUID;

@interface HDQuantitySeriesSampleQueryServer : HDQueryServer

{
    HKQuantitySample *_sample;
    long long _batchThreshold;
    long long _lastDatumIndex;
    long long _mode;
    unsigned long long _options;
    NSDate *_maximumDeliveredStartDate;
    NSUUID *_latestDeliveredUUID;
    NSDate *_latestDeliveredSampleStartDate;
    CDUnknownBlockType _unitTest_batchWillDeliver;
}

@property (copy, nonatomic) CDUnknownBlockType unitTest_batchWillDeliver;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (_Bool)_shouldDeliverQuantityWithStartTime:(double)arg1 UUID:(id)arg2 maximumDeliveredStartDate:(id)arg3 latestDeliveredUUID:(id)arg4 orderBySamples:(_Bool)arg5;
+ (_Bool)_enumerateQuantityValuesForPredicate:(id)arg1 orderBySamples:(_Bool)arg2 profile:(id)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;

- (id)_clientProxy;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (void)unitTest_setBatchThreshold:(long long)arg1;
- (void)_deliverError:(id)arg1;
- (void)_deliverEmptyResults;
- (void)_queue_startSingleSeriesMode;
- (void)_queue_startEnumerationMode;
- (void)_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(_Bool)arg3;
- (void)_deliverEnumerationResults:(id)arg1 isFinal:(_Bool)arg2;
- (id)_predicateForEnumerationWithError:(id *)arg1;
- (_Bool)_deliverEnumerationResults:(id)arg1 latestUUID:(id)arg2 latestSampleStartTime:(double)arg3 sampleIDsToLookup:(id)arg4 isFinal:(_Bool)arg5 error:(id *)arg6;

@end
