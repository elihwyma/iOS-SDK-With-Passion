/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHexagonalPixellate : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIHexagonalPixellate;

@end
