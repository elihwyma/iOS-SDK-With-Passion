/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

#import <CoreData/Swift-Protocol.h>

@class NSOperationQueue, NSPersistentStore, NSPersistentStoreCoordinator, NSRecursiveLock, NSSQLCore, NSString, PFUbiquityLocation, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsImporter : NSObject <Swift>

{
    NSOperationQueue *_importQueue;
    NSObject<OS_dispatch_queue> *_privateQueue;
    _Bool _isMonitoring;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    PFUbiquitySwitchboardCacheWrapper *_sideLoadCacheWrapper;
    NSObject<OS_dispatch_source> *_logRestartTimer;
    NSRecursiveLock *_schedulingLock;
    _Bool _importOnlyActiveStores;
    _Bool _throttleNotifications;
    unsigned long long _numPendingNotifications;
    _Bool _allowBaselineRoll;
    unsigned long long _pendingImportOperationsCount;
}

@property (readonly) NSOperationQueue *importQueue;
@property (readonly) NSString *localPeerID;
@property (readonly) NSString *storeName;
@property (retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly) _Bool isMonitoring;
@property NSObject<OS_dispatch_source> *logRestartTimer;
@property (nonatomic, readonly) NSRecursiveLock *schedulingLock;
@property _Bool importOnlyActiveStores;
@property _Bool throttleNotifications;
@property _Bool allowBaselineRoll;
@property (nonatomic, readonly) PFUbiquityRecordsImporterSchedulingContext *schedulingContext;
@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *sideLoadCacheWrapper;
@property (nonatomic, readonly) NSPersistentStore *privateStore;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *privatePSC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)createPrivateCoordinatorForStore:(id)arg1 error:(id *)arg2;
+ (id)addPrivateStore:(id)arg1 toCoordinator:(id)arg2 atURL:(id)arg3 error:(id *)arg4;
+ (_Bool)canProcessContentsOfUbiquityRootPath:(id)arg1;
+ (id)createPrivateCoordinatorAndStoreForStore:(id)arg1 atURL:(id)arg2 error:(id *)arg3;
+ (void)executeBlockOnRootQueue:(CDUnknownBlockType)arg1;
+ (void)afterDelay:(double)arg1 executeBlockOnRootQueue:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (void)tearDown;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)requestBaselineRollForStore:(id)arg1;
- (void)operationWasInterruptedDuringImport:(id)arg1;
- (void)metadataInconsistencyDetectedForStore:(id)arg1;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (_Bool)canProcessTransactionLogWithScore:(id)arg1 afterLogWithScore:(id)arg2;
- (id)createSortedOperationsArrayWithMetadata:(id)arg1 isFirstImport:(_Bool)arg2;
- (_Bool)checkSchedulingContextForMissingLocalPeerOperations:(id)arg1 error:(id *)arg2;
- (_Bool)scheduleTransactionLogOperations:(id)arg1 synchronous:(_Bool)arg2 error:(id *)arg3;
- (_Bool)batchDownloadTransactionLogsAtLocations:(id)arg1 error:(id *)arg2;
- (_Bool)schedulePendingLogs:(_Bool)arg1 error:(id *)arg2;
- (id)createNewSetOfObjectIDsForCoordinator:(id)arg1 fromObjectIDs:(id)arg2;
- (_Bool)shouldThrottleNotificationsWithOperation:(id)arg1;
- (void)postImportNotificationForStoreName:(id)arg1 andLocalPeerID:(id)arg2 withUserInfo:(id)arg3;
- (void)scheduleRecoveryTimer;
- (_Bool)discoverAndImportAllAvailableLogs:(_Bool)arg1 error:(id *)arg2;
- (void)executeBlockOnPrivateQueue:(CDUnknownBlockType)arg1;
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)arg1;
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1;
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1;
- (void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2;
- (void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3;
- (void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2;
- (void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 storeName:(id)arg3 andPrivateStore:(id)arg4;
- (_Bool)isPeerForked:(id)arg1 andLocalKV:(id)arg2;
- (_Bool)startMonitor:(id *)arg1;
- (long long)compareScoreKnowledgeVector:(id)arg1 withScoreDictionary:(id)arg2;
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)arg1;

@end
