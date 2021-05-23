/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesDataSourceManager.h>

@class NSMutableOrderedSet, NSObject, NSString, PHFetchResult, PXMemoriesDataSourceState;

@protocol OS_dispatch_queue;

@interface PXFetchResultBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager

{
    NSObject<OS_dispatch_queue> *_workerQueue;
    _Bool _isWorking;
    _Bool _hasCreatedInitialDataSource;
    _Bool _loadFromEnd;
    PXMemoriesDataSourceState *__state;
    NSMutableOrderedSet *__remainingMemoriesToFetch;
}

@property (retain, nonatomic, setter=_setState:) PXMemoriesDataSourceState *_state;
@property (retain, setter=_setRemainingMemoriesToFetch:) NSMutableOrderedSet *_remainingMemoriesToFetch;
@property (nonatomic, readonly) PHFetchResult *memories;
@property (nonatomic) _Bool loadFromEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)createInitialDataSource;
- (void)startLoadingIfNeeded;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (id)initWithMemoriesFetchResult:(id)arg1;
- (void)_workerQueue_fetchRemainingMemoriesInBatchesFromTheEnd:(_Bool)arg1;
- (id)_createMemoriesDataSourceFromCurrentState;

@end
