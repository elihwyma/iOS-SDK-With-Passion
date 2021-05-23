/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBarsSwipeTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputBarOffset;
    NSNumber *inputTime;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputBarOffset;
@property (retain, nonatomic) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
