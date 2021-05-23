/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPalettize : CIFilter

{
    CIImage *inputImage;
    CIImage *inputPaletteImage;
    NSNumber *inputPerceptual;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputPaletteImage;
@property (retain, nonatomic) NSNumber *inputPerceptual;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelApplyPalette;

@end
