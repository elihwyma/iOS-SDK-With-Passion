/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISDOFHighlightRecovery : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputScale;
    NSNumber *inputApertureScaling;
    NSNumber *inputIterations;
    NSNumber *inputMaxBlur;
    CIVector *inputBlurRadius;
    CIVector *inputMaxIntensity;
    CIVector *inputMinIntensity;
}

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSNumber *inputApertureScaling;
@property (retain) NSNumber *inputIterations;
@property (retain) NSNumber *inputMaxBlur;
@property (retain) CIVector *inputBlurRadius;
@property (retain) CIVector *inputMaxIntensity;
@property (retain) CIVector *inputMinIntensity;

+ (id)customAttributes;

- (id)outputImage;

@end
