/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>

@class NSMutableOrderedSet, NSObject, NSString, PHPhotoLibrary, PXCMMMomentShareInvitationsDataSource, PXCMMMomentShareInvitationsDataSourceState;

@protocol OS_dispatch_queue;

@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager

{
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _isLoading;
    _Bool _hasCreatedInitialDataSource;
    PXCMMMomentShareInvitationsDataSourceState *_state;
    NSMutableOrderedSet *_remainingMomentShareObjectIDsToFetch;
}

@property (nonatomic, readonly) PXCMMMomentShareInvitationsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mostRecentCreationDate;
+ (id)emptyDataSourceManager;
+ (id)_dataSourceManagerWithPredicate:(id)arg1;
+ (id)dataSourceManager;

- (id)init;
- (void)dealloc;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)createInitialDataSource;
- (id)_initWithFetchResult:(id)arg1;
- (id)momentShares;
- (void)_startLoadingIfNeeded;
- (void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)arg1;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;

@end
