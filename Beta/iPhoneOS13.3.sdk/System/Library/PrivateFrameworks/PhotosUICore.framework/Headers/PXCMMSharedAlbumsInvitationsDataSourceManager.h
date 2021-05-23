/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>

@class NSMutableOrderedSet, NSObject, NSString, PXCMMSharedAlbumsInvitationsDataSource, PXCMMSharedAlbumsInvitationsDataSourceState;

@protocol OS_dispatch_queue;

@interface PXCMMSharedAlbumsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager

{
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _isLoading;
    _Bool _hasCreatedInitialDataSource;
    PXCMMSharedAlbumsInvitationsDataSourceState *__state;
    NSMutableOrderedSet *__remainingSharedAlbumObjectIDsToFetch;
}

@property (nonatomic, readonly) PXCMMSharedAlbumsInvitationsDataSource *dataSource;
@property (retain, nonatomic) PXCMMSharedAlbumsInvitationsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingSharedAlbumObjectIDsToFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mockDataSourceManagerFromCMMDebugSharedAlbums;

- (void)dealloc;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)createInitialDataSource;
- (id)initWithAssetCollectionsFetchResult:(id)arg1;
- (id)sharedAlbums;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)startLoadingIfNeeded;
- (void)_workerQueue_fetchRemainingSharedAlbumsInBatches;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;

@end
