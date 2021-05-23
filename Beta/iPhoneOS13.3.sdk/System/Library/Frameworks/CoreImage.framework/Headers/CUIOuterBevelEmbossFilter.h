/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIOuterBevelEmbossFilter : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputSize;
    NSNumber *inputSoften;
    NSNumber *inputAngle;
    CIColor *inputHighlightColor;
    CIColor *inputShadowColor;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSize;
@property (retain, nonatomic) NSNumber *inputSoften;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) CIColor *inputHighlightColor;
@property (retain, nonatomic) CIColor *inputShadowColor;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelC;

@end
