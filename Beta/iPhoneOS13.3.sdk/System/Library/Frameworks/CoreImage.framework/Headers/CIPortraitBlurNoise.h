/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurNoise : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputLumaNoiseAmpl;
    NSNumber *inputLumaNoiseModelCoeff;
    CIVector *inputExtent;
    NSNumber *inputUseMetal;
}

@property (retain) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputLumaNoiseAmpl;
@property (copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff;
@property (copy) CIVector *inputExtent;
@property (copy, nonatomic) NSNumber *inputUseMetal;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelMetal;

@end
