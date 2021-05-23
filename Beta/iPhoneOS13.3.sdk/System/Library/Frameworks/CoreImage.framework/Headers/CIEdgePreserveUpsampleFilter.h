/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIEdgePreserveUpsampleFilter : CIFilter

{
    CIImage *inputImage;
    CIImage *inputSmallImage;
    NSNumber *inputSpatialSigma;
    NSNumber *inputLumaSigma;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputSmallImage;
@property (retain, nonatomic) NSNumber *inputSpatialSigma;
@property (retain, nonatomic) NSNumber *inputLumaSigma;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelGuideMono;
- (id)_kernelGuideCombine;
- (id)_kernelJointUpsamp;
- (id)_kernelJointUpsampRG;
- (id)_kernelGuideCombine4;

@end
