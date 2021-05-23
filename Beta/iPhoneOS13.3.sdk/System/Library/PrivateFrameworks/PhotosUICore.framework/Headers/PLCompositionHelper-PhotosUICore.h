/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotoLibraryServices/PLCompositionHelper.h>

@interface PLCompositionHelper (PhotosUICore)

+ (void)compositionController:(id)arg1 applyTrimRangeAndKeyTimeForCurretAssetVariation:(_Bool)arg2;
+ (void)compositionController:(id)arg1 applyAssetVariation:(unsigned int)arg2 withRecipe:(id)arg3;
+ (unsigned int)assetVariationForCompositionController:(id)arg1;
+ (id)compositionController:(id)arg1 compositionCopyByApplyingAssetVariation:(unsigned int)arg2 withRecipe:(id)arg3;
+ (_Bool)isAdjustedBeyondDepthForCompositionController:(id)arg1;
+ (_Bool)isSlomoOnlyAdjustmentForCompositionController:(id)arg1;
+ (_Bool)hasDepthEditsForCompositionController:(id)arg1;
+ (id)revertComposition:(id)arg1 originalComposition:(id)arg2 keepCrop:(_Bool)arg3 keepOrientation:(_Bool)arg4 primaryEditSource:(id)arg5 overcaptureEditSource:(id)arg6;
+ (void)compositionController:(id)arg1 setLivePhotoTrimStartTime:(CDStruct_1b6d18a9)arg2;
+ (void)compositionController:(id)arg1 setLivePhotoTrimEndTime:(CDStruct_1b6d18a9)arg2;
+ (void)compositionController:(id)arg1 setLivePhotoStillTime:(CDStruct_1b6d18a9)arg2;
+ (void)compositionController:(id)arg1 setLivePhotoMuteState:(id)arg2;
+ (id)livePhotoMuteStateForCompositionController:(id)arg1;
+ (void)compositionController:(id)arg1 setVideoPosterFrameTime:(CDStruct_1b6d18a9)arg2;
+ (void)compositionController:(id)arg1 setInputOrientation:(long long)arg2;
+ (id)compositionControllerImageSourceURL:(id)arg1;

@end
