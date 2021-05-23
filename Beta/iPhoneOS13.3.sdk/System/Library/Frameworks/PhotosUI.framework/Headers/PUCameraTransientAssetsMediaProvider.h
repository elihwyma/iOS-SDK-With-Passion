/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUMediaProvider.h>

@class NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue, PUTransientImageManager;

@interface PUCameraTransientAssetsMediaProvider : PUMediaProvider

{
    _Atomic int _latestRequestId;
    CDUnknownBlockType _supplementaryLivePhotoImageSource;
    id <PUTransientImageManager> __transientImageManager;
    NSMutableDictionary *__livePhotoRequestsByRequestID;
    NSObject<OS_dispatch_queue> *__livePhotoRequestQueue;
}

@property (nonatomic, readonly) id <PUTransientImageManager> _transientImageManager;
@property (nonatomic, readonly) NSMutableDictionary *_livePhotoRequestsByRequestID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_livePhotoRequestQueue;
@property (copy, nonatomic) CDUnknownBlockType supplementaryLivePhotoImageSource;

- (id)init;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)_nextRequestId;
- (id)initWithTransientImageManager:(id)arg1 supplementaryLivePhotoImageSource:(CDUnknownBlockType)arg2;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (_Bool)_requestLivePhotoWithSupplementaryImageSourceIfPossibleWithAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)_requestLivePhotoForTransientAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)_handleDelegateImageRequestResultWithImage:(id)arg1 info:(id)arg2 requestID:(int)arg3;
- (void)_handleLivePhotoPairedVideoRequestResultURL:(id)arg1 filterName:(id)arg2 stillDisplayTime:(CDStruct_1b6d18a9)arg3 error:(id)arg4 requestID:(int)arg5;
- (void)_updateResultForLivePhotoRequestID:(int)arg1;
- (id)_livePhotoRequestWithID:(int)arg1;
- (void)_setLivePhotoRequest:(id)arg1 forRequestID:(int)arg2;
- (void)_removeLivePhotoRequestWithID:(int)arg1;
- (id)_imageForTransientAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (void)_requestAVAssetForVideoURL:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)_playerItemForVideoURL:(id)arg1;
- (id)_videoCompositionForAVAsset:(id)arg1 filterName:(id)arg2;

@end
