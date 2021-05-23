/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImage.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIAnimatedImage : UIImage

{
    NSArray *_images;
    double _duration;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)duration;
- (id)images;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)_isResizable;
- (struct UIEdgeInsets)capInsets;
- (id)_imageWithStylePresets:(id)arg1 tintColor:(id)arg2 traitCollection:(id)arg3;
- (struct CGSize)_sizeWithHairlineThickening:(_Bool)arg1 renderingEffects:(unsigned long long)arg2 forTraitCollection:(id)arg3;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;
- (id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2;
- (id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(_Bool)arg9;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1 resizingMode:(long long)arg2;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets)arg1;
- (id)_initWithOtherImage:(id)arg1;
- (void)_setAlwaysStretches:(_Bool)arg1;
- (struct CGRect)_contentStretchInPixels;
- (struct CGRect)_contentRectInPixels;
- (long long)resizingMode;
- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (id)initWithImages:(id)arg1 duration:(double)arg2;
- (void)_flipImageOrientationHorizontally;
- (id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12;
- (_Bool)_isPDFVector;
- (_Bool)_isSVGVector;

@end
