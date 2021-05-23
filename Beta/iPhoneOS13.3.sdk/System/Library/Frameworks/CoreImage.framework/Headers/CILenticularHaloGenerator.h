/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CILenticularHaloGenerator : CIFilter

{
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputHaloRadius;
    NSNumber *inputHaloWidth;
    NSNumber *inputHaloOverlap;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputTime;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CILenticularHalo;

@end
