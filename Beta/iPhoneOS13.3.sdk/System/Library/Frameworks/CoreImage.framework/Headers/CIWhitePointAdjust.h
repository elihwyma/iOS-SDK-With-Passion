/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage;

__attribute__((visibility("hidden")))
@interface CIWhitePointAdjust : CIFilter

{
    CIImage *inputImage;
    CIColor *inputColor;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (_Bool)_isIdentity;

@end
