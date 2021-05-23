/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <CoreData/NSManagedObjectContext.h>

@class NSError, NSMutableDictionary, NSMutableSet, PLChangeHandlingContainer, PLDelayedFiledSystemDeletions, PLDelayedSaveActions, PLMergePolicy, PLPhotoLibrary, PLPhotoLibraryPathManager;

@protocol PLManagedObjectContextPTPNotificationDelegate;

@interface PLManagedObjectContext : NSManagedObjectContext

{
    _Bool _hasMetadataChanges;
    _Bool _isConnectedToChangeHandling;
    _Bool _mergingChanges;
    _Bool _savingDuringMerge;
    _Bool _isInitializingSingletons;
    _Bool _isBackingALAssetsLibrary;
    _Bool _isObservingChangesForPTPNotificationDelegate;
    _Bool _needsBackgroundJobProcessing;
    PLMergePolicy *_mergePolicy;
    PLDelayedFiledSystemDeletions *_delayedDeletions;
    NSMutableSet *_avalancheUUIDsForUpdate;
    NSMutableDictionary *_uuidsForCloudDeletion;
    _Bool _syncChangeMarker;
    NSMutableDictionary *_updatedObjectsAttributes;
    NSMutableDictionary *_updatedObjectsRelationships;
    PLPhotoLibrary *_photoLibrary;
    PLPhotoLibraryPathManager *_pathManager;
    PLDelayedSaveActions *_delayedSaveActions;
    PLChangeHandlingContainer *_changeHandlingContainer;
    struct os_unfair_lock_s _invalidationStateLock;
    NSError *_invalidationReason;
    _Bool _regenerateVideoThumbnails;
    int _changeSource;
    id <PLManagedObjectContextPTPNotificationDelegate> _ptpNotificationDelegate;
}

@property (nonatomic, readonly) _Bool mergingChanges;
@property (nonatomic, readonly) _Bool savingDuringMerge;
@property (nonatomic) _Bool isInitializingSingletons;
@property (retain, nonatomic) PLDelayedFiledSystemDeletions *delayedDeletions;
@property (weak, nonatomic) id <PLManagedObjectContextPTPNotificationDelegate> ptpNotificationDelegate;
@property (nonatomic) _Bool isBackingALAssetsLibrary;
@property (nonatomic, readonly) PLDelayedSaveActions *delayedSaveActions;
@property (weak, nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) _Bool isUserInterfaceContext;
@property (nonatomic) _Bool regenerateVideoThumbnails;
@property (nonatomic) _Bool hasMetadataChanges;
@property (nonatomic) int changeSource;

+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (void)removePhotosDatabaseWithPathManager:(id)arg1;
+ (_Bool)hasConfiguredPhotoLibrary;
+ (void)getPersistentStoreURL:(id *)arg1 options:(id *)arg2 forDatabasePath:(id)arg3;
+ (id)changeNotificationObjectIDKeys;
+ (unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2;
+ (_Bool)_isAssetLibraryFetchingAlbum:(id)arg1;
+ (_Bool)assetsLibraryLoggingEnabled;
+ (void)recordChangedKeys:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4;
+ (_Bool)canMergeRemoteChanges;
+ (_Bool)shouldHavePhotoLibrary;
+ (id)contextForPhotoLibrary:(id)arg1 automaticallyMerges:(_Bool)arg2 name:(const char *)arg3;
+ (id)contextForRepairingSingletonObjects:(const char *)arg1 libraryURL:(id)arg2 error:(id *)arg3;
+ (id)contextForManagedObjectLookupItemCache:(id)arg1 coordinator:(id)arg2;
+ (id)__processEntityByName:(id)arg1 obj:(id)arg2;
+ (id)__processSubEntityByName:(id)arg1 entity:(id)arg2 withEntityData:(id)arg3;
+ (void)__prepareEntityPropertyLookups;
+ (id)_attributeNamesByIndexByEntityNames;
+ (id)_indexesByAttributeNamesByEntityNames;
+ (id)_relationshipNamesByIndexByEntityNames;
+ (id)_indexesByRelationshipNamesByEntityNames;
+ (unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3;
+ (id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3;
+ (id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2;
+ (id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (void)recordChangedProperties:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4;
+ (id)changeNotificationObjectMutationKeys;
+ (id)changeNotificationObjectKeys;
+ (id)changeNotificationObjectIDMutationKeys;
+ (id)sanitizedErrorFromError:(id)arg1;

- (void)dealloc;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (void)performWithOptions:(unsigned long long)arg1 andBlock:(CDUnknownBlockType)arg2;
- (_Bool)save:(id *)arg1;
- (id)executeRequest:(id)arg1 error:(id *)arg2;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (_Bool)isReadOnly;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(_Bool)arg2;
- (id)pathManager;
- (id)globalValueForKey:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)invalidateWithReason:(id)arg1;
- (id)libraryBundle;
- (id)initWithConcurrencyType:(unsigned long long)arg1 libraryBundle:(id)arg2;
- (id)initWithConcurrencyType:(unsigned long long)arg1 pathManager:(id)arg2 changeHandlingContainer:(id)arg3 coordinator:(id)arg4;
- (_Bool)isDatabaseCreationContext;
- (void)withDispatchGroup:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
- (_Bool)isValidForSelector:(SEL)arg1 error:(id *)arg2;
- (void)_logFaultForPotentialySlowFetchRequeset:(id)arg1;
- (void)_simulateCrashIfNotAssetsd;
- (_Bool)pl_performWithOptions:(unsigned long long)arg1 andBlock:(CDUnknownBlockType)arg2;
- (void)connectToChangeHandling;
- (void)disconnectFromChangeHandling;
- (void)recordManagedObjectWillSave:(id)arg1;
- (void)recordChangesFromTriggerModifiedObjectIDs:(id)arg1;
- (void)_recordChangedKeys:(id)arg1 forObjectID:(id)arg2;
- (void)getAndClearUpdatedObjectsAttributes:(id *)arg1 relationships:(id *)arg2;
- (void)_createDelayedSaveActionsWithTransaction:(id)arg1;
- (void)_destroyDelayedSaveActions;
- (_Bool)hasPreviouslyMergedDeleteForObject:(id)arg1;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (void)recordCloudDeletionForObject:(id)arg1;
- (void)_addCloudUUID:(id)arg1 forDeletionType:(long long)arg2;
- (id)getAndClearRecordedObjectsForCloudDeletion;
- (void)recordSyncChangeMarker;
- (_Bool)getAndClearSyncChangeMarker;
- (void)updateTransactionAuthor;
- (_Bool)_tooManyAssetChangesToHandle:(unsigned long long)arg1;
- (void)recordNeedsBackgroundJobProcessing;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(_Bool)arg2;
- (void)resetAllFetchingAlbums;
- (_Bool)_adjustmentTimestampChangedChangedAttribute:(id)arg1 from:(id)arg2;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 adjustedIDs:(id)arg4 ofEntityKind:(id)arg5 fromRemoteContextDidSaveObjectIDsNotification:(id)arg6;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (void)appendDelayedDeletionsToXPCMessage:(id)arg1;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;

@end
