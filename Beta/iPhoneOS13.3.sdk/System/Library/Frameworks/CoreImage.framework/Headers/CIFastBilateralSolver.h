/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFastBilateralSolver : CIFilter

{
    CIImage *inputImage;
    CIImage *inputDisparityImage;
    CIImage *inputConfidenceMapImage;
    NSNumber *inputMaxNumVertices;
    NSNumber *inputSigmaS;
    NSNumber *inputSigmaRLuma;
    NSNumber *inputSigmaRChroma;
    NSNumber *inputLambda;
    NSNumber *inputMaxNumIterations;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputConfidenceMapImage;
@property (copy, nonatomic) NSNumber *inputMaxNumVertices;
@property (copy, nonatomic) NSNumber *inputSigmaS;
@property (copy, nonatomic) NSNumber *inputSigmaRLuma;
@property (copy, nonatomic) NSNumber *inputSigmaRChroma;
@property (copy, nonatomic) NSNumber *inputLambda;
@property (copy, nonatomic) NSNumber *inputMaxNumIterations;

+ (id)customAttributes;

- (id)outputImage;

@end
