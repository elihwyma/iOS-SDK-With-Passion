/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIContrastEnhancer : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputScale;
    NSNumber *inputLocal;
    NSNumber *inputPerceptual;
}

@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSNumber *inputLocal;
@property (retain, nonatomic) NSNumber *inputScale;
@property (retain, nonatomic) NSNumber *inputPerceptual;

+ (id)customAttributes;

- (id)outputImage;

@end
