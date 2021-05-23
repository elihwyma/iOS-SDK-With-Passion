/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisplacementDistortion : CIFilter

{
    CIImage *inputImage;
    CIImage *inputDisplacementImage;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIDisplaceFromImage;

@end
