/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVignette : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputRadius;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (_Bool)_isIdentity;

@end
