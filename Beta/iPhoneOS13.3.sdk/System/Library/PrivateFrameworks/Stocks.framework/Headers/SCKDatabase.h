/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, SCKAsyncSerialQueue, SCKDatabaseSchema, SCKStartupQueue;

@protocol OS_dispatch_queue, SCKContainerProxying, SCKDatabaseStoreCoordinator;

@interface SCKDatabase : NSObject

{
    struct os_unfair_lock_s _observersLock;
    SCKDatabaseSchema *_schema;
    id <SCKDatabaseStoreCoordinator> _storeCoordinator;
    id <SCKContainerProxying> _container;
    NSArray *_mergeHandlers;
    SCKStartupQueue *_startupQueue;
    SCKAsyncSerialQueue *_ckSyncQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_observersByZoneName;
    long long _status;
    NSMutableDictionary *_zoneSnapshotsByZoneName;
}

@property (retain, nonatomic) SCKDatabaseSchema *schema;
@property (retain, nonatomic) id <SCKDatabaseStoreCoordinator> storeCoordinator;
@property (retain, nonatomic) id <SCKContainerProxying> container;
@property (retain, nonatomic) NSArray *mergeHandlers;
@property (retain, nonatomic) SCKStartupQueue *startupQueue;
@property (retain, nonatomic) SCKAsyncSerialQueue *ckSyncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableDictionary *observersByZoneName;
@property (nonatomic) struct os_unfair_lock_s observersLock;
@property long long status;
@property (retain, nonatomic) NSMutableDictionary *zoneSnapshotsByZoneName;

- (void)addObserver:(id)arg1 forZone:(id)arg2;
- (void)readContentsOfZone:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)modifyContentsOfZone:(id)arg1 withCommand:(id)arg2;
- (void)storeCoordinatorDiscoveredExternalChanges:(id)arg1;
- (id)initWithSchema:(id)arg1 store:(id)arg2 features:(long long)arg3 mergeHandlers:(id)arg4 containerProxy:(id)arg5;
- (void)_enqueueStartupSequenceWithFeatures:(long long)arg1;
- (void)_reloadSnapshotOfZone:(id)arg1 fromStore:(id)arg2;
- (void)_saveZoneToContainer:(id)arg1 allowRecoveryAttempt:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchDatabaseAndZoneChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_saveZonesToContainer:(id)arg1 allowRecoveryAttempt:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_squashZoneForMerge:(id)arg1 zoneStore:(id)arg2;
- (id)_emptyZonesNeedingFirstSync;
- (void)_fetchZoneChangesForZones:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_zonesNeedingFetch;
- (id)_zonesNeedingSave;
- (void)_runCKOperation:(id)arg1;
- (void)_fetchDatabaseChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_recoverFromIdentityLossWithCompletion:(CDUnknownBlockType)arg1;
- (id)_zoneWithSchema:(id)arg1 zoneStore:(id)arg2;
- (void)_createZoneInContainerWithSchema:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteAndRecreateAllZonesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithSchema:(id)arg1 store:(id)arg2 features:(long long)arg3 containerProxy:(id)arg4;
- (id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 containerProxy:(id)arg4;
- (id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 features:(long long)arg4 containerProxy:(id)arg5;
- (void)removeObserver:(id)arg1 forZone:(id)arg2;
- (void)handleRemoteNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pollForChangesWithCondition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkSyncingEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)savePendingChangesToServerWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)t_flushChangesWithTimeout:(double)arg1;
- (id)_sanitizeErrorForClients:(id)arg1;

@end
