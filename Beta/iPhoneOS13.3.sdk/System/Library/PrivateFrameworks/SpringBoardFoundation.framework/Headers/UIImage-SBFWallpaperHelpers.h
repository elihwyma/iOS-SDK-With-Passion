/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIImage.h>

@interface UIImage (SBFWallpaperHelpers)

+ (id)sbf_thumbnailImageForImage:(id)arg1;
+ (id)sbf_imageWithIOSurface:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)sbf_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5;
+ (unsigned long long)sbf_bytesNeededForSize:(struct CGSize)arg1 scale:(double)arg2 withContextType:(long long)arg3;
+ (id)sbf_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5 encapsulation:(CDUnknownBlockType)arg6;
+ (id)sbf_imageFromBGRAContextWithSize:(struct CGSize)arg1 scale:(double)arg2 colorSpace:(struct CGColorSpace *)arg3 withAlpha:(_Bool)arg4 pool:(id)arg5 drawing:(CDUnknownBlockType)arg6 encapsulation:(CDUnknownBlockType)arg7;

- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3;
- (long long)sbf_EXIFOrientation;
- (struct CGColorSpace *)sbf_colorSpace;
- (id)sbf_imageMaskedByColor:(id)arg1;
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 canUseIOSurface:(_Bool)arg3;
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3 canUseIOSurface:(_Bool)arg4;
- (id)sbf_resizeImageToSize:(struct CGSize)arg1 preservingAspectRatio:(_Bool)arg2;
- (id)sbf_scaleImage:(double)arg1 canUseIOSurface:(_Bool)arg2;
- (id)sbf_resizeImageToSize:(struct CGSize)arg1;
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2;
- (id)sbf_scaleImage:(double)arg1;
- (id)sbf_imageByConvertingToColorSpace:(struct CGColorSpace *)arg1 type:(long long)arg2;
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1 skipCIF10FitsInSRGBCheck:(_Bool)arg2;
- (id)sbf_imageByManipulatingInDeviceColorSpaceWithBlock:(CDUnknownBlockType)arg1;
- (id)sbf_imageUsingContextType:(long long)arg1;
- (id)sbf_ATXSafeCGImageBackedImage;
- (id)sbf_downscaledImageByDrawingIntoContextOfType:(long long)arg1 downscaleFactor:(double)arg2;
- (id)sbf_CGImageBackedImage;
- (id)sbf_imageByDrawingIntoContextOfType:(long long)arg1;
- (id)sbf_memoryMappedImageWithPool:(id)arg1;
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1;
- (id)sbf_imageByTilingCenterPixel;
- (id)sbf_resizedImageForCurrentMagnifyMode;

@end
