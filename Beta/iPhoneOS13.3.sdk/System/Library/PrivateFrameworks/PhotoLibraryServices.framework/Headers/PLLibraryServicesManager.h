/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSMutableDictionary, NSProgress, NSString, NSURL, PLAssetsdCrashRecoverySupport, PLBackgroundJobService, PLChangeHandlingContainer, PLClientServerTransaction, PLCloudPhotoLibraryManager, PLDatabaseContext, PLDupeManager, PLImageWriter, PLJournalManager, PLKeywordManager, PLLazyObject, PLLibraryServicesCPLReadiness, PLLibraryServicesStateNode, PLModelMigrator, PLMomentGenerationDataManager, PLPairing, PLPhotoLibrary, PLPhotoLibraryBundle, PLPhotoLibraryPathManager, PLQuickActionManager, PLReframeService, PLRelationshipOrderKeyManager, PLSearchIndexManager;

@protocol OS_dispatch_queue, PLLibraryServicesDelegate, PLMigrationServiceProtocol;

@interface PLLibraryServicesManager : NSObject

{
    PLPhotoLibraryBundle *_libraryBundle;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyPhotoLibrary;
    PLLazyObject *_lazyImageWriter;
    PLLazyObject *_lazyModelMigrator;
    PLLazyObject *_lazySearchIndexManager;
    PLLazyObject *_lazyDatabaseContext;
    PLLazyObject *_lazyDupeManager;
    PLLazyObject *_lazyRelationshipOrderKeyManager;
    PLLazyObject *_lazyMomentGenerationDataManager;
    PLLazyObject *_lazyJournalManager;
    PLLazyObject *_lazyQuickActionManager;
    PLLazyObject *_lazyKeywordManager;
    PLLazyObject *_lazyAlbumCountCoalescer;
    PLLazyObject *_lazyCloudPhotoLibraryManager;
    PLLazyObject *_lazyCrashRecoverySupport;
    PLLazyObject *_lazyPairingManager;
    PLLazyObject *_lazyReframeService;
    PLLazyObject *_lazyCPLReadiness;
    PLClientServerTransaction *_serverTransaction;
    NSObject<OS_dispatch_queue> *_albumCountQueue;
    NSMutableDictionary *_externalWaiterCompletionBlocksByState;
    unsigned int _maxWaiterQoS;
    _Bool _createMode;
    _Bool _active;
    _Bool _finalizing;
    id <PLLibraryServicesDelegate> _libraryServicesDelegate;
    NSError *_invalidationError;
    PLBackgroundJobService *_backgroundJobService;
    NSProgress *_preRunningProgress;
    NSProgress *_postRunningProgress;
    NSString *_upgradeClient;
    id <PLMigrationServiceProtocol> _migrationServiceProxy;
    PLLibraryServicesStateNode *_currentStateNode;
    id _operationCountObservee;
    NSMutableArray *_mutablePendingOperations;
    NSObject<OS_dispatch_queue> *_stateSerializationQueue;
    NSObject<OS_dispatch_queue> *_helperQueue;
}

@property (retain, nonatomic, setter=_setCurrentStateNode:) PLLibraryServicesStateNode *currentStateNode;
@property (retain, nonatomic) id operationCountObservee;
@property (retain) id <PLLibraryServicesDelegate> libraryServicesDelegate;
@property (nonatomic, readonly) NSMutableArray *mutablePendingOperations;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateSerializationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *helperQueue;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isFinalizing) _Bool finalizing;
@property (retain, nonatomic) NSProgress *preRunningProgress;
@property (retain, nonatomic) NSProgress *postRunningProgress;
@property (readonly) long long state;
@property (copy, readonly) NSURL *libraryURL;
@property (weak, readonly) PLPhotoLibraryBundle *libraryBundle;
@property (nonatomic, readonly) NSError *invalidationError;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) PLImageWriter *imageWriter;
@property (readonly) PLModelMigrator *modelMigrator;
@property (readonly) PLSearchIndexManager *searchIndexManager;
@property (readonly) PLDatabaseContext *databaseContext;
@property (readonly) PLDupeManager *dupeManager;
@property (readonly) PLRelationshipOrderKeyManager *relationshipOrderKeyManager;
@property (readonly) PLMomentGenerationDataManager *momentGenerationDataManager;
@property (readonly) PLJournalManager *journalManager;
@property (readonly) PLQuickActionManager *quickActionManager;
@property (readonly) PLKeywordManager *keywordManager;
@property (readonly) PLBackgroundJobService *backgroundJobService;
@property (readonly) PLReframeService *reframeService;
@property (readonly) PLCloudPhotoLibraryManager *cloudPhotoLibraryManager;
@property (readonly) PLAssetsdCrashRecoverySupport *crashRecoverySupport;
@property (readonly) PLPairing *pairingManager;
@property (readonly) PLLibraryServicesCPLReadiness *cplReadiness;
@property (getter=isCreateMode) _Bool createMode;
@property (copy) NSString *upgradeClient;
@property (readonly, getter=isCloudPhotoLibraryEnabled) _Bool cloudPhotoLibraryEnabled;
@property (weak) id <PLMigrationServiceProtocol> migrationServiceProxy;
@property (readonly) PLChangeHandlingContainer *changeHandlingContainer;

