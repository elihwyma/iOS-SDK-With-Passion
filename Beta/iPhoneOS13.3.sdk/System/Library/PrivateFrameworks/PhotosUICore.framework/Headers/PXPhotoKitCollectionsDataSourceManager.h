/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCollectionsDataSourceManager.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, PHCollectionList, PHFetchResult, PHPhotoLibrary, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManagerConfiguration;

@protocol OS_os_log;

@interface PXPhotoKitCollectionsDataSourceManager : PXCollectionsDataSourceManager

{
    PHCollectionList *_collectionList;
    PHFetchResult *_collectionsFetchResult;
    PHPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_subCollectionFetchResultsCache;
    NSMutableDictionary *_subCollectionKeyAssetFetchResultsCache;
    NSMutableDictionary *_collectionIndexPathByCollection;
    NSOperationQueue *_subCollectionFetchOperationQueue;
    NSOperationQueue *_subCollectionKeyAssetsFetchOperationQueue;
    _Bool _performedBackgroundFetching;
    _Bool _needsBackgroundFetching;
    _Bool _prepareBackgroundFetching;
    _Bool _startBackgroundFetching;
    _Bool _publishChangesScheduledOnRunLoop;
    NSMutableDictionary *_fetchResultsByPendingChangedCollections;
    NSMutableSet *_changedSubCollections;
    _Bool _isPhotoLibraryEmpty;
    NSMutableDictionary *__subCollectionActiveCountFetchOperations;
    NSMutableDictionary *__subCollectionActiveKeyAssetsFetchOperations;
    NSArray *__collectionListBySection;
    NSArray *__collectionsFetchResultBySection;
    NSArray *__virtualCollections;
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_configuration;
}

@property (nonatomic, readonly) NSMutableDictionary *_subCollectionActiveCountFetchOperations;
@property (nonatomic, readonly) NSMutableDictionary *_subCollectionActiveKeyAssetsFetchOperations;
@property (retain, nonatomic, setter=_setCollectionListBySection:) NSArray *_collectionListBySection;
@property (retain, nonatomic, setter=_setCollectionsFetchResultBySection:) NSArray *_collectionsFetchResultBySection;
@property (retain, nonatomic) NSArray *_virtualCollections;
@property (readonly) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration;
@property (readonly) NSObject<OS_os_log> *dataSourceManagerLog;
@property (nonatomic, readonly) long long numberOfPendingKeyAssetFetches;
@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic, readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedKeyAssetsFetchQueue;
+ (id)sharedSubCollectionsFetchQueue;

- (void)dealloc;
- (_Bool)_isEmpty;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)canEditAlbums;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)createInitialDataSource;
- (id)_subitemChangeDetailsByItemBySection;
- (id)_newDataSource;
- (void)startBackgroundFetchingIfNeeded;
- (id)indexPathForCollection:(id)arg1;
- (void)collectionFetchOperationDidBegin:(id)arg1;
- (void)collectionFetchOperationDidComplete:(id)arg1;
- (void)collectionFetchOperationDidCancel:(id)arg1;
- (void)_updateFilteredCollectionsFetchResults;
- (unsigned long long)_fixedOrderPriorityForVirtualCollection:(id)arg1;
- (struct PXTwoTuple *)_getSectionedCollectionListAndFetchResultsFromFetchResult:(id)arg1;
- (struct PXTwoTuple *)_filterFetchResult:(id)arg1;
- (_Bool)_shouldIncludeCollection:(id)arg1;
- (void)_updateCollectionIndexMappingForFilteredFetchResults;
- (void)_enumerateAllPhotoKitCollectionsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)estimatedCountForAssetCollection:(id)arg1;
- (_Bool)_containsAnyAssets:(id)arg1;
- (_Bool)_containsAnyAlbumsWithAssets:(id)arg1;
- (void)_recursivelyEnumerateAssetCollectionsInFetchResult:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2;
- (void)prepareBackgroundFetchingIfNeeded;
- (void)_prepareBackgroundFetchingIfNeededForCollection:(id)arg1;
- (void)_startFetchOperations;
- (void)_fetchAndUpdateCountsForCollection:(id)arg1;
- (void)_updateVisibleCountsForCollection:(id)arg1 withWithFetchResult:(id)arg2;
- (void)_startKeyAssetsFetchOperations;
- (void)_fetchKeyAssetsForCollection:(id)arg1;
- (void)_updateKeyAssetsCacheForCollection:(id)arg1 withFetchResult:(id)arg2 otherFetchResultsByAssetCollection:(id)arg3;
- (void)_updateDataSourceForChangeOnCollection:(id)arg1 withFetchResult:(id)arg2;
- (void)_publishPendingCollectionChanges;
- (void)_endSignpostForFetchOperation:(id)arg1;
- (id)keyAssetsFetchResultForCollection:(id)arg1;
- (id)assetsFetchResultForCollection:(id)arg1;
- (_Bool)hasAssetsFetchResultForCollection:(id)arg1;
- (id)fetchResultForSubCollection:(id)arg1;
- (id)uncachedFetchResultForSubCollection:(id)arg1;
- (_Bool)isCachedFetchResultOutdatedForCollection:(id)arg1;
- (id)_cachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (id)uncachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (_Bool)_updateCachedSubCollectionFetchResultsForChange:(id)arg1 fetchResultChangeDetails:(id)arg2;
- (id)_changedSubCollectionIndexesBySections;
- (_Bool)_needsKeyAssetsFetchResultForCollection:(id)arg1;
- (_Bool)_needsFetchResultForCollection:(id)arg1;
- (_Bool)_isPlacesAlbumAssetCollection:(id)arg1;
- (_Bool)_isImportsAssetCollection:(id)arg1;
- (_Bool)containsAnyAssets:(id)arg1;
- (_Bool)canDeleteCollection:(id)arg1;
- (_Bool)canRenameCollection:(id)arg1;
- (_Bool)canReorderCollection:(id)arg1;
- (void)startCoalescingFetchResultChanges;
- (void)stopCoalescingAndPublishFetchResultChanges;
- (void)waitUntilBackgroundFetchingFinishedWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
