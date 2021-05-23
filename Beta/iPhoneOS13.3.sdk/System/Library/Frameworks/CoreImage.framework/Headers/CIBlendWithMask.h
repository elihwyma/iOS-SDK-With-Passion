/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlendWithMask : CIFilter

{
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
    CIImage *inputMaskImage;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;
@property (retain, nonatomic) CIImage *inputMaskImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (float)_maskFillColorValue;
- (id)_kernelB0;

@end
