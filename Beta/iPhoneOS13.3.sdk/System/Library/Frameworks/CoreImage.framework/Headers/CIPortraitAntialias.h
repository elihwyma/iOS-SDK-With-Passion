/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitAntialias : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputMaxBlurInPixels;
    NSNumber *inputAntiAliasRadius;
    NSNumber *inputLumaNoiseAmpl;
    NSNumber *inputLumaNoiseModelCoeff;
    NSNumber *inputScale;
    CIVector *inputRect;
    CIVector *inputSensorSize;
}

@property (retain) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputMaxBlurInPixels;
@property (copy, nonatomic) NSNumber *inputAntiAliasRadius;
@property (copy, nonatomic) NSNumber *inputLumaNoiseAmpl;
@property (copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) CIVector *inputRect;
@property (copy, nonatomic) CIVector *inputSensorSize;

- (id)outputImage;
- (id)_kernel:(_Bool)arg1 withAddedNoise:(_Bool)arg2;
- (id)_noiseGeneratorKernel;
- (id)noiseColorKernel;
- (id)outputImage:(id)arg1 horizontal:(_Bool)arg2;

@end
