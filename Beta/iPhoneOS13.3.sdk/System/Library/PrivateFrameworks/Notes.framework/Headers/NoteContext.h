/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@class AccountUtilities, CPExclusiveLock, ICManagedObjectContextUpdater, NSManagedObjectContext, NSMutableDictionary, NSNumber, NoteAccountObject, NoteStoreObject;

@interface NoteContext : NSObject

{
    NSManagedObjectContext *_managedObjectContext;
    NoteStoreObject *_localStore;
    NoteAccountObject *_localAccount;
    AccountUtilities *_accountUtilities;
    NSManagedObjectContext *_nextIdContext;
    CPExclusiveLock *_nextIdLock;
    NSNumber *_nextId;
    CPExclusiveLock *_objectCreationLock;
    unsigned long long _notificationCount;
    _Bool _logChanges;
    _Bool _indexInBatches;
    _Bool _hasPriorityInSaveConflicts;
    _Bool _inMigrator;
    NSMutableDictionary *_notePropertyObjectsRealized;
    _Bool _isMainContext;
    _Bool _usePrivateQueue;
    ICManagedObjectContextUpdater *_mocUpdater;
}

@property (retain, nonatomic) AccountUtilities *accountUtilities;
@property (nonatomic) _Bool isMainContext;
@property (nonatomic) _Bool usePrivateQueue;
@property (retain, nonatomic) ICManagedObjectContextUpdater *mocUpdater;
@property (retain, nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

+ (id)managedObjectModel;
+ (id)persistentStoreCoordinator;
+ (id)storeOptions;
+ (id)fileProtectionOption;
+ (_Bool)databaseIsCorrupt:(id)arg1;
+ (id)urlForPersistentStore;
+ (id)pathForPersistentStore;
+ (id)pathForIndex;
+ (void)removeSqliteAndIdxFiles;
+ (void)removeConflictingSqliteAndIdxFiles;
+ (id)visibleNotesPredicate;
+ (id)newFetchRequestForNotes;
+ (id)defaultNotesSortDescriptors;
+ (id)generateGUID;
+ (id)newlyAddedAttachmentInContext:(id)arg1;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(_Bool)arg2 context:(id)arg3;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(_Bool)arg2 context:(id)arg3 fetchLimit:(unsigned long long)arg4;
+ (id)searchIndexerDataSource;
+ (_Bool)shouldLogIndexing;
+ (void)setTestsNotesRootPath:(id)arg1;
+ (void)clearTestsNotesRootPath;
+ (id)fileURLProtectionOption;
+ (id)allVisibleNotesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)newManagedObjectContext;
+ (id)newLegacyContext;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)clearCaches;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (_Bool)save:(id *)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)localAccount;
- (_Bool)deleteAccount:(id)arg1;
- (id)localStore;
- (id)allAccounts;
- (void)enableChangeLogging:(_Bool)arg1;
- (id)accountForAccountId:(id)arg1;
- (void)handleMigration;
- (id)newlyAddedAccount;
- (id)newlyAddedStore;
- (_Bool)forceDeleteAccount:(id)arg1;
- (void)_createLocalAccount:(id *)arg1 andStore:(id *)arg2;
- (void)setUpUniqueObjects;
- (_Bool)setUpLocalAccountAndStore;
- (_Bool)setUpLastIndexTid;
- (_Bool)saveSilently:(id *)arg1;
- (_Bool)shouldObserveDarwinNotifications;
- (void)managedObjectContextWillSaveNotification:(id)arg1;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(_Bool)arg2;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(_Bool)arg2 isMainContext:(_Bool)arg3 usePrivateQueue:(_Bool)arg4;
- (_Bool)setUpCoreDataStack;
- (void)tearDownCoreDataStack;
- (id)visibleNotesPredicate;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2 performFetch:(_Bool)arg3;
- (id)newFetchRequestForNotes;
- (id)newlyAddedNoteWithGUID:(id)arg1;
- (id)nextIndex;
- (id)storeForObjectID:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1 sorted:(_Bool)arg2;
- (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(_Bool)arg2;
- (id)allNotesMatchingPredicate:(id)arg1;
- (unsigned long long)countOfNotesMatchingPredicate:(id)arg1;
- (id)liveNotesNeedingBodiesPredicate;
- (void)forceSetUpUniqueObjects;
- (id)allAccountsAsFaults:(_Bool)arg1 prefechedRelationshipKeyPaths:(id)arg2;
- (id)allNotesInCollection:(id)arg1;
- (unsigned long long)countOfStores;
- (unsigned long long)countOfNotesInCollection:(id)arg1;
- (id)_notePropertyObjectForKey:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (id)getNextIdObject;
- (void)trackChanges:(id)arg1;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (id)initForMainContext;
- (id)initForMigrator;
- (id)initWithPrivateQueue;
- (id)initWithAccountUtilities:(id)arg1;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (void)sortNotes:(id)arg1;
- (void)batchFaultNotes:(id)arg1;
- (id)newlyAddedNote;
- (id)newlyAddedAttachment;
- (id)collectionForObjectID:(id)arg1;
- (void)deleteNote:(id)arg1;
- (void)deleteChanges:(id)arg1;
- (_Bool)saveOutsideApp:(id *)arg1;
- (id)allVisibleNotes;
- (unsigned long long)countOfVisibleNotes;
- (id)allVisibleNotesInCollection:(id)arg1;
- (unsigned long long)countOfVisibleNotesInCollection:(id)arg1;
- (id)visibleNoteForObjectID:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)mostRecentlyModifiedNoteInCollection:(id)arg1;
- (id)allNotes;
- (unsigned long long)countOfNotes;
- (id)noteForObjectID:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)collectionForInfo:(id)arg1;
- (id)allStores;
- (id)faultedInStoresForAccounts:(id)arg1;
- (id)defaultStoreForNewNote;
- (_Bool)deleteStore:(id)arg1;
- (_Bool)shouldDisableLocalStore;
- (_Bool)hasMultipleEnabledStores;
- (id)propertyValueForKey:(id)arg1;
- (void)setHasPriorityInSaveConflicts:(_Bool)arg1;
- (void)receiveDarwinNotificationWithChangeLogging:(_Bool)arg1;
- (void)resetNotificationCount;
- (void)cleanUpLocks;
- (void)updateForRecentChanges;
- (id)allVisibleNotesForAccountWithObjectID:(id)arg1;
- (_Bool)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;
- (unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
- (id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1;

@end
