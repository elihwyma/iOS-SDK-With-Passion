/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisintegrateWithMaskTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputMaskImage;
    NSNumber *inputTime;
    NSNumber *inputShadowRadius;
    NSNumber *inputShadowDensity;
    CIVector *inputShadowOffset;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIImage *inputMaskImage;
@property (retain, nonatomic) NSNumber *inputTime;
@property (retain, nonatomic) NSNumber *inputShadowRadius;
@property (retain, nonatomic) NSNumber *inputShadowDensity;
@property (retain, nonatomic) CIVector *inputShadowOffset;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelG;

@end
