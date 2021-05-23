/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinementSparseSamplerV3 : CIFilter

{
    CIImage *inputImage;
    CIImage *inputPreprocImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputPreprocImage;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain) NSNumber *inputScale;

- (id)outputImage;
- (id)sampleKernel;

@end
