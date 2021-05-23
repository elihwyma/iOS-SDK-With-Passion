/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIUnsharpMask : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputIntensity;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (_Bool)_isIdentity;

@end
