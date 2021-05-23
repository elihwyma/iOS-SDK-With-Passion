/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementThreshold : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputThreshold;
}

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputThreshold;

- (id)outputImage;
- (id)kernel;

@end
