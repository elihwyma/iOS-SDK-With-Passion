/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class ICAccount, ICAccountUtilities, ICFolderCustomNoteSortType, ICManagedObjectContextUpdater, ICNote, ICNotesCrossProcessChangeCoordinator, ICPersistentContainer, NSArray, NSData, NSDictionary, NSError, NSManagedObjectContext, NSString, NSTimer;

@protocol OS_dispatch_queue;

@interface ICNoteContext : NSObject

{
    _Bool _delaySaving;
    _Bool _databaseOpenFailedDueToLowDiskSpace;
    _Bool _saving;
    _Bool _shouldEnsureLocalAccount;
    ICPersistentContainer *_persistentContainer;
    ICNotesCrossProcessChangeCoordinator *_crossProcessChangeCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    ICNote *_currentNote;
    NSError *_databaseOpenError;
    NSTimer *_updateAttachmentLocationsTimer;
    unsigned long long _contextOptions;
    ICManagedObjectContextUpdater *_contextUpdater;
    ICAccountUtilities *_accountUtilities;
    NSTimer *_trashDeletionTimer;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSDictionary *_persistentStoresByAccountId;
}

@property (nonatomic) unsigned long long contextOptions;
@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) ICNotesCrossProcessChangeCoordinator *crossProcessChangeCoordinator;
@property (retain, nonatomic) ICManagedObjectContextUpdater *contextUpdater;
@property (getter=isSaving) _Bool saving;
@property (retain, nonatomic) ICAccountUtilities *accountUtilities;
@property (retain, nonatomic) NSTimer *trashDeletionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue;
@property (nonatomic) _Bool shouldEnsureLocalAccount;
@property (retain, nonatomic) NSDictionary *persistentStoresByAccountId;
@property (nonatomic) _Bool delaySaving;
@property (nonatomic, readonly) _Bool isSharedContext;
@property (readonly) ICPersistentContainer *persistentContainer;
@property (retain, nonatomic) ICNote *currentNote;
@property (retain, nonatomic) NSError *databaseOpenError;
@property (nonatomic) _Bool databaseOpenFailedDueToLowDiskSpace;
@property (retain, nonatomic) NSTimer *updateAttachmentLocationsTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) ICAccount *noteContainerAccount;
@property (nonatomic, readonly) ICFolderCustomNoteSortType *customNoteSortType;
@property (nonatomic, readonly) _Bool isSharedViaICloud;
@property (nonatomic, readonly) _Bool isAllNotesContainer;
@property (nonatomic, readonly) _Bool canBeSharedViaICloud;
@property (nonatomic, readonly) _Bool supportsEditingNotes;
@property (nonatomic, readonly) _Bool isTrashFolder;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSArray *visibleSubFolders;
@property (retain, nonatomic) NSData *subFolderOrderMergeableData;

+ (_Bool)isActive;
+ (id)sharedContext;
+ (id)searchIndexerDataSource;
+ (_Bool)hasContextOptions:(unsigned long long)arg1;
+ (void)markOldTrashedNotesForDeletionInContext:(id)arg1;
+ (_Bool)legacyNotesDisabled;
+ (_Bool)updateSharedStateFile:(id)arg1 toState:(_Bool)arg2 error:(id *)arg3;
+ (void)setLegacyNotesDisabled:(_Bool)arg1;
+ (void)startSharedContextWithOptions:(unsigned long long)arg1;
+ (_Bool)hasSharedContext;
+ (_Bool)isSingleRunningNotesApp;
+ (id)filenameFromFileWrapper:(id)arg1;
+ (void)crashThisApp;

- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (_Bool)save;
- (_Bool)save:(id *)arg1;
- (id)persistentStoreCoordinator;
- (id)accountName;
- (void)applicationWillTerminate;
- (_Bool)isDeleted;
- (void)managedObjectContextDidSave:(id)arg1;
- (_Bool)saveImmediately;
- (void)deleteEverything;
- (id)primaryICloudACAccount;
- (void)managedObjectContextUpdater:(id)arg1 objectDidChange:(id)arg2;
- (_Bool)supportsVisibilityTestingType:(long long)arg1;
- (id)predicateForSearchableNotes;
- (id)predicateForSearchableAttachments;
- (id)noteVisibilityTestingForSearchingAccount;
- (_Bool)hasContextOptions:(unsigned long long)arg1;
- (void)saveAndClearDecryptedDataIfNecessary;
- (void)addOrDeleteLocalAccountIfNecessary;
- (_Bool)hasAnyContextOptions:(unsigned long long)arg1;
- (void)startSearchIndexerChangeObservingIfNecessary;
- (void)setupCrossProcessChangeCoordinator;
- (void)loadAdditionalPersistentStores;
- (void)accountsDidChange:(id)arg1;
- (void)setupTrashDeletionTimer;
- (void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1;
- (void)purgeDeletedObjectsInManagedObjectContext:(id)arg1;
- (id)newWorkerManagedObjectContext;
- (_Bool)recoverFromSaveError;
- (void)cleanupAdditionalPersistentStores;
- (id)allICloudACAccounts;
- (id)predicateForVisibleNotes;
- (id)predicateForPinnedNotes;
- (id)fetchedResultsControllerForFetchRequest:(id)arg1 sectionNameKeyPath:(id)arg2;
- (id)persistentContainerQueue;
- (void)clearPersistentContainer;
- (void)refreshPersistentStoresByAccountIdFromPersistentStores:(id)arg1;
- (void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)arg1 persistentContainer:(id)arg2;
- (id)defaultPersistentStoreFromPersistentStores:(id)arg1;
- (id)storeFilenameForAccountIdentifier:(id)arg1;
- (id)titleForNavigationBar;
- (_Bool)noteIsVisible:(id)arg1;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (id)titleForTableViewCell;
- (id)detailForTableViewCell;
- (_Bool)isModernCustomFolder;
- (void)saveSubFolderMergeableDataIfNeeded;
- (_Bool)mergeWithSubFolderMergeableData:(id)arg1;
- (void)updateSubFolderMergeableDataChangeCount;
- (void)refreshAll;
- (id)newFetchedResultsControllerForAllAccounts;
- (void)reloadPersistentContainer;
- (id)persistentStoreForAccountID:(id)arg1;
- (void)destroyPersistentStore;
- (void)purgeEverything;
- (id)customNoteSortTypeValue;
- (void)postMoveUpdateChangeCountForNote:(id)arg1;

@end
