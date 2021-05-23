/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>

@class NSMutableOrderedSet, NSObject, NSString, PXCMMMomentsInvitationsDataSourceState;

@protocol OS_dispatch_queue;

@interface PXCMMMomentsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager

{
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _isLoading;
    _Bool _hasCreatedInitialDataSource;
    PXCMMMomentsInvitationsDataSourceState *__state;
    NSMutableOrderedSet *__remainingAssetCollectionObjectIDsToFetch;
}

@property (retain, nonatomic) PXCMMMomentsInvitationsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingAssetCollectionObjectIDsToFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (id)mockDataSourceManagerFromRecentLargeMoments;

- (id)init;
- (void)dealloc;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)assetCollections;
- (id)createInitialDataSource;
- (id)initWithAssetCollectionsFetchResult:(id)arg1;
- (void)startLoadingIfNeeded;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (id)_createInvitationsDataSourceFromCurrentState;
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatches;

@end
