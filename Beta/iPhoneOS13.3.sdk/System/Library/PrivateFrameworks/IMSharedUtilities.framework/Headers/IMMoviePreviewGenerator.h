/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMPreviewGenerator.h>

@interface IMMoviePreviewGenerator : IMPreviewGenerator

+ (Class)__AVURLAssetClass;
+ (id)_avAssetForURL:(id)arg1;
+ (Class)__AVAssetImageGeneratorClass;
+ (_Bool)isAutoloopAsset:(id)arg1;
+ (id)fetchUTITypes;
+ (id)UTITypes;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;

@end
