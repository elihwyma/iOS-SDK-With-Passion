/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class AVPlayerItem, PHLivePhotoRequestOptions, UIImage, _PXPhotoKitAdjustedUIImageRequest, _PXPhotoKitAdjustedVideoRequest;

@interface _PXPhotoKitAdjustedPHLivePhotoRequest : _PXPhotoKitAdjustedUIMediaRequest

{
    _PXPhotoKitAdjustedUIImageRequest *_imageRequest;
    _PXPhotoKitAdjustedVideoRequest *_videoRequest;
    UIImage *_image;
    AVPlayerItem *_playerItem;
    long long _contentMode;
    PHLivePhotoRequestOptions *_options;
    CDUnknownBlockType _resultHandler;
    struct CGSize _targetSize;
}

@property (nonatomic, readonly) struct CGSize targetSize;
@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly) PHLivePhotoRequestOptions *options;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;

- (void)cancel;
- (void)start;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4 imageManager:(id)arg5 options:(id)arg6 resultHandler:(CDUnknownBlockType)arg7;
- (void)_handleImageRequestResult:(id)arg1 info:(id)arg2;
- (void)_handleVideoRequestResult:(id)arg1 info:(id)arg2;
- (void)_prepareLivePhotoIfPossible;

@end
