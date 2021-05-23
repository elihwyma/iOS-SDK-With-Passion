/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class APSConnection, CKContainer, CKDatabase, CKRecordZone, CKRecordZoneSubscription, NSError, NSManagedObjectContext, NSMutableArray, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AXSSCloudKitHelper : NSObject

{
    NSMutableArray *_accumulatedQueuedData;
    _Bool _observeLocalDatabaseChanges;
    _Bool _isProtectedDataAvailable;
    NSPersistentStore *_observedStore;
    NSPersistentStoreCoordinator *_observedCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSString *_containerIdentifier;
    CKContainer *_container;
    CKRecordZone *_zone;
    CKRecordZoneSubscription *_zoneSubscription;
    CKDatabase *_database;
    NSObject<OS_dispatch_queue> *_cloudkitQueue;
    NSObject<OS_dispatch_semaphore> *_cloudKitQueueSemaphore;
    APSConnection *_apsConnection;
    NSError *_lastInitializationError;
    NSURL *_largeBlobDirectoryURL;
}

@property (weak, nonatomic, readonly) NSPersistentStore *observedStore;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *observedCoordinator;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKRecordZone *zone;
@property (nonatomic, readonly) CKRecordZoneSubscription *zoneSubscription;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudkitQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (nonatomic, readonly) APSConnection *apsConnection;
@property (nonatomic, readonly) NSError *lastInitializationError;
@property (nonatomic, readonly) NSURL *largeBlobDirectoryURL;
@property (nonatomic) _Bool observeLocalDatabaseChanges;
@property (nonatomic) _Bool isProtectedDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_setContainer:(id)arg1;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (id)recordType;
- (void)logMessage:(id)arg1;
- (_Bool)_checkAccountStatus:(id *)arg1;
- (_Bool)_createZoneIfNecessary:(id *)arg1;
- (void)_setDatabase:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2;
- (void)fetchChangesAndUpdateObservedStore;
- (id)apsEnvironment;
- (id)initWithContainerIdentifier:(id)arg1 zoneName:(id)arg2;
- (void)observeChangesForManagedContext:(id)arg1;
- (void)_initializeCloudkitForObservedStore;
- (void)openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(CDUnknownBlockType)arg2;
- (_Bool)_setupZoneSubscriptionIfNecessary:(id *)arg1;
- (_Bool)_createSchemaIfNecessary:(id *)arg1;
- (_Bool)_setupPushConnection:(id *)arg1;
- (void)beginWatchingForChanges;
- (id)zoneCreatedKey;
- (id)testRecordForSchemaCreation:(id)arg1;
- (id)zoneSubscriptionKey;
- (Class)managedObjectClass;
- (id)serverChangeTokenMetadataKey;
- (void)processAccumulatedChangesForServerChangeToken:(id)arg1 withAccumulatedUpdates:(id)arg2 andDeletes:(id)arg3 inTransaction:(id)arg4;
- (void)_processAccumulatedQueueData;
- (void)processServerUpdateChanges:(id)arg1 moc:(id)arg2 recordNameToManagedObject:(id)arg3;
- (void)processLocalChangesAndPush;
- (void)clearRecordsForPurging:(id)arg1;
- (void)retrieveLocalChangesForCloud:(CDUnknownBlockType)arg1;
- (id)cloudKitPushTopic;
- (_Bool)shouldExportManagedObject:(id)arg1;
- (id)createCKRecordFromObject:(id)arg1;
- (void)_setApsConnection:(id)arg1;

@end
