/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMPreviewGenerator.h>

@interface IMImagePreviewGenerator : IMPreviewGenerator

+ (id)fetchUTITypes;
+ (id)UTITypes;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGImage *)newThumbnailFillToSize:(struct CGSize)arg1 imagePxSize:(struct CGSize)arg2 imageSource:(struct CGImageSource *)arg3 scale:(double)arg4;

@end
