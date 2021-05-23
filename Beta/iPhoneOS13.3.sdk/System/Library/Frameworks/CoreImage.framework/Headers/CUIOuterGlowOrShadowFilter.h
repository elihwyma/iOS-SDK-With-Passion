/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIOuterGlowOrShadowFilter : CIFilter

{
    CIImage *inputImage;
    CIVector *inputOffset;
    NSNumber *inputRange;
    NSNumber *inputRadius;
    NSNumber *inputSize;
    NSNumber *inputSpread;
    CIColor *inputColor;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputOffset;
@property (retain, nonatomic) NSNumber *inputRange;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputSize;
@property (retain, nonatomic) NSNumber *inputSpread;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
