/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage;

__attribute__((visibility("hidden")))
@interface CIFalseColor : CIFilter

{
    CIImage *inputImage;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
