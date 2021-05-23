/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICircleGenerator : CIFilter

{
    CIColor *inputColor;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputEdgeBlur;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CICircle;

@end
