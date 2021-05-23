/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class AVAssetImageGenerator, JTEffectsPreviewGenerator, PHImageManager;

@interface JTThumbnailGenerator : NSObject

{
    _Bool _cacheRenderers;
    PHImageManager *_imageManager;
    AVAssetImageGenerator *_cachedAssetImageGenerator;
    JTEffectsPreviewGenerator *_cachedEffectsPreviewGenerator;
}

@property (retain, nonatomic) PHImageManager *imageManager;
@property _Bool cacheRenderers;
@property (retain) AVAssetImageGenerator *cachedAssetImageGenerator;
@property (retain) JTEffectsPreviewGenerator *cachedEffectsPreviewGenerator;

+ (id)prepareStillForThumbnail:(id)arg1 scale:(double)arg2 targetSize:(struct CGSize)arg3 returnTargetImageSize:(struct CGSize *)arg4;
+ (id)createEffectsPreviewGenerator;

- (id)init;
- (void)thumbnailsWithAsset:(id)arg1 needsDerivativeMedia:(_Bool)arg2 targetSize:(struct CGSize)arg3 requestedTimes:(id)arg4 timeScale:(int)arg5 effectStack:(id)arg6 transforms:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)thumbnailsWithVideoURL:(id)arg1 targetSize:(struct CGSize)arg2 requestedTimes:(id)arg3 timeScale:(int)arg4 effectStack:(id)arg5 transforms:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)thumbnailsWithStillURL:(id)arg1 targetSize:(struct CGSize)arg2 requestedTimes:(id)arg3 timeScale:(int)arg4 effectStack:(id)arg5 transforms:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)thumbnailWithAsset:(id)arg1 needsDerivativeMedia:(_Bool)arg2 targetSize:(struct CGSize)arg3 requestedTime:(int)arg4 timeScale:(int)arg5 effectStack:(id)arg6 transform:(id)arg7 progressHandlerBlock:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)thumbnailWithVideoURL:(id)arg1 targetSize:(struct CGSize)arg2 requestedTime:(int)arg3 timeScale:(int)arg4 effectStack:(id)arg5 transform:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)thumbnailWithStillURL:(id)arg1 targetSize:(struct CGSize)arg2 effectStack:(id)arg3 transform:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)generateImagesWithAVAsset:(id)arg1 targetSizeInPixels:(struct CGSize)arg2 requestedTime:(id)arg3 timeScale:(int)arg4 effectStack:(id)arg5 transforms:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)deepCopyEffectStackWithEffects:(id)arg1;
- (void)finalizeImage:(id)arg1 effectStack:(id)arg2 transform:(id)arg3 targetImageSize:(struct CGSize)arg4 targetSize:(struct CGSize)arg5 previewGenerator:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)thumbnailWithStillImage:(id)arg1 targetSize:(struct CGSize)arg2 effectStack:(id)arg3 transform:(id)arg4 previewGenerator:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)thumbnailForTitleCardWithEffect:(id)arg1 targetSize:(struct CGSize)arg2 effectStack:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)thumbnailsForTitleCardWithEffect:(id)arg1 targetSize:(struct CGSize)arg2 requestedTimes:(id)arg3 effectStack:(id)arg4 transforms:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (struct PVTransformAnimationInfo)transformAnimationInfoWithTransform:(id)arg1 imageSize:(struct CGSize)arg2 targetImageSize:(struct CGSize)arg3 targetSize:(struct CGSize)arg4;
- (void)projectThumbnailWithImages:(id)arg1 targetSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initCacheEfectsPreviewGenerator:(id)arg1;

@end
