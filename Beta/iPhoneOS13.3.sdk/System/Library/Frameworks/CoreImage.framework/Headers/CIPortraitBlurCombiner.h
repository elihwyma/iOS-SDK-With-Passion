/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurCombiner : CIFilter

{
    CIImage *inputImage;
    CIImage *inputBlurImage;
    CIImage *inputMatteImage;
    NSDictionary *inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) NSDictionary *inputTuningParameters;

- (id)outputImage;
- (id)_ourBlendKernelMetal;
- (id)nonMetalKernel;
- (id)nonMetalKernelYCC;
- (id)_blendKernel:(_Bool)arg1;

@end
