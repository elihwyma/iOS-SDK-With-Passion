/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CDDCloudKitClient, CKContainer, CKDatabase, CKDatabaseSubscription, CKNotificationListener, CKRecordZone, CKScheduler, NSCloudKitMirroringDelegateOptions, NSCloudKitMirroringRequestManager, NSError, NSPersistentStore, NSPersistentStoreCoordinator, NSSQLCore, NSString, PFCloudKitExporterOptions, PFCloudKitThrottledNotificationObserver;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NSCloudKitMirroringDelegate : NSObject

{
    NSCloudKitMirroringDelegateOptions *_options;
    NSString *_ckDatabaseName;
    NSObject<OS_dispatch_semaphore> *_cloudKitQueueSemaphore;
    NSObject<OS_dispatch_queue> *_cloudKitQueue;
    CKRecordZone *_recordZone;
    CKDatabaseSubscription *_databaseSubscription;
    CKContainer *_container;
    CKDatabase *_database;
    CKScheduler *_scheduler;
    CKNotificationListener *_notificationListener;
    NSError *_lastInitializationError;
    _Bool _hadObservedStore;
    _Bool _successfullyInitialized;
    PFCloudKitExporterOptions *_exporterOptions;
    CDDCloudKitClient *_coredatadClient;
    NSSQLCore *_observedStore;
    NSPersistentStoreCoordinator *_observedCoordinator;
    PFCloudKitThrottledNotificationObserver *_accountChangeObserver;
    PFCloudKitThrottledNotificationObserver *_appActivateLifecycleObserver;
    PFCloudKitThrottledNotificationObserver *_appDeactivateLifecycleObserver;
    NSCloudKitMirroringRequestManager *_requestManager;
}

