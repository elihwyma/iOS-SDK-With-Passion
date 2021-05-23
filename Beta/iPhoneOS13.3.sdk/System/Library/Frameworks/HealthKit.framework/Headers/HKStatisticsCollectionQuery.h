/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQuery.h>

@class HKStatisticsCollection, NSDate, NSDateComponents, NSMutableArray, NSNumber, NSString;

@interface HKStatisticsCollectionQuery : HKQuery

{
    NSDate *_anchorDate;
    unsigned long long _options;
    NSDateComponents *_intervalComponents;
    NSMutableArray *_results;
    _Bool _hasReceivedInitialResults;
    _Bool _requireQuantityType;
    CDUnknownBlockType _initialResultsHandler;
    CDUnknownBlockType _statisticsUpdateHandler;
    NSNumber *_lastAnchor;
    HKStatisticsCollection *_statisticsCollection;
    unsigned long long _mergeStrategy;
}

@property (retain) NSNumber *lastAnchor;
@property (retain) HKStatisticsCollection *statisticsCollection;
@property (nonatomic) unsigned long long mergeStrategy;
@property (readonly) NSDate *anchorDate;
@property (readonly) unsigned long long options;
@property (copy, readonly) NSDateComponents *intervalComponents;
@property (copy, nonatomic) CDUnknownBlockType initialResultsHandler;
@property (copy, nonatomic) CDUnknownBlockType statisticsUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;

- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;
- (void)client_deliverStatisticsBatch:(id)arg1 resetStatistics:(_Bool)arg2 isFinal:(_Bool)arg3 anchor:(id)arg4 query:(id)arg5;
- (void)client_deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 query:(id)arg3;
- (void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3;
- (void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;

@end
