/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGlassDistortion : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTexture;
    CIVector *inputCenter;
    NSNumber *inputScale;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTexture;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
