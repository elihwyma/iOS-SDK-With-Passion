/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKOutstandingFetchOperationManager, NSArray, NSHashTable, NSMutableDictionary, _HKChartCachePendingFetchOperationManager;

@protocol HKChartCacheDataSource;

@interface HKChartCache : NSObject

{
    NSHashTable *_observers;
    NSMutableDictionary *_cachedResultsByIdentifier;
    _HKChartCachePendingFetchOperationManager *_pendingFetchOperationsManager;
    NSMutableDictionary *_resultsLoadedByIdentifier;
    NSArray *_bufferedIdentifiers;
    _Bool _shouldBufferFetchOperations;
    id <HKChartCacheDataSource> _dataSource;
    HKOutstandingFetchOperationManager *_operationManager;
    long long _maxRetryCount;
}

@property (retain, nonatomic) id <HKChartCacheDataSource> dataSource;
@property (nonatomic, readonly) id dataSourceRespectingType;
@property (retain, nonatomic) HKOutstandingFetchOperationManager *operationManager;
@property (nonatomic) _Bool shouldBufferFetchOperations;
@property (nonatomic) long long maxRetryCount;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)invalidateCache;
- (id)cachedResultsForIdentifier:(id)arg1;
- (void)fetchResultsForIdentifiers:(id)arg1;
- (unsigned long long)stateForIdentifier:(id)arg1;
- (void)invalidateResultsForIdentifiers:(id)arg1;
- (void)_addFetchOperationsForIdentifiers:(id)arg1;
- (id)_operationForIdentifier:(id)arg1;
- (void)_alertObserversDidUpdateResults;
- (void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 results:(id)arg3 error:(id)arg4;
- (void)_removeFetchOperationsForIdentifiers:(id)arg1;

@end
