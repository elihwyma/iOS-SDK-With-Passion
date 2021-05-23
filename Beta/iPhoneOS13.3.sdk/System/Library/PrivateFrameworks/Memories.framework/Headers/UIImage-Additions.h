/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIImage.h>

@interface UIImage (Additions)

+ (id)imageWithColor:(id)arg1;
+ (id)imageWithColor:(id)arg1 andSize:(struct CGSize)arg2;
+ (_Bool)isSizeSwappedForImageOrientation:(long long)arg1;
+ (struct CGAffineTransform)transformForImageOrientation:(long long)arg1 andSize:(struct CGSize)arg2;
+ (void)saveToStretchyCache:(id)arg1 forKey:(id)arg2;
+ (id)stretchyVersionH:(_Bool)arg1 V:(_Bool)arg2 forImage:(id)arg3;
+ (id)stretchyImageNamed:(id)arg1 hStretch:(_Bool)arg2 vStretch:(_Bool)arg3;
+ (id)stretchyImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 keepInCache:(_Bool)arg2;
+ (id)imageFlippedIfABLocaleWithName:(id)arg1;

- (id)tintedImage;
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
- (id)stretchyVersionH:(_Bool)arg1 V:(_Bool)arg2;
- (id)stretchyImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (id)stretchyImageViewWithLeftCap:(double)arg1 topCap:(double)arg2;
- (id)stretchyHVersion;
- (id)stretchyVVersion;
- (id)stretchyVersion;
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4;
- (id)applyBlurWithRadius:(double)arg1 tintColor:(id)arg2 saturationDeltaFactor:(double)arg3 maskImage:(id)arg4 scale:(double)arg5;
- (id)applyLightEffect;
- (id)applyExtraLightEffect;
- (id)applyDarkEffect;
- (id)applyTintEffectWithColor:(id)arg1;

@end
