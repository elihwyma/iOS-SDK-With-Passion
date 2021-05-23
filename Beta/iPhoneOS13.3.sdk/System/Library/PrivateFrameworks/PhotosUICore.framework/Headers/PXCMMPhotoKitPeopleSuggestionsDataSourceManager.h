/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMPeopleSuggestionsDataSourceManager.h>

@class NSMutableOrderedSet, NSString, PHAssetCollection, PXCMMPhotoKitPeopleSuggestionsDataSource, PXCMMPhotoKitPeopleSuggestionsDataSourceState, PXUpdater;

@interface PXCMMPhotoKitPeopleSuggestionsDataSourceManager : PXCMMPeopleSuggestionsDataSourceManager

{
    _Bool _isPrefetching;
    _Bool _hasCreatedInitialDataSource;
    _Bool _needsDeferredLoading;
    _Bool _hasStartedLoadingFinalDataSource;
    _Bool _hasFinishedLoadingFinalDataSource;
    PXCMMPhotoKitPeopleSuggestionsDataSourceState *__state;
    NSMutableOrderedSet *__remainingPeopleToFetch;
    PHAssetCollection *_assetCollection;
    PXUpdater *_updater;
}

@property (nonatomic, readonly) PXCMMPhotoKitPeopleSuggestionsDataSource *dataSource;
@property (retain, nonatomic) PXCMMPhotoKitPeopleSuggestionsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingPeopleToFetch;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) PXUpdater *updater;
@property (nonatomic) _Bool hasStartedLoadingFinalDataSource;
@property (nonatomic) _Bool hasFinishedLoadingFinalDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedWorkerQueue;
+ (id)mockDataSourceManagerFromPeopleInPhotosInAssetCollection:(id)arg1;
+ (id)photosGraphPeopleSuggestionsDataSourceManagerWithAssetCollection:(id)arg1;

- (id)people;
- (void)startLoading;
- (_Bool)isLoading;
- (void)cancelLoading;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)createInitialDataSource;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (id)initWithPeopleFetchResult:(id)arg1;
- (id)_initWithAssetCollection:(id)arg1;
- (void)boostLoading;
- (void)_loadFinalDataSource;
- (void)_handleFinishedLoadingFinalDataSourceFetchResult:(id)arg1;
- (void)startPrefetchingIfNeeded;
- (void)_workerQueue_fetchRemainingPeopleInBatches;

@end