+ (id)userDefaults;
+ (long long)_initialState;
+ (long long)_finalState;
+ (id)errorForInvalidationError:(id)arg1 userInfo:(id)arg2;
+ (void)setLibraryServicesDelegateClass:(Class)arg1;
+ (Class)libraryServicesDelegateClass;
+ (id)libraryServicesManagerForLibraryURL:(id)arg1;

- (void)_invalidate;
- (long long)_state;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_transitionToState:(long long)arg1;
- (id)statusDescription;
- (id)initWithLibraryBundle:(id)arg1 backgroundJobService:(id)arg2 delegateClass:(Class)arg3;
- (void)currentLocaleDidChangeNotification:(id)arg1;
- (_Bool)updateSavedLocaleIfNeeded;
- (void)invalidateReverseLocationDataOnAllAssets;
- (void)refreshAlbumCountForAlbumIDs:(id)arg1;
- (_Bool)_isSystemPhotoLibrary;
- (void)_initSystemPhotoLibrarySpecificServices;
- (void)_invalidateSystemPhotoLibrarySpecificServices;
- (id)newAlbumCountCoalescer:(id)arg1;
- (id)newPhotoLibrary;
- (id)newCloudPhotoLibraryManager;
- (id)newCrashRecoverySupport;
- (id)newSearchIndexManager;
- (id)newMomentGenerationDataManager;
- (void)_invalidateMomentGenerationDataManager;
- (void)_invalidateJournalManager;
- (void)_invalidateSearchIndexManager;
- (void)_invalidateModelMigrator;
- (void)_invalidatePhotoLibrary;
- (void)_invalidateAlbumCountCoalescer;
- (void)_invalidateImageWriter;
- (void)_invalidateKeywordManager;
- (void)_invalidatePairingManager;
- (void)_invalidateDupeManager;
- (void)_invalidateRelationshipOrderKeyManager;
- (void)_invalidateQuickActionManager;
- (void)_invalidateDatabaseContext;
- (void)_invalidateCloudPhotoLibraryManager;
- (void)_invalidateCrashRecoverySupport;
- (void)_invalidateReframeService;
- (void)_invalidateBackgroundJobService;
- (void)_invalidateCPLReadiness;
- (id)newJournalManager;
- (void)initializeChangeHandling;
- (void)initializeConstraintsDirector;
- (id)_libraryServicesStateNodeWithState:(long long)arg1;
- (_Bool)enqueueOperation:(id)arg1 error:(id *)arg2;
- (void)shutdownLibraryWithDescription:(id)arg1;
- (void)_increaseStateQueueQoSIfNeeded;
- (void)_resetStateQueueQoS;
- (_Bool)_enqueueOperation:(id)arg1 error:(id *)arg2;
- (id)activeOperations;
- (id)pendingOperations;
- (_Bool)activate:(id *)arg1;
- (void)_dispatchAwaitLibraryStateCompletionHandler:(CDUnknownBlockType)arg1 group:(id)arg2 error:(id)arg3;
- (void)_awaitLibraryState:(long long)arg1 sync:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_enqueueAwaitOperation;
- (void)_waitForAwaitOperation:(id)arg1;
- (_Bool)awaitLibraryState:(long long)arg1 error:(id *)arg2;
- (void)awaitLibraryState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enqueueExternalWaiterCompletionBlockForState:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)transitionToState:(long long)arg1 error:(id *)arg2;
- (_Bool)finalize:(id *)arg1;
- (void)deactivateWithInvalidationError:(id)arg1;
- (_Bool)_canTransitionToState:(long long)arg1 error:(id *)arg2;
- (void)_dispatchExternalWaitersForState:(long long)arg1;
- (void)_startObservingLibraryStateCompletedAllOperations;
- (void)_stopObservingLibraryStateCompletedAllOperations;
- (void)_handleLibraryStateCompletedAllOperations;
- (void)_addPendingOperationsForStateNode:(id)arg1;
- (void)_cancelPendingOperations;
- (_Bool)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
- (void)_setCameraRollCountedInQuota:(_Bool)arg1;
- (void)setICloudPhotosEnabledInternal:(_Bool)arg1;
- (void)didBecomeNonSystemPhotoLibrary;

@end
