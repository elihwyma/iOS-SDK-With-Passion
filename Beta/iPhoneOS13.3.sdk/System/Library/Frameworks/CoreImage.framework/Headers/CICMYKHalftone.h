/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICMYKHalftone : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputWidth;
    NSNumber *inputAngle;
    NSNumber *inputSharpness;
    NSNumber *inputGCR;
    NSNumber *inputUCR;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CICMYK_convert;
- (id)_CIWhite;
- (id)_CICMYK_cyan;
- (id)_CICMYK_magenta;
- (id)_CICMYK_yellow;
- (id)_CICMYK_black;

@end
