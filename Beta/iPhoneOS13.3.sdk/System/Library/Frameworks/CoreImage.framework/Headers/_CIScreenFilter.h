/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface _CIScreenFilter : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputSharpness;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputSharpness;

+ (id)customAttributes;
+ (id)_kernel;
+ (id)_kernel_code;

- (id)outputImage;

@end
