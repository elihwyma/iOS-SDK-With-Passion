/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityWeightsV3 : CIFilter

{
    CIImage *inputImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
}

@property (retain) CIImage *inputImage;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain) NSNumber *inputScale;

- (id)outputImage;
- (id)weightsXKernel;
- (id)weightsYKernel;

@end
