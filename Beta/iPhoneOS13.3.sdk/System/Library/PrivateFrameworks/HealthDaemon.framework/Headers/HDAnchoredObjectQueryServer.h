/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDBatchedQueryServer.h>

@class HKQueryAnchor, NSMutableArray, NSObject;

@protocol OS_dispatch_queue;

@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer

{
    _Bool _deliversUpdates;
    _Bool _initialResultsSent;
    _Bool _objectsDeleted;
    _Bool _includeDeletedObjects;
    HKQueryAnchor *_startAnchor;
    unsigned long long _deliveredResults;
    NSObject<OS_dispatch_queue> *_batchQueue;
    NSMutableArray *_addedSamplesPendingResume;
    NSMutableArray *_deletedSamplesPendingResume;
    _Bool _includeAutomaticTimeZones;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
}

@property (copy, nonatomic, readonly) HKQueryAnchor *anchor;
@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, readonly) _Bool includeAutomaticTimeZones;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (_Bool)supportsAnchorBasedAuthorization;

- (id)description;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (_Bool)_shouldListenForUpdates;
- (void)_queue_didDeactivate;
- (_Bool)_shouldObserveOnPause;
- (_Bool)validateConfiguration:(id *)arg1;
- (_Bool)_queue_shouldAccumulateUpdates;
- (void)_queue_startForInitialResults;
- (void)_queue_startForUpdate;
- (void)_queue_didChangeStateFromPreviousState:(long long)arg1 state:(long long)arg2;
- (_Bool)_queue_shouldAcceptUpdates;
- (void)_queue_deliverSamples:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(_Bool)arg4 deliverResults:(_Bool)arg5 description:(id)arg6;
- (void)_queue_samplesWereRemovedWithAnchor:(id)arg1;
- (id)anchoredObjectQueryClient;
- (id)_maxRowIDInDatabaseWithError:(id *)arg1;
- (id)_queue_configuredEntityEnumerator;
- (void)_queue_handleBatchedQueryResult:(long long)arg1 error:(id)arg2;

@end
