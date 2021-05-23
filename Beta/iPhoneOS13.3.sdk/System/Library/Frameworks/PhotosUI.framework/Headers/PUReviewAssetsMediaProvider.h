/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUEditableMediaProvider.h>

@class PHConcurrentMapTable;

@interface PUReviewAssetsMediaProvider : PUEditableMediaProvider

{
    _Atomic int _nextRequestIdentifier;
    double __screenScale;
    PHConcurrentMapTable *__mediaRequests;
}

@property (nonatomic, readonly) double _screenScale;
@property (nonatomic, readonly) PHConcurrentMapTable *_mediaRequests;

- (id)init;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(struct CGSize)arg3 bakeInOrientation:(_Bool)arg4 error:(id *)arg5;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)_incrementRequestIdentifier;
- (int)_requestAdjustmentDataForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
