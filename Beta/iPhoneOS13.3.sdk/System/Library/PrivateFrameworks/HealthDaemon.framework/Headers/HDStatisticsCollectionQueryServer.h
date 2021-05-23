/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HDStatisticsCollectionCalculator, HDStatisticsCollectionCalculatorDefaultDataSource, HDStatisticsCollectionCalculatorDefaultSourceOrderProvider, HKQuantityType, NSDate, NSMutableDictionary, NSString, _HKDateIntervalCollection;

@interface HDStatisticsCollectionQueryServer : HDQueryServer

{
    _HKDateIntervalCollection *_intervalCollection;
    HDStatisticsCollectionCalculatorDefaultDataSource *_dataSource;
    HDStatisticsCollectionCalculatorDefaultSourceOrderProvider *_sourceOrderProvider;
    HDStatisticsCollectionCalculator *_calculator;
    NSMutableDictionary *_pendingQuantitiesBySeries;
    _Bool _addedSamplesRequireProtectedData;
    _Bool _requiresFetch;
    _Bool _hasScheduledUpdate;
    _Bool _deliversUpdates;
    unsigned long long _mergeStrategy;
    HKQuantityType *_quantityType;
    NSDate *_anchorDate;
    unsigned long long _statisticsOptions;
    CDUnknownBlockType _unitTest_queryServerStatisticsEnumerationHandler;
    CDUnknownBlockType _unitTest_queryServerUpdateStatisticsHandler;
    CDUnknownBlockType _unitTest_queryServerUnableToUpdateStatisticsHandler;
}

@property (copy, nonatomic) CDUnknownBlockType unitTest_queryServerStatisticsEnumerationHandler;
@property (copy, nonatomic) CDUnknownBlockType unitTest_queryServerUpdateStatisticsHandler;
@property (copy, nonatomic) CDUnknownBlockType unitTest_queryServerUnableToUpdateStatisticsHandler;
@property (nonatomic, readonly) NSDate *anchorDate;
@property (nonatomic, readonly) unsigned long long statisticsOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (_Bool)supportsAnchorBasedAuthorization;

- (id)quantityType;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (_Bool)_shouldListenForUpdates;
- (_Bool)_shouldObserveDatabaseProtectedDataAvailability;
- (CDUnknownBlockType)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(_Bool)arg2 count:(long long)arg3;
- (void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2;
- (void)_queue_fetchAndDeliverAllStatistics;
- (void)_queue_updateStatistics;
- (void)_queue_performUpdate;
- (void)_queue_didReceiveQuantity:(id)arg1 type:(id)arg2 dateInterval:(id)arg3 series:(id)arg4 anchor:(id)arg5;
- (void)_queue_scheduleUpdate;
- (void)_queue_deliverUpdatedStatistics:(id)arg1 error:(id)arg2;
- (id)_queue_filteredPendingSeriesWithError:(id *)arg1;
- (void)_queue_sendAccumulatedStatistics:(id)arg1 isFinal:(_Bool)arg2 statisticsCount:(long long *)arg3 shouldResetStatistics:(_Bool *)arg4;
- (void)_queue_accumulateUpdatedStatistics:(id)arg1 accumulatedStatistics:(id)arg2 sendHandler:(CDUnknownBlockType)arg3;
- (_Bool)_queue_objectIsRelevant:(id)arg1;

@end