@property (copy, nonatomic, readonly) NSCloudKitMirroringDelegateOptions *options;
@property (nonatomic, readonly) NSString *ckDatabaseName;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudKitQueue;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly) CKDatabaseSubscription *databaseSubscription;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKScheduler *scheduler;
@property (nonatomic, readonly) CKNotificationListener *notificationListener;
@property (nonatomic, readonly) NSError *lastInitializationError;
@property (weak, nonatomic, readonly) NSPersistentStore *observedStore;
@property (weak, nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) _Bool hadObservedStore;
@property (nonatomic, readonly) _Bool successfullyInitialized;
@property (nonatomic, readonly) PFCloudKitExporterOptions *exporterOptions;
@property (retain, nonatomic, readonly) NSCloudKitMirroringRequestManager *requestManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)checkAndCreateDirectoryAtURL:(id)arg1 wipeIfExists:(_Bool)arg2 error:(id *)arg3;
+ (id)cloudKitMetadataTransformerName;
+ (id)cloudKitMachServiceName;
+ (id)createCloudKitServerWithMachServiceName:(id)arg1 andStorageDirectoryPath:(id)arg2;
+ (_Bool)isFirstPartyContainerIdentifier:(id)arg1;
+ (id)stringForResetReason:(unsigned long long)arg1;
+ (_Bool)checkForCloudKitTablesInStoreAtURL:(id)arg1 withPersistentStoreCoordinator:(id)arg2 withConfiguration:(id)arg3;
+ (id)makeACopyOfTheStoreAtURL:(id)arg1 withCoordinator:(id)arg2 error:(id *)arg3;
+ (void)printMetadataForStoreAtURL:(id)arg1 withConfiguration:(id)arg2 operateOnACopy:(_Bool)arg3;
+ (void)printRepresentativeSchemaForModelAtURL:(id)arg1 orStoreAtURL:(id)arg2 withConfiguration:(id)arg3;
+ (_Bool)checkIfContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (void)_setContainer:(id)arg1;
- (id)initWithCloudKitContainerOptions:(id)arg1;
- (_Bool)validateManagedObjectModel:(id)arg1 forUseWithStoreWithDescription:(id)arg2 error:(id *)arg3;
- (void)persistentStoreCoordinator:(id)arg1 didSuccessfullyAddPersistentStore:(id)arg2 withDescription:(id)arg3;
- (void)tearDown;
- (id)executeMirroringRequest:(id)arg1 error:(id *)arg2;
- (void)_setDatabase:(id)arg1;
- (void)logResetSyncNotification:(id)arg1;
- (void)exporter:(id)arg1 willScheduleOperations:(id)arg2;
- (void)_respondToAccountOrIdentityChangeNotification:(id)arg1;
- (void)_respondToApplicationActivationNotification:(id)arg1;
- (void)_respondToApplicationDeactivationNotification:(id)arg1;
- (void)removeNotificationRegistrations;
- (void)observeChangesForStore:(id)arg1 inPersistentStoreCoordinator:(id)arg2;
- (void)_openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(CDUnknownBlockType)arg2;
- (void)_setUpCloudKitIntegration;
- (void)checkAndExecuteNextRequest;
- (void)resetAfterError:(id)arg1 andKeepContainer:(_Bool)arg2;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)storesDidChange:(id)arg1;
- (void)ckAccountOrIdentityChangedHandler:(id)arg1;
- (void)managedObjectContextSaved:(id)arg1;
- (void)remoteStoreDidChange:(id)arg1;
- (void)_scheduleAutomatedExportWithLabel:(id)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_scheduleAutomatedImportWithLabel:(id)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)checkAndScheduleImportIfNecessary:(_Bool)arg1;
- (void)applicationDidActivate:(id)arg1;
- (void)applicationWillDeactivate:(id)arg1;
- (id)newActivityWithIdentifier:(id)arg1;
- (void)_enqueueRequest:(id)arg1;
- (void)_performFetchRecordsRequest:(id)arg1;
- (void)_performImportWithRequest:(id)arg1;
- (void)_performExportWithRequest:(id)arg1;
- (void)_performResetZoneRequest:(id)arg1;
- (void)_performMetadataResetRequest:(id)arg1;
- (void)_performSetupRequest:(id)arg1;
- (void)_performDelegateResetRequest:(id)arg1;
- (void)_performSchemaInitializationRequest:(id)arg1;
- (void)_performSerializationRequest:(id)arg1;
- (void)_performExportProgressRequest:(id)arg1;
- (void)resetAfterError:(id)arg1;
- (void)_finishedRequest:(id)arg1 withResult:(id)arg2;
- (void)_beginWatchingForChanges;
- (_Bool)recoverFromError:(id)arg1;
- (void)_requestAbortedNotInitialized:(id)arg1;
- (void)_requestEncounteredRecoverableError:(id)arg1 withResult:(id)arg2;
- (void)_requestEncounteredUnrecoverableError:(id)arg1 withResult:(id)arg2;
- (_Bool)_recoverFromPartialError:(id)arg1 withMonitor:(id)arg2;
- (_Bool)_recoverFromError:(id)arg1 withMonitor:(id)arg2;
- (void)postWillResetNotificationForError:(id)arg1;
- (void)postDidResetNotificationForError:(id)arg1;
- (void)_postResetSyncNotificationWithName:(id)arg1 forError:(id)arg2;
- (id)resetNotificationUserInfoForError:(id)arg1;
- (void)scheduleExportWithMonitor:(id)arg1;
- (_Bool)_dateExceedsSchedulingThreshold:(id)arg1;
- (void)_executeRequest:(id)arg1;
- (void)handleErrorInResult:(id)arg1;
- (void)finishedAutomatedRequestWithResult:(id)arg1;
- (_Bool)_createSchemaWithMonitor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2;
- (void)_setZone:(id)arg1;
- (void)_setAccountNotificationBackoffInterval:(long long)arg1;
- (void)_setRequestManager:(id)arg1;
- (void)_setAppActivateObserver:(id)arg1;
- (void)_setAppDeactivateObserver:(id)arg1;
- (void)checkForNewChanges;
- (void)fetchChangesAndUpdateObservedStore;

@end
