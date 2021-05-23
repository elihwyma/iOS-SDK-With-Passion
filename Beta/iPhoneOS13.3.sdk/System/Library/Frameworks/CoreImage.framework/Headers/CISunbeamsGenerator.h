/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISunbeamsGenerator : CIFilter

{
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputSunRadius;
    NSNumber *inputMaxStriationRadius;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputTime;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CISunbeams;

@end
