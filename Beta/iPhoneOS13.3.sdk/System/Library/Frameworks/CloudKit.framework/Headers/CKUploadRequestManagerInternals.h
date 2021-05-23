/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

#import <CloudKit/Swift-Protocol.h>

@class CKAssetRepairScheduler, CKContainer, CKSchedulerActivity, CKSyncEngine, CKUploadRequestConfiguration, CKUploadRequestManagerResponseActionThrottler, CKUploadRequestManagerStateMachine, CKUploadRequestPersistentStore, NSMutableDictionary, NSString;

@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKUploadRequestManagerInternals : NSObject <Swift>

{
    _Bool _ignoringSystemConditions;
    _Bool _hasRegisteredActivity;
    int _fetchAllToken;
    CKUploadRequestManagerStateMachine *_stateMachine;
    NSString *_machServiceName;
    CKContainer *_container;
    CKContainer *_repairContainer;
    CKUploadRequestConfiguration *_repairContainerOverrides;
    CKSyncEngine *_repairZoneSyncEngine;
    NSString *_assignedMachServiceName;
    CKAssetRepairScheduler *_repairProcessor;
    CKUploadRequestPersistentStore *_database;
    NSString *_deviceID;
    NSString *_cachesDirectory;
    struct __SCNetworkReachability *_reachability;
    id <NSObject> _accountChangeObserver;
    CDUnknownBlockType _scheduledAccountStatusCheck;
    CDUnknownBlockType _repairActivityHandler;
    CKSchedulerActivity *_observedRepairActivity;
    CKUploadRequestManagerResponseActionThrottler *_responseActionThrottler;
    NSObject<OS_dispatch_queue> *_stateMachineQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_callbackForOverridePoint;
    CDUnknownBlockType _assetRequestCallback;
    CDUnknownBlockType _packageRequestCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKContainer *repairContainer;
@property (retain, nonatomic) CKUploadRequestConfiguration *repairContainerOverrides;
@property (retain, nonatomic) CKUploadRequestManagerStateMachine *stateMachine;
@property (retain, nonatomic) CKSyncEngine *repairZoneSyncEngine;
@property (retain, nonatomic) NSString *assignedMachServiceName;
@property (nonatomic) _Bool hasRegisteredActivity;
@property (retain, nonatomic) CKAssetRepairScheduler *repairProcessor;
@property (retain, nonatomic) CKUploadRequestPersistentStore *database;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *cachesDirectory;
@property (nonatomic) struct __SCNetworkReachability *reachability;
@property (retain, nonatomic) id <NSObject> accountChangeObserver;
@property (copy, nonatomic) CDUnknownBlockType scheduledAccountStatusCheck;
@property (nonatomic) int fetchAllToken;
@property (copy, nonatomic) CDUnknownBlockType repairActivityHandler;
@property (retain, nonatomic) CKSchedulerActivity *observedRepairActivity;
@property (retain, nonatomic) CKUploadRequestManagerResponseActionThrottler *responseActionThrottler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateMachineQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableDictionary *callbackForOverridePoint;
@property (nonatomic, readonly) _Bool ignoringSystemConditions;
@property (copy) CDUnknownBlockType assetRequestCallback;
@property (copy) CDUnknownBlockType packageRequestCallback;
@property (copy) NSString *machServiceName;
@property (nonatomic, readonly) NSString *activityIdentifierForSchedulingRepairs;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)manuallyTriggerUploadRequests;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(_Bool)arg3;
- (void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2;
- (void)syncEngine:(id)arg1 didSaveRecord:(id)arg2;
- (void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3;
- (void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2;
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;
- (id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDChanged:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasPurged:(id)arg2;
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2;
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)dispatchEvent:(long long)arg1 synchronously:(_Bool)arg2;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (void)fetchServerChanges:(CDUnknownBlockType)arg1;
- (void)scheduleOrInvokeRepairsNow;
- (void)setCallback:(CDUnknownBlockType)arg1 forOverridePoint:(long long)arg2;
- (void)commonInitWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (id)repairZoneID;
- (id)createStateMachine;
- (void)dispatchEvent:(long long)arg1;
- (id)createDatabase;
- (void)invokeCallbackForOverridePoint:(long long)arg1 withError:(id)arg2 onCallbackQueue:(_Bool)arg3;
- (void)scheduleRecordRepair:(id)arg1 withDelay:(double)arg2 increasingCount:(_Bool)arg3;
- (_Bool)canPerformFunction:(long long)arg1;
- (void)assetRepairScheduler:(id)arg1 completedRequestWithMetadata:(id)arg2 result:(long long)arg3;
- (void)assetRepairScheduler:(id)arg1 completedRepairWithMetadata:(id)arg2 error:(id)arg3;
- (void)assetRepairScheduler:(id)arg1 preparingRepairWithOperation:(id)arg2;
- (void)assetRepairSchedulerAllRequestsComplete:(id)arg1;
- (_Bool)isRepairRecordActionable:(id)arg1;
- (void)scheduleRepairsWithDelay:(double)arg1;
- (void)performRepairs;
- (id)nextRepairDateForDate:(id)arg1;
- (id)repairableAssetsForDate:(id)arg1;
- (void)respondToStateMachineAction:(long long)arg1 isRetry:(_Bool)arg2;
- (void)respondToStateMachineChangeState:(long long)arg1 enter:(_Bool)arg2;
- (void)registerForRepairScheduler;
- (void)openSyncEngine;
- (void)closeSyncEngine;
- (void)cancelScheduledEvent;
- (void)checkNetworkReachability;
- (void)registerForNetworkReachability;
- (void)unregisterFromNetworkReachability;
- (void)fetchRepairContainerMetadata;
- (void)checkAccountStatus;
- (void)checkAccountID;
- (void)registerForAccountNotifications;
- (void)unregisterFromAccountNotifications;
- (void)finishSchedulerCallbackWithDeferral:(_Bool)arg1;
- (void)scheduleRecurringFetch;
- (void)scheduleNextSync;
- (void)registerForFetchAllNotifications;
- (void)unregisterFromFetchAllNotifications;

@end
