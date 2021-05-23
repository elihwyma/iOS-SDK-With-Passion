/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRAWTemperatureAdjust : CIFilter

{
    CIImage *inputImage;
    CIVector *inputWhitePoint;
    NSNumber *inputEV;
    NSNumber *inputVersion;
}

- (id)outputImage;

@end
