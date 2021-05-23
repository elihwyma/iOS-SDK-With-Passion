/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHeightFieldFromMask : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRadius;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIResetalpha;

@end
