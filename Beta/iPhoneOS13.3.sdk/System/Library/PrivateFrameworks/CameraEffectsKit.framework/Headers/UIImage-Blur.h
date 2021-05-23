/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIImage.h>

@interface UIImage (Blur)

+ (id)imageWithColor:(id)arg1;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize)arg2;
+ (_Bool)isSizeSwappedForImageOrientation:(long long)arg1;
+ (struct CGAffineTransform)transformForImageOrientation:(long long)arg1 andSize:(struct CGSize)arg2;

- (id)tintedImage;
- (id)bluredImageWithFlippedXAxis:(_Bool)arg1;
- (_Bool)adjustFitInSize:(struct CGSize *)arg1 normalizeOrientation:(_Bool)arg2;
- (id)drawImageIntoSize:(struct CGSize)arg1 maintainAspectRatio:(_Bool)arg2 normalizeOrientation:(_Bool)arg3;
- (struct CGSize)scaledSized:(struct CGSize)arg1 maintainAspectRatio:(_Bool)arg2;
- (id)extendedRangeSafeDrawInRect:(struct CGRect)arg1;
- (id)extendedRangeSafeDrawInRect:(struct CGRect)arg1 opaque:(_Bool)arg2 scale:(float)arg3;
- (id)cropImage:(struct CGRect)arg1;
- (_Bool)_isSRGB;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 blendMode:(int)arg3 alpha:(float)arg4;
- (id)scaledImageEqualOrSmallerThanSize:(struct CGSize)arg1 maintainAspectRatio:(_Bool)arg2 normalizeOrientation:(_Bool)arg3;
- (struct CGSize)scaledSizeEqualOrSmallerThanSize:(struct CGSize)arg1 maintainAspectRatio:(_Bool)arg2 normalizeOrientation:(_Bool)arg3;
- (id)scaledImageWithMaxDimension:(double)arg1;
- (id)cropped16X9Image;

@end
