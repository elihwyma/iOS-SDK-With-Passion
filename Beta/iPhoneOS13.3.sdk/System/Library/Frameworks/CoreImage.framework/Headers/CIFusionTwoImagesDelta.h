/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFusionTwoImagesDelta : CIFilter

{
    CIImage *inputImage;
    CIImage *inputSecondaryImage;
    NSNumber *inputProtectStrength;
    NSNumber *inputApertureScaling;
    CIVector *inputAdditive;
    CIVector *inputSubtractive;
    NSNumber *inputMaxBlur;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) NSNumber *inputProtectStrength;
@property (retain) NSNumber *inputApertureScaling;
@property (retain) CIVector *inputAdditive;
@property (retain) CIVector *inputSubtractive;
@property (retain) NSNumber *inputMaxBlur;

- (id)outputImage;
- (id)kernel;

@end
