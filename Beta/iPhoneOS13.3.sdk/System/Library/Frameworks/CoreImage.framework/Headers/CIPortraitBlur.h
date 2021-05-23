/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIPortraitBlur : CIFilter

{
    CIImage *inputImage;
    CIImage *inputBlurmapImage;
    CIImage *inputMatteImage;
    NSNumber *inputLumaNoiseScale;
    NSNumber *inputScale;
    NSNumber *inputAperture;
    NSDictionary *inputTuningParameters;
    NSString *inputShape;
    NSNumber *inputDraftMode;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurmapImage;
@property (retain) CIImage *inputMatteImage;
@property (copy, nonatomic) NSNumber *inputLumaNoiseScale;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) NSNumber *inputAperture;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSString *inputShape;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelMetal;
- (id)_kernelWithShapesMetal;
- (id)_kernelsWithShapes;
- (id)_ourBlendKernelMetal;
- (id)_ourBlendKernel;
- (id)outputImage:(_Bool)arg1;
- (id)outputImageV2;
- (id)outputImageV3;

@end
