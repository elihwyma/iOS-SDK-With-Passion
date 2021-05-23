/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUEditableMediaProvider.h>

@class PUBrowsingViewModel, PUMediaProvider;

__attribute__((visibility("hidden")))
@interface PUToggleCTMMediaProvider : PUEditableMediaProvider

{
    PUBrowsingViewModel *_viewModel;
    PUMediaProvider *_mediaProvider;
}

@property (nonatomic, readonly) PUBrowsingViewModel *viewModel;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;

- (id)_requestOptions;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)initWithViewModel:(id)arg1 mediaProvider:(id)arg2;
- (_Bool)_shouldToggleCTMForAsset:(id)arg1;
- (id)_imageWithSize:(struct CGSize)arg1 string:(id)arg2;
- (id)_resourceOfType:(long long)arg1 forAsset:(id)arg2;
- (id)_ctmImageResourceForAsset:(id)arg1;
- (id)_ctmVideoResourceForAsset:(id)arg1;
- (id)_ctmPairedVideoResourceForAsset:(id)arg1;

@end
