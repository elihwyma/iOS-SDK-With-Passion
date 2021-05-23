/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLPrimaryResourceDataStoreVideoRecipe : PLResourceRecipe

{
    unsigned int _recipeID;
}

@property (nonatomic) unsigned int recipeID;

- (id)description;
- (id)_mediaConversionServiceOptionsForAsset:(id)arg1 adjustmentData:(id)arg2 largeAdjustmentData:(id)arg3 isHighPriority:(_Bool)arg4;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned int)arg2 conversionClient:(id)arg3 isHighPriority:(_Bool)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithRecipeID:(unsigned int)arg1;
- (id)utiInContext:(id)arg1;
- (_Bool)isMarkedFullSize;
- (id)codecInContext:(id)arg1;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id *)arg5 completion:(CDUnknownBlockType)arg6;
- (void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(_Bool)arg5 progress:(id *)arg6 completion:(CDUnknownBlockType)arg7;
- (id)_localAvailabileResourceForAsset:(id)arg1 cplType:(unsigned long long)arg2;

@end
