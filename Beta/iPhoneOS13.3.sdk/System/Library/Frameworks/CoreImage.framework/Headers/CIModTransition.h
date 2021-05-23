/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIModTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputCenter;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
    NSNumber *inputCompression;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputTime;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputCompression;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
