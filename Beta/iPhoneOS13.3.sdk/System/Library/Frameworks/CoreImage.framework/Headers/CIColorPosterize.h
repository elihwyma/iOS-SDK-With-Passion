/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorPosterize : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputLevels;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputLevels;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (_Bool)_isIdentity;

@end
