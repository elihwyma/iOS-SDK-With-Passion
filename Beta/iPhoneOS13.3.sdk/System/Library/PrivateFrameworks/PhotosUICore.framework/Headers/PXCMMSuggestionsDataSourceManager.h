/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSMutableOrderedSet, NSObject, NSString, PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceContext, PXCMMSuggestionsDataSourceState;

@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSourceManager : PXSectionedDataSourceManager

{
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _isLoading;
    _Bool _hasCreatedInitialDataSource;
    PXCMMSuggestionsDataSourceState *__state;
    NSMutableOrderedSet *__remainingAssetCollectionsObjectIDsToFetch;
    PXCMMSuggestionsDataSourceContext *_context;
}

@property (retain, nonatomic) PXCMMSuggestionsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingAssetCollectionsObjectIDsToFetch;
@property (nonatomic, readonly) PXCMMSuggestionsDataSourceContext *context;
@property (nonatomic, readonly) PXCMMSuggestionsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (id)mostRecentCreationDate;
+ (id)emptyDataSourceManager;
+ (id)dataSourceManager;
+ (id)currentDataSourceManager;
+ (id)keyPathsAffectingCurrentDataSourceManager;
+ (id)mockDataSourceManagerFromRecentLargeMoments;
+ (id)_fetchResultForMockRecentLargeMomentsDataSourceManager;
+ (id)_fetchResultForTypeGraphWithContext:(id)arg1;
+ (id)_fetchResultForEmptyDataSourceManager;
+ (id)dataSourceManagerWithParticipants:(id)arg1 fetchLimit:(long long)arg2 shouldShowAccepted:(_Bool)arg3 message:(id)arg4 date:(id)arg5 matchingStrategy:(unsigned long long)arg6;

- (id)init;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)assetCollections;
- (id)createInitialDataSource;
- (void)_startLoadingIfNeeded;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;
- (id)initWithAssetCollectionsFetchResult:(id)arg1;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (id)initWithContext:(id)arg1 assetCollectionsFetchResult:(id)arg2;
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatchesWithAssetCollections:(id)arg1;

@end
