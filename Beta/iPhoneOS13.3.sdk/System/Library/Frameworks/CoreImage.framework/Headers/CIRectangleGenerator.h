/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRectangleGenerator : CIFilter

{
    CIColor *inputColor;
    CIVector *inputRectangle;
    NSNumber *inputEdgeBlur;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIRectangle;

@end
