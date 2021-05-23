/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLThumbnailResourceDataStoreTableRecipe : PLResourceRecipe

{
    unsigned int _recipeID;
}

@property (nonatomic) unsigned int recipeID;

- (id)description;
- (id)initWithRecipeID:(unsigned int)arg1;
- (id)utiInContext:(id)arg1;
- (id)codecInContext:(id)arg1;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;

@end
