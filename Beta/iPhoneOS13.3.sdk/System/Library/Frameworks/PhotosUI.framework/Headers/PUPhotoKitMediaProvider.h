/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUEditableMediaProvider.h>

@interface PUPhotoKitMediaProvider : PUEditableMediaProvider

- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
