/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotoLibraryServices/PLCompositionHelper.h>

@interface PLCompositionHelper (PUPhotoEditAggregateSession)

+ (id)compositionController:(id)arg1 aggregateKeysForPreviousComposition:(id)arg2;
+ (id)pl_aggregateNameForEffectFilterForCompositionController:(id)arg1;
+ (id)pl_aggregateFilterIntensityForCompositionController:(id)arg1;
+ (id)pl_aggregateNameForPortraitFilterWithCompositionController:(id)arg1;
+ (id)pl_aggregatePortraitIntensityForCompositionController:(id)arg1;
+ (id)pl_aggregateDepthIntensityForCompositionController:(id)arg1;
+ (id)_classificationForIntensityValue:(double)arg1 min:(double)arg2 default:(double)arg3 max:(double)arg4;

@end
