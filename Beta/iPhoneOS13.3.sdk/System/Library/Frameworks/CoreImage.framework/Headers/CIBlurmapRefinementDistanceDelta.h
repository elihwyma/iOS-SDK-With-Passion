/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementDistanceDelta : CIFilter

{
    CIImage *inputImage;
    CIImage *inputSecondaryImage;
    NSNumber *inputThreshold;
    NSNumber *inputDistance;
    NSNumber *inputScalingFactor;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) NSNumber *inputDistance;
@property (retain) NSNumber *inputThreshold;
@property (retain) NSNumber *inputScalingFactor;

- (id)outputImage;

@end
