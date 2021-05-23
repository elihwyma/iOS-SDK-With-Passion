/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPhotoGrain : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputISO;
    NSNumber *inputAmount;
    NSNumber *inputSeed;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputISO;
@property (copy, nonatomic) NSNumber *inputAmount;
@property (copy, nonatomic) NSNumber *inputSeed;

+ (id)customAttributes;

- (id)outputImage;
- (id)_interpolateGrainKernel;
- (id)_paddedTileKernel;
- (id)_grainBlendAndMixKernel;

@end
