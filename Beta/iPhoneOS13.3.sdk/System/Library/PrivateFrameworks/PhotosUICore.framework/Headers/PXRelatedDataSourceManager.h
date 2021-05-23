/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSDate, NSObject, PHFetchResult, PXPhotosDetailsContext, PXRelatedDataSource, PXRelatedSettings;

@protocol OS_dispatch_queue;

@interface PXRelatedDataSourceManager : PXSectionedDataSourceManager

{
    _Bool _didStartLoading;
    _Bool _shouldCancelLoading;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PXRelatedSettings *_settings;
    unsigned long long _fetchLimit;
    unsigned long long _initialBatchSize;
    unsigned long long _loadBatchSize;
    NSDate *_loadStartDate;
    _Bool _didLoadInitialDataSource;
    _Bool _useItemIndexPaths;
    _Bool __canceled;
    unsigned long long __initialBatchSize;
    unsigned long long __loadBatchSize;
    PXPhotosDetailsContext *__context;
    PHFetchResult *__collectionListFetchResult;
    PHFetchResult *__relatedCollections;
    PHFetchResult *__preparedRelatedCollections;
}

@property (nonatomic, readonly) PXPhotosDetailsContext *_context;
@property (nonatomic, readonly) PHFetchResult *_collectionListFetchResult;
@property (nonatomic, getter=_isCanceled, setter=_setCanceled:) _Bool _canceled;
@property (retain, nonatomic, setter=_setRelatedCollections:) PHFetchResult *_relatedCollections;
@property (retain, nonatomic, setter=_setPreparedRelatedCollections:) PHFetchResult *_preparedRelatedCollections;
@property (nonatomic, readonly) _Bool useItemIndexPaths;
@property (nonatomic) unsigned long long initialBatchSize;
@property (nonatomic) unsigned long long loadBatchSize;
@property (nonatomic, readonly) PXRelatedDataSource *dataSource;

- (id)init;
- (void)startLoading;
- (void)cancelLoading;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (id)_referenceObject;
- (id)initWithPhotosDetailsContext:(id)arg1;
- (id)initWithPhotosDetailsContext:(id)arg1 useItemIndexPaths:(_Bool)arg2;
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;
- (id)createPhotosDataSourceForRelatedEntry:(id)arg1;
- (void)_startBackgroundLoad;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 attemptIndex:(long long)arg2;
- (id)_collectionsRelatedToReferenceObject:(id)arg1;
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 relatedCollections:(id)arg2;
- (id)_referenceObjectFromCollectionListFetchResult:(id)arg1;
- (id)_collectionListRelatedToObject:(id)arg1;
- (id)_keyAssetFetchResultForRelatedCollection:(id)arg1 referenceAsset:(id)arg2;
- (id)_referenceAssetForReferenceObject:(id)arg1;

@end
