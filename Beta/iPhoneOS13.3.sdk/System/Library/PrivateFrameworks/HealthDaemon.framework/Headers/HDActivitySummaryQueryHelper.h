/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDActivitySummaryBuilder, HDProfile, HDSQLitePredicate, NSMutableDictionary, NSString, _HKFilter;

@protocol OS_dispatch_queue;

@interface HDActivitySummaryQueryHelper : NSObject

{
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    _HKFilter *_filter;
    HDActivitySummaryBuilder *_activitySummaryBuilder;
    _Bool _initialResultsSent;
    _Bool _needsUpdateAfterUnlock;
    _Bool _shouldBatchSummaries;
    NSMutableDictionary *_previousActivityCachesByCacheIndex;
    long long _lastProcessedAnchor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _initialResultsHandler;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _batchedInitialResultsHandler;
    CDUnknownBlockType _batchedUpdateHandler;
    long long _enumeratedSummaryCount;
}

@property (setter=_setEnumeratedSummaryCount:) long long enumeratedSummaryCount;
@property (copy, nonatomic, readonly) CDUnknownBlockType initialResultsHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType updateHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType batchedInitialResultsHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType batchedUpdateHandler;
@property _Bool shouldIncludePrivateProperties;
@property _Bool shouldIncludeStatistics;
@property (nonatomic) _Bool orderByDateAscending;
@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)start;
- (_Bool)_shouldStopProcessing;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)_queue_start;
- (void)_queue_stop;
- (id)initWithProfile:(id)arg1 filter:(id)arg2 initialResultsHandler:(CDUnknownBlockType)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (void)_queue_deliverUpdates;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1 isFinalBatch:(_Bool)arg2 clearPendingBatches:(_Bool)arg3;
- (id)initWithProfile:(id)arg1 filter:(id)arg2 batchedInitialResultsHandler:(CDUnknownBlockType)arg3 batchedUpdateHandler:(CDUnknownBlockType)arg4;
- (void)_queue_deliverInitialResults;
- (id)_fetchActivityCacheIndicesWithAnchor:(long long)arg1 predicate:(id)arg2 error:(id *)arg3;
- (void)_queue_deliverActivitySummariesMatchingPredicate:(id)arg1;
- (void)_queue_updatePreviousActivityCachesWithNewCaches:(id)arg1;
- (id)_queue_addActivityCacheToCachedSamples:(id)arg1;
- (id)_queue_filterActivityCaches:(id)arg1;
- (void)_queue_updateActivitySummariesWithNewActivityCaches:(id)arg1 anchor:(id)arg2;

@end
