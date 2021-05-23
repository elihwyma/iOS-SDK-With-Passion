/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFusionDelta : CIFilter

{
    CIImage *inputImage;
    CIVector *inputAddBlur;
    CIVector *inputRemoveBlur;
    NSNumber *inputApertureScaling;
    NSNumber *inputMaxBlur;
}

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;
- (id)kernel;

@end
