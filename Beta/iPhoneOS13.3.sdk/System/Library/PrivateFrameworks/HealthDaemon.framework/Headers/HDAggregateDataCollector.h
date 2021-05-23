/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataCollector.h>

@class NSDictionary, _HKDelayedOperation;

@protocol HDSensorDatum;

@interface HDAggregateDataCollector : HDDataCollector

{
    _HKDelayedOperation *_historicalFetchOperation;
    id <HDSensorDatum> _lastReceivedSensorDatum;
    _Bool _didReceiveSensorDatum;
    NSDictionary *_lastReceivedSecondaryContext;
    _Bool _fetchingHistoricalData;
    _Bool _needsHistoricalFetch;
    double _maxDatumDuration;
}

@property double maxDatumDuration;
@property (nonatomic, readonly) _Bool requiresSampleAggregation;

- (id)initWithProfile:(id)arg1;
- (void)_queue_beginStreaming;
- (void)updateHistoricalDataForcedUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateHistoricalData;
- (void)updateHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_executeHistoricalFetchOperation;
- (void)_queue_handleUpdatingHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (double)_queue_maxDatumDuration;
- (void)_queue_beginUpdates;
- (id)_queue_lastReceivedSensorDatum;
- (double)_queue_aggregationInterval;
- (void)beginUpdatesFromDatum:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_queue_updateLastReceivedSensorDatum:(id)arg1;
- (void)_queue_handleUpdatingHistoricalDataForcedUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_handleCMDatabaseReset;
- (void)_queue_fetchHistoricalDataForcedUpdate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_fetchHistoricalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_processSensorData:(id)arg1 lastSensorDatum:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchHistoricalSensorDataSinceDatum:(id)arg1 databaseIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_queue_processSensorDataBatched:(id)arg1 firstDatum:(id)arg2 lastSensorDatum:(id *)arg3;
- (id)hkObjectsFromSensorData:(id)arg1 baseSensorDatum:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (void)willPersistHKObjects:(id)arg1;
- (id)_queue_lastReceivedSecondaryContext;
- (void)_queue_updateLastReceivedSecondaryContext:(id)arg1;

@end
