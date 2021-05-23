/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSDictionary, NSMutableDictionary, PLClientServerTransaction, PLPhotoLibrary, PLPhotoLibraryPathManager, PLSearchIndexDateFormatter, PLSearchMetadataStore, PLThrottleTimer, PLZeroKeywordStore, PSIDatabase;

@protocol OS_dispatch_queue, PLSearchIndexManagerSceneTaxonomyProxy;

@interface PLSearchIndexManager : NSObject

{
    PLSearchIndexDateFormatter *_dateFormatter;
    PLPhotoLibraryPathManager *_pathManager;
    PLPhotoLibrary *_photoLibrary;
    PSIDatabase *_db;
    PLZeroKeywordStore *_zeroKeywordStore;
    PLSearchMetadataStore *_searchMetadataStore;
    PLThrottleTimer *_throttleTimer;
    PLClientServerTransaction *_serverTransaction;
    Class _sceneTaxonomyProxyClass;
    id <PLSearchIndexManagerSceneTaxonomyProxy> _sceneTaxonomyProxy;
    NSDictionary *_searchSystemInfo;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_inqUUIDsToProcess;
    NSMutableDictionary *_inqGraphDataByUUID;
    NSMutableDictionary *_inqSynonymsByIndexCategoryMask;
    _Bool _receivedUpdatesWhileIndexing;
    _Bool _hasScheduledCloseIndex;
    _Bool _hasValidSearchIndex;
    _Bool _hasValidSearchSupportingData;
    _Bool _shouldCheckLookupTableIsOutOfSync;
    _Bool _shouldCheckDatabaseIntegrity;
    _Bool _isTrackingRebuild;
    long long _rebuildReason;
    long long _updateState;
    double _lastIndexingStartTime;
    _Bool _startedIndexing;
    _Bool __indexing;
    CDUnknownBlockType __inqAfterIndexingDidIterate;
    NSCountedSet *__pauseReasons;
}

@property (getter=_isIndexing, setter=_setIndexing:) _Bool _indexing;
@property (copy, nonatomic, setter=_setInqAfterIndexingDidIterate:) CDUnknownBlockType _inqAfterIndexingDidIterate;
@property (copy, nonatomic, readonly) NSCountedSet *_pauseReasons;
@property (retain, nonatomic) Class sceneTaxonomyProxyClass;
@property (readonly, getter=isIndexingPaused) _Bool indexingPaused;

+ (id)localeForSearchIndex;
+ (int)currentSearchIndexVersion;
+ (id)_defaultDatabaseDirectoryWithPathManager:(id)arg1;
+ (_Bool)shouldIndexFilenames;
+ (void)setShouldIndexFilenames:(_Bool)arg1;
+ (id)fetchAssetsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAlbumsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchHighlightsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchMomentsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchHighlightUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchMomentUUIDsToPopulateAssetSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (id)_dbPath;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;
- (id)initWithPathManager:(id)arg1;
- (id)_defaultDatabaseDirectory;
- (id)defaultDatabasePath;
- (id)defaultSearchMetadataStorePath;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;
- (void)_onQueueAsyncWithDelay:(double)arg1 perform:(CDUnknownBlockType)arg2;
- (_Bool)_inqUpdateSearchSystemInfo:(id)arg1 forKey:(id)arg2 logMessage:(id)arg3;
- (_Bool)_inqUpdateVersion;
- (_Bool)_inqUpdateLocale;
- (_Bool)_inqUpdateSceneTaxonomySHA:(id)arg1;
- (_Bool)_inqUpdateWordEmbeddingVersion:(id)arg1;
- (void)_inqStartTrackingRebuildWithReason:(long long)arg1;
- (void)_inqEndTrackingRebuildIfNeeded;
- (void)_inqStartTrackingUpdateIfAble;
- (void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
- (void)_inqEndTrackingUpdateIfNeeded;
- (unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(_Bool)arg1;
- (void)enqueuedUUIDsCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
- (_Bool)_inqIsIndexingPaused;
- (void)_inqSetIndexingPaused:(_Bool)arg1 reason:(id)arg2;
- (void)_setIndexingPaused:(_Bool)arg1 synchronously:(_Bool)arg2 reason:(id)arg3;
- (void)pauseIndexingWithReason:(id)arg1;
- (void)unpauseIndexingWithReason:(id)arg1;
- (void)_throttleTimerFire:(id)arg1;
- (void)_inqCloseSearchIndexAndDelete:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)ensureSearchIndexExistsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)dropSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)_inqResetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (void)resetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg1;
- (id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg1;
- (id)_updatesEnsuringMutableArraysFromUpdates:(id)arg1;
- (void)applyUpdates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_cxindexProgressPath;
- (id)_graphDataProcessPath;
- (id)_synonymsProcessPath;
- (id)_oldDbPath;
- (id)_searchMetadataStorePath;
- (id)_dbSearchSystemInfoPath;
- (_Bool)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (void)_inqScheduleCloseIndexIfNeeded;
- (void)_inqTakeClientServerTransactionIfNeeded;
- (void)_inqDropClientServerTransactionIfNeeded;
- (void)_inqCloseIndexIfAbleOrForce:(_Bool)arg1 isDelete:(_Bool)arg2;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqEnsureSearchSystemInfoExists;
- (void)_inqEnsureSearchProgressExists;
- (void)_inqIndexPhotoLibrary;
- (void)_inqEnsureSceneTaxonomyProxyExists;
- (void)_inqEnsurePhotoLibraryExists;
- (id)_inqPhotoLibrary;
- (long long)_inqRebuildReasonIfSearchIndexIsValid;
- (long long)_inqRebuildReasonIfSearchSupportingDataIsValid;
- (id)_assetUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (id)_collectionUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (void)_inqValidateSearchIndex;
- (void)_inqResumeIndexingIfNeeded;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1 andAssetUUIDsBySocialGroup:(id)arg2;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetUUIDsBySocialGroup:(id)arg1;
- (void)_fetchMemoriesToIndexWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)_featuredPeopleIdentifiersFromPhotosGraphData:(id)arg1 photosGraphVersion:(long long)arg2;
- (id)searchIndexManagerLog;

@end
