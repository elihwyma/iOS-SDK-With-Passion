/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@interface PLResourceRecipe : NSObject <Swift>

+ (Class)classFromRecipeID:(unsigned int)arg1;
+ (id)recipeFromID:(unsigned int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
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
- (id)expectedSizeFromWidth:(long long)arg1 height:(long long)arg2;
- (unsigned int)recipeID;
- (_Bool)isDerivative;
- (unsigned short)recipeClassID;
- (long long)adjustedIngredientsForAsset:(id)arg1 ingredients:(id)arg2 version:(unsigned int)arg3;

@end
