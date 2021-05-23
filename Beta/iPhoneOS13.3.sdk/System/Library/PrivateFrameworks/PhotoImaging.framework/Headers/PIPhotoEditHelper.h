/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIPhotoEditHelper : NSObject

+ (void)initialize;
+ (id)photosSchema;
+ (id)adjustmentConstants;
+ (id)effectNameForFilterName:(id)arg1;
+ (_Bool)is3DEffect:(id)arg1;
+ (id)pipelineFiltersForOriginalGeometry;
+ (id)geometryRequestWithComposition:(id)arg1;
+ (id)newCompositionControllerWithComposition:(id)arg1;
+ (id)newComposition;
+ (id)validatedCompositionCopyForComposition:(id)arg1 mediaType:(long long)arg2;
+ (id)videoRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize)arg2 wideGamut:(_Bool)arg3;
+ (struct CGImage *)newCGImageFromBufferImage:(id)arg1;
+ (id)pipelineFiltersForCropping;
+ (id)imageRenderRequestWithComposition:(id)arg1 fillInSize:(struct CGSize)arg2 wideGamut:(_Bool)arg3;
+ (id)imageRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize)arg2 wideGamut:(_Bool)arg3;
+ (id)newImageRenderClientWithName:(id)arg1;
+ (_Bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(_Bool)arg3;
+ (id)imageSourceWithCIImage:(id)arg1 orientation:(long long)arg2;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4 useEmbeddedPreview:(_Bool)arg5;
+ (id)videoSourceWithURL:(id)arg1;
+ (id)livePhotoSourceWithPhotoSource:(id)arg1 videoSource:(id)arg2;
+ (id)imagePropertiesRequestWithComposition:(id)arg1;
+ (id)updateCropAdjustmentController:(id)arg1 after:(id)arg2 error:(out id *)arg3;
+ (id)videoPropertiesRequestWithComposition:(id)arg1;
+ (id)pipelineFiltersForShowingOriginalWithGeometry;
+ (id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+ (void)preheatEditDependencies;
+ (id)assetIdentifierForURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(_Bool)arg3;
+ (id)newAdjustmentWithName:(id)arg1;
+ (id)newAdjustmentWithIdentifier:(id)arg1;
+ (id)_imageRenderRequestWithComposition:(id)arg1 wideGamut:(_Bool)arg2;
+ (id)priorityWithLevel:(long long)arg1;
+ (_Bool)isPortraitEffect:(id)arg1;
+ (_Bool)isPortraitStageEffect:(id)arg1;
+ (id)filterNameForEffectName:(id)arg1;
+ (id)knownFormatsVersionsMap;

@end
