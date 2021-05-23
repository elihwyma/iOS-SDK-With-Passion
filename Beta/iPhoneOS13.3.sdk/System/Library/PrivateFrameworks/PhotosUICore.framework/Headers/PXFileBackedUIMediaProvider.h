/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIMediaProvider.h>

@class NSCache, NSOperationQueue;

@interface PXFileBackedUIMediaProvider : PXUIMediaProvider

{
    NSOperationQueue *_queue;
    NSCache *_cache;
}

- (id)init;
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 onlyFromCache:(_Bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg4;
- (id)_createImageForKey:(id)arg1 error:(id *)arg2;
- (id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(struct CGSize)arg3 bakeInOrientation:(_Bool)arg4 error:(id *)arg5;
- (void)_handleImageCreated:(id)arg1 imageKey:(id)arg2;

@end
