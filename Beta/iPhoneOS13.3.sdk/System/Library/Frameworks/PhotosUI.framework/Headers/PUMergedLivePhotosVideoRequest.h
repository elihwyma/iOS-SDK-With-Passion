/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSError, NSObject, NSString, PUAssetReference, PUAssetsDataSource, PUCompositeVideoGenerator, PUMergedLivePhotosVideo;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUMergedLivePhotosVideoRequest : PXObservable <Swift>

{
    unsigned long long _requestLogID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    PUCompositeVideoGenerator *_workQueue_generator;
    long long _stateQueue_state;
    PUMergedLivePhotosVideo *_stateQueue_mergedVideo;
    NSError *_stateQueue_error;
    PUAssetReference *_assetReference;
    PUAssetsDataSource *_assetsDataSource;
}

@property (nonatomic, readonly) PUAssetReference *assetReference;
@property (nonatomic, readonly) PUAssetsDataSource *assetsDataSource;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) PUMergedLivePhotosVideo *mergedVideo;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)start;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (id)initWithAssetReference:(id)arg1 dataSource:(id)arg2;
- (void)_workQueue_start;
- (id)_workQueue_fetchMergeableAssets;
- (void)_workQueue_generateVideoUsingAssets:(id)arg1;
- (void)_workQueue_handleGeneratorDidChangeState;
- (void)_workQueue_finishWithMergedVideo:(id)arg1 error:(id)arg2;
- (void)_stateQueue_signalStateChange;

@end
