/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMPreviewGenerator : NSObject

+ (struct CGSize)thumbnailFillSizeForWidth:(double)arg1 imageSize:(struct CGSize)arg2;
+ (struct CGImage *)newCroppedAndRescaledImageFromImage:(struct CGImage *)arg1 constraints:(struct IMPreviewConstraints)arg2 targetPxSize:(struct CGSize)arg3;
+ (_Bool)shouldScaleUpPreview;
+ (double)maxUpScale;
+ (id)UTITypes;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (struct CGRect)_scaledTargetRectForSize:(struct CGSize)arg1 andThumbnailSize:(struct CGSize)arg2;
+ (_Bool)shouldShadePreview;
+ (id)previewExtension;
+ (_Bool)writesToDisk;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 outSize:(struct CGSize *)arg3 error:(id *)arg4;

@end
