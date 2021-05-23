/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVignetteEffect : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputIntensity;
    NSNumber *inputFalloff;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSNumber *inputFalloff;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_poskernel;
- (id)_negkernel;

@end
