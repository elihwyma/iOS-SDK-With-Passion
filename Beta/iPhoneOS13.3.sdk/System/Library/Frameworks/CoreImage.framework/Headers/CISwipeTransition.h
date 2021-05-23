/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISwipeTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputExtent;
    CIColor *inputColor;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputOpacity;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputTime;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputOpacity;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
