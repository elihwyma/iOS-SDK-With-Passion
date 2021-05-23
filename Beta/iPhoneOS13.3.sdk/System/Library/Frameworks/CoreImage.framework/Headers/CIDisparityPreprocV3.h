/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIDisparityPreprocV3 : CIFilter

{
    CIImage *inputImage;
    CIImage *inputAlphaImage;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputAlphaImage;

- (id)outputImage;
- (id)preprocKernel;
- (id)preprocKernelNoAlpha;

@end
