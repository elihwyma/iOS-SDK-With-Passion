/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinement : CIFilter

{
    CIImage *inputDisparityImage;
    CIImage *inputImage;
    NSNumber *inputPropagateKernel;
    NSNumber *inputSmoothSigma;
    NSNumber *inputPropagateMinWeightSum;
    NSNumber *inputPropagateSigmaLuma;
    NSNumber *inputPropagateSigmaChma;
    NSNumber *inputScale;
    CIVector *inputOriginalSize;
}

@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputImage;
@property (copy) NSNumber *inputPropagateKernel;
@property (copy) NSNumber *inputSmoothSigma;
@property (copy) NSNumber *inputPropagateMinWeightSum;
@property (copy) NSNumber *inputPropagateSigmaLuma;
@property (copy) NSNumber *inputPropagateSigmaChma;
@property (copy) NSNumber *inputScale;
@property (copy) CIVector *inputOriginalSize;

+ (id)customAttributes;

- (id)outputImage;
- (id)_initialConversionRGB;
- (id)_pyramidGenerateLevel;
- (id)_smoothDisparity;
- (id)_propagateDisparityR1;
- (id)_propagateDisparity;
- (id)initialConversionForSize:(struct CGSize)arg1 useMetal:(_Bool)arg2;
- (id)generatePyramidLevel:(id)arg1 useMetal:(_Bool)arg2;
- (id)shiftmapLevelZeroWithSize:(struct CGSize)arg1 useMetal:(_Bool)arg2;
- (id)propagateDisparity:(id)arg1 pyramids:(id *)arg2 useMetal:(_Bool)arg3 computedPyramidLevels:(int)arg4;
- (id)smoothDisparityImage:(id)arg1 useMetal:(_Bool)arg2;
- (id)outputImageUsingMetal:(_Bool)arg1;
- (id)_propagateDisparityR1Combined;
- (id)_propagateDisparityCombined;
- (id)_combineImages;

@end
