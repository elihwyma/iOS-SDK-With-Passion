/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIStarShineGenerator : CIFilter

{
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputRadius;
    NSNumber *inputCrossScale;
    NSNumber *inputCrossAngle;
    NSNumber *inputCrossOpacity;
    NSNumber *inputCrossWidth;
    NSNumber *inputEpsilon;
}

@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputCrossScale;
@property (retain, nonatomic) NSNumber *inputCrossAngle;
@property (retain, nonatomic) NSNumber *inputCrossOpacity;
@property (retain, nonatomic) NSNumber *inputCrossWidth;
@property (retain, nonatomic) NSNumber *inputEpsilon;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
