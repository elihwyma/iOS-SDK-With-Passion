/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HDActivityCacheDataSource, HDSourceManager, HKStatisticsCollection, NSDate, NSDateComponents, NSString, _HKDelayedOperation;

@interface HDActivityStatisticsQueryServer : HDQueryServer

{
    HKStatisticsCollection *_statisticsCollection;
    _Bool _deliversUpdates;
    _HKDelayedOperation *_updateOperation;
    _HKDelayedOperation *_resetOperation;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
    HDActivityCacheDataSource *_dataSource;
    HDSourceManager *_sourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)queryClass;

- (void)_createDataSourceIfNecessary;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (void)_queue_stop;
- (void)_queue_deliverUpdates;
- (void)_queue_reset;
- (id)_allObservedQuantityTypes;
- (_Bool)_queue_queryIsRunning;
- (id)_queue_queryResultFromDataSourceWithError:(id *)arg1;
- (void)_queue_deliverError:(id)arg1;
- (void)_queue_deliverResult:(id)arg1;
- (void)_queue_didDeactivate;

@end
