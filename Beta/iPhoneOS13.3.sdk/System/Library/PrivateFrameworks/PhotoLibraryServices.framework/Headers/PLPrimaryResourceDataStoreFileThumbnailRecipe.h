/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPrimaryResourceDataStoreImageRecipe.h>

@interface PLPrimaryResourceDataStoreFileThumbnailRecipe : PLPrimaryResourceDataStoreImageRecipe

{
    unsigned int _recipeID;
}

@property (nonatomic) unsigned int recipeID;

- (id)description;
- (id)initWithRecipeID:(unsigned int)arg1;
- (id)utiInContext:(id)arg1;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)_isAspectShortSizing;
- (double)_shortSideTargetLength;
- (double)_longSideTargetLength;
- (struct CGSize)sizeForAssetWidth:(long long)arg1 height:(long long)arg2;

@end
