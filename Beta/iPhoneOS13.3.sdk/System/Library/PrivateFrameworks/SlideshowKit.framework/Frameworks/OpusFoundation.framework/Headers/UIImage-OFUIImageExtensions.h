/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UIImage.h>

@interface UIImage (OFUIImageExtensions)

+ (long long)UIImageOrientationForExifOrientation:(long long)arg1;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize)arg2 opaque:(_Bool)arg3 scale:(double)arg4;
+ (id)decompressedDeviceImageWithCGImage:(struct CGImage *)arg1 opaque:(_Bool)arg2 scale:(double)arg3 orientation:(long long)arg4;
+ (id)animatedImageAtURL:(id)arg1;

- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)imageWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(double)arg3;
- (id)centerImageWithSize:(struct CGSize)arg1;
- (id)imageWithSize:(struct CGSize)arg1 andCropRect:(struct CGRect)arg2;
- (id)imageWithAdjustedOrientation:(long long)arg1 andResolution:(unsigned long long)arg2;
- (struct CGImage *)newBorderMask:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (id)imageWithTransparentInset:(double)arg1;
- (id)decompressedDeviceImage:(_Bool)arg1;
- (id)applyBlurLightEffect;
- (id)applyBlurExtraLightEffect;
- (id)applyBlurDarkEffect;
- (id)applyBlurTintEffectWithColor:(id)arg1;

@end
