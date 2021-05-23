/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSManagedObjectModel, NSString, _PFModelMap;

@interface NSPersistentStoreCoordinator : NSObject

{
    id _queueOwner;
    void *_dispatchQueue;
    struct _persistentStoreCoordinatorFlags {
        unsigned int _isRegistered:1;
        unsigned int _canUseDirectDispatch:1;
        unsigned int _reservedFlags:30;
    } _flags;
    unsigned int _reserved32;
    long long _miniLock;
    id *_additionalPrivateIvars;
    NSManagedObjectModel *_managedObjectModel;
    NSArray *_persistentStores;
}

@property (nonatomic, readonly) _PFModelMap *modelMap;
@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (readonly) NSArray *persistentStores;
@property (copy) NSString *name;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)accessInstanceVariablesDirectly;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id *)arg3;
+ (_Bool)removePersistentHistoryFromPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)_beginPowerAssertionNamed:(id)arg1 withAssert:(unsigned long long *)arg2;
+ (void)_endPowerAssertionWithAssert:(unsigned long long)arg1 andApp:(id)arg2;
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (id)registeredStoreTypes;
+ (void)_registerDefaultStoreClassesAndTypes;
+ (Class)_storeClassForStoreType:(id)arg1;
+ (Class)_classForPersistentStoreAtURL:(id)arg1;
+ (id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)_metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (_Bool)_setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (id)_storeTypeForStore:(id)arg1;
+ (void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id *)arg4;
+ (_Bool)removeUbiquitousContentAndPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 localPeerID:(id)arg3 ubiquityName:(id)arg4;
+ (id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 ubiquityName:(id)arg3;
+ (unsigned long long)__platformOptions;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (_Bool)tryLock;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (_Bool)removePersistentStore:(id)arg1 error:(id *)arg2;
- (id)initWithManagedObjectModel:(id)arg1;
- (id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (void)addPersistentStoreWithDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)persistentStoreCoordinator;
- (_Bool)destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)persistentStoreForURL:(id)arg1;
- (id)managedObjectIDForURIRepresentation:(id)arg1;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (_Bool)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (void)_setXPCBundleIdentifier:(id)arg1;
- (void)_setXPCProcessName:(id)arg1;
- (id)_reopenQueryGenerationWithIdentifier:(id)arg1 inStoreWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)_retainedCurrentQueryGeneration:(id)arg1;
- (id)currentPersistentHistoryTokenFromStores:(id)arg1;
- (_Bool)setURL:(id)arg1 forPersistentStore:(id)arg2;
- (id)persistentStoreForIdentifier:(id)arg1;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)_lastOpenError;
- (_Bool)_removeAllPersistentStores:(id *)arg1;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (void)_postStoreRemoteChangeNotificationsForStore:(id)arg1 andState:(unsigned long long)arg2;
- (id)_persistentStoreForIdentifier:(id)arg1;
- (id)managedObjectIDForURIRepresentation:(id)arg1 error:(id *)arg2;
- (_Bool)_validateQueryGeneration:(id)arg1 error:(id *)arg2;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id *)arg3;
- (void)_copyMetadataFromStore:(id)arg1 toStore:(id)arg2 migrationManager:(id)arg3;
- (id)_qosClassOptions;
- (id)_retainedPersistentStores;
- (void)_routeLightweightBlock:(CDUnknownBlockType)arg1 toStore:(id)arg2;
- (_Bool)_isRegisteredWithUbiquity;
- (_Bool)_hasHistoryTracking:(id)arg1;
- (_Bool)_checkForPostLionWriter:(id)arg1;
- (_Bool)_attemptRecoveryFromAddPersistentStoreError:(id)arg1 withDescription:(id)arg2;
- (void)_doAddPersistentStoreWithDescription:(id)arg1 privateCopy:(id)arg2 completeOnMainThread:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (_Bool)validateManagedObjectModel:(id)arg1 forHistoryTrackingWithOptions:(id)arg2 error:(id *)arg3;
- (id)_realStoreTypeForStoreWithType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)_checkForSkewedEntityHashes:(id)arg1 metadata:(id)arg2;
- (_Bool)_checkForTombstoneSkew:(id)arg1 metadata:(id)arg2 configuration:(id)arg3;
- (void)_addPersistentStore:(id)arg1 identifier:(id)arg2;
- (void)_postStoresChangedNotificationsForStores:(id)arg1 changeKey:(id)arg2 options:(id)arg3;
- (_Bool)_removePersistentStore:(id)arg1;
- (void)_repairIndiciesForStoreWithIdentifier:(id)arg1 synchronous:(_Bool)arg2;
- (_Bool)_removePersistentStore:(id)arg1 error:(id *)arg2;
- (id)_retainedAllMigratedObjectsInStore:(id)arg1 toStore:(id)arg2;
- (_Bool)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id *)arg6;
- (id)_retainedChangeTokenFromStores:(id)arg1;
- (id)_exceptionNoStoreSaveFailureForError:(id)arg1 recommendedFrame:(int *)arg2;
- (void)_coordinator_you_never_successfully_opened_the_database_corrupted:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_schema_mismatch:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_device_locked:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_missing_directory:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_no_permission:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_cant_open:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_disk_full:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_io_error:(id)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_so_saving_back_to_it_is_kinda_hard:(id)arg1;
- (id)_routableStoresForContext:(id)arg1 fromStores:(id)arg2;
- (void)_introspectLastErrorAndThrow;
- (void)_coordinator_no_idea_what_kind_of_request_that_was_supposed_to_be;
- (id)_checkRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;
- (void)_doPreSaveAssignmentsForObjects:(id)arg1 intoStores:(id)arg2;
- (id)_saveRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4;
- (id)_processStoreResults:(id)arg1 forRequest:(id)arg2;
- (id)_retainedIdentifierFromStores:(id)arg1;
- (void)_routeHeavyweightBlock:(CDUnknownBlockType)arg1;
- (void)setMetadata:(id)arg1 forPersistentStore:(id)arg2;
- (id)metadataForPersistentStore:(id)arg1;
- (id)URLForPersistentStore:(id)arg1;
- (id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id *)arg5;
- (_Bool)replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id *)arg6;
- (_Bool)_canRouteToStore:(id)arg1 forContext:(id)arg2;
- (id)managedObjectIDFromUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_canSaveGraphRootedAtObject:(id)arg1 intoStore:(id)arg2 withPreviouslyChecked:(struct __CFSet *)arg3 withAcceptableEntities:(struct __CFSet *)arg4;
- (void)_assignObjects:(id)arg1 toStore:(id)arg2;
- (id)_newObjectGraphStyleRecordForRow:(id)arg1 andObject:(id)arg2 withContext:(id)arg3;
- (id)_newConflictRecordForObject:(id)arg1 andOriginalRow:(id)arg2 withContext:(id)arg3;
- (id)_conflictsWithRowCacheForObject:(id)arg1 withContext:(id)arg2 andStore:(id)arg3;
- (id)_fetchAllInstancesFromStore:(id)arg1 intoContext:(id)arg2 underlyingException:(id *)arg3;
- (void)_assignObject:(id)arg1 toPersistentStore:(id)arg2 forConfiguration:(id)arg3;
- (void)_setQosClassOptions:(unsigned int)arg1;
- (Class)_storeClassForStoreWithType:(id)arg1 URL:(id)arg2 options:(id)arg3;
- (void)_setIsRegisteredWithCloudKit:(_Bool)arg1;
- (_Bool)_isRegisteredWithCloudKit;
- (void)_setIsRegisteredWithUbiquity:(_Bool)arg1;
- (id)currentQueryGenerationTokenFromStores:(id)arg1;
- (_Bool)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 error:(id *)arg3;
- (_Bool)_rekeyPersistentStoreAtURL:(id)arg1 type:(id)arg2 options:(id)arg3 withKey:(id)arg4 error:(id *)arg5;
- (_Bool)_refreshTriggerValuesInStore:(id)arg1 error:(id *)arg2;
- (id)_xpcBundleIdentifier;
- (id)_xpcProcessName;
- (id)_retainedCurrentChangeTrackingToken;

@end
