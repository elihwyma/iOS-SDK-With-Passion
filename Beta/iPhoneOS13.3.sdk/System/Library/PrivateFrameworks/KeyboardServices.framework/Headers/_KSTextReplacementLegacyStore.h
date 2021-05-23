/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL;

@protocol OS_dispatch_queue, OS_os_transaction;

@interface _KSTextReplacementLegacyStore : NSObject

{
    NSObject<OS_os_transaction> *_uptimeTransaction;
    _Bool _suspendedForAccountChange;
    _Bool _forceMaintenance;
    _Bool _pendingSampleShortcutImport;
    _Bool _minimumUptimeDidExpire;
    _Bool _didScheduleCacheUpdate;
    _Bool _shouldUpdateTheCache;
    _Bool _ubiquityStoreLoaded;
    _Bool _shouldDisableCaching;
    NSString *_cacheFilePath;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStore *_persistentStore;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSDate *_lastMaintenanceDate;
    long long _importedSinceMaintenance;
    NSURL *_baseURL;
    NSDate *_persistentStoreDidLoadTime;
    NSDate *_ubiquityStoreLoadStartTime;
}

@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStore *persistentStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) _Bool suspendedForAccountChange;
@property (nonatomic) _Bool forceMaintenance;
@property (retain, nonatomic) NSDate *lastMaintenanceDate;
@property (nonatomic) long long importedSinceMaintenance;
@property (nonatomic) _Bool pendingSampleShortcutImport;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) _Bool minimumUptimeDidExpire;
@property (retain, nonatomic) NSDate *persistentStoreDidLoadTime;
@property (nonatomic) _Bool didScheduleCacheUpdate;
@property (nonatomic) _Bool shouldUpdateTheCache;
@property (nonatomic) _Bool ubiquityStoreLoaded;
@property (retain, nonatomic) NSDate *ubiquityStoreLoadStartTime;
@property (nonatomic) _Bool shouldDisableCaching;
@property (copy, nonatomic) NSString *cacheFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cachedStorePath;
+ (id)basePersistentStoreURL;
+ (id)textReplacementEntriesFromManagedObjects:(id)arg1;
+ (id)legacyImportFilePaths;
+ (id)legacyImportWordKeyPairsFromFiles:(id)arg1;
+ (id)legacyStorePath;

- (id)init;
- (void)dealloc;
- (_Bool)save;
- (void)cleanup;
- (void)removeAllEntries;
- (id)initWithBaseURL:(id)arg1;
- (id)entityDescription;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)managedObjectModelURL;
- (id)entriesMatchingPredicate:(id)arg1;
- (void)iCloudAccountDidChange:(id)arg1;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (void)performMaintenanceIfNecessary;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)prepareForMigration;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (double)minimumUptimeRemaining;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (void)importSampleShortcutsIfNecessary;
- (void)endMinimumUptime;
- (void)unloadPersistentStore;
- (void)requestMinimumUptime;
- (void)persistentStoreCoordinatorStoresWillChange:(id)arg1;
- (void)persistentStoreCoordinatorStoresDidChange:(id)arg1;
- (void)persistentStoreDidImportUbiquitousContentChanges:(id)arg1;
- (id)currentStoreIndentity;
- (_Bool)detectAndCleanDuplicatesWithContext:(id)arg1;
- (void)loadPersistentStoreIfNecessary;
- (void)runMaintenanceIncludeLocalVariations:(_Bool)arg1;
- (_Bool)mergeEntriesFromAllStoresIncludeLocalVariations:(_Bool)arg1;
- (_Bool)mergeEntriesForUbiquityIdentityChangeIfNecessary;
- (void)insertEntryWithValue:(id)arg1;
- (id)_deleteTransaction:(id)arg1;
- (void)runLegacyMigration;
- (id)removeEntriesWithPredicate:(id)arg1;
- (id)entriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)entriesUsingSortDescriptors:(id)arg1;
- (id)entriesFromCache:(id *)arg1;
- (void)scheduleCacheUpdate:(id)arg1;
- (_Bool)writeEntriesToCache:(id)arg1;
- (_Bool)_shouldMergeShortcut:(id)arg1 phrase:(id)arg2 intoContext:(id)arg3;
- (_Bool)_mergeShortcut:(id)arg1 phrase:(id)arg2 fromContext:(id)arg3;
- (id)mergeShortcutsFromContext:(id)arg1;
- (_Bool)migrateEntriesFromStoreAtURL:(id)arg1 error:(id *)arg2;
- (void)retirePersistentStoreAtURL:(id)arg1;
- (void)didMergeEntriesForOtherLocalPeers:(id)arg1;
- (id)storeURLForMergeAfterUbiquityIdentityChangeFromToken:(id)arg1 toToken:(id)arg2 withLastKnownToken:(id)arg3 shouldDeleteFirst:(_Bool *)arg4;
- (_Bool)mergeEntriesForUbiquityIdentityChangeFromURL:(id)arg1 firstDelete:(_Bool)arg2;
- (void)didMergeEntriesForNewUbiquityIdentity:(id)arg1;
- (_Bool)needsMaintenance;
- (void)didMaintenance;
- (void)loadMaintenancePreferencesIfNecessary;
- (void)_deleteDuplicatesOfShortcut:(id)arg1 phrase:(id)arg2 count:(long long)arg3 withContext:(id)arg4;
- (void)importLegacyEntries;
- (void)migrateTellurideData;
- (void)migrateSundanceData;

@end
