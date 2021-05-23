/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CILightTunnel : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRotation;
    NSNumber *inputRadius;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRotation;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
