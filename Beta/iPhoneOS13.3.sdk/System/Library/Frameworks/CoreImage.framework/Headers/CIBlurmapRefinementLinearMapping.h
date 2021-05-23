/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementLinearMapping : CIFilter

{
    CIImage *inputImage;
    CIImage *inputSecondaryImage;
    NSNumber *inputScalingFactor;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) NSNumber *inputScalingFactor;

- (id)outputImage;
- (id)kernel;
- (id)kernelNoSecondaryImage;

@end
