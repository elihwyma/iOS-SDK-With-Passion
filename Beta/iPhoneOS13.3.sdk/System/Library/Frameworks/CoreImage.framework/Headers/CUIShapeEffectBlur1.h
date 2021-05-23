/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIShapeEffectBlur1 : CIFilter

{
    CIImage *inputImage;
    CIImage *inputFill;
    CIVector *inputOffset;
    NSNumber *inputRadius;
    CIColor *inputGlowColorInner;
    CIColor *inputGlowColorOuter;
    CIColor *inputShadowColorInner;
    CIColor *inputShadowColorOuter;
    NSNumber *inputShadowBlurInner;
    NSNumber *inputShadowBlurOuter;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputFill;
@property (retain, nonatomic) CIVector *inputOffset;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) CIColor *inputGlowColorInner;
@property (retain, nonatomic) CIColor *inputGlowColorOuter;
@property (retain, nonatomic) CIColor *inputShadowColorInner;
@property (retain, nonatomic) CIColor *inputShadowColorOuter;
@property (retain, nonatomic) NSNumber *inputShadowBlurInner;
@property (retain, nonatomic) NSNumber *inputShadowBlurOuter;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
