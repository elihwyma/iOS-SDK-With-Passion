/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLPrimaryResourceDataStoreImageRecipe : PLResourceRecipe

{
    unsigned int _recipeID;
}

@property (nonatomic) unsigned int recipeID;

+ (double)_scaleFactorForInputSize:(struct CGSize)arg1 maximumPixelCount:(long long)arg2;
+ (struct CGSize)scaleOriginalSize:(struct CGSize)arg1 toShortSideTarget:(double)arg2 maxLongSideLength:(double)arg3;
+ (struct CGSize)scaleOriginalSize:(struct CGSize)arg1 toLongSideTarget:(double)arg2;

- (id)description;
- (id)_resourceGenerationAffectsRecipesForLibraryID:(id)arg1;
- (id)_mediaConversionServiceOptionsForAsset:(id)arg1 adjustmentData:(id)arg2 largeAdjustmentData:(id)arg3 isHighPriority:(_Bool)arg4;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned int)arg2 conversionClient:(id)arg3 isHighPriority:(_Bool)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithRecipeID:(unsigned int)arg1;
- (id)utiInContext:(id)arg1;
- (_Bool)colorSpaceIsNativeForDisplay;
- (_Bool)isMarkedFullSize;
- (id)codecInContext:(id)arg1;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)maxPixelCountForAssetWidth:(long long)arg1 height:(long long)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(_Bool)arg5 progress:(id *)arg6 completion:(CDUnknownBlockType)arg7;
- (id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2;

@end
