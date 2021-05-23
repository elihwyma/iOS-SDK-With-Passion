/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@interface PFPhotosFaceUtilities : NSObject

+ (id)sortedViableMergeCandidateFacesFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(_Bool)arg3 matchScores:(id *)arg4;
+ (id)bestMergeCandidateFaceFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(_Bool)arg3;
+ (long long)qualityMeasureForFace:(id)arg1 countOfFacesOnAsset:(unsigned long long)arg2;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 candidateFaces:(id)arg4;
+ (_Bool)getCropRectForPortraitImage:(struct CGRect *)arg1 size:(double)arg2 imgWidth:(double)arg3 imgHeight:(double)arg4 centerX:(double)arg5 centerY:(double)arg6;
+ (struct CGSize)faceTileSizeAdjustingForImageAspectRatio:(struct CGSize)arg1 imgWidth:(double)arg2 imgHeight:(double)arg3;

@end
