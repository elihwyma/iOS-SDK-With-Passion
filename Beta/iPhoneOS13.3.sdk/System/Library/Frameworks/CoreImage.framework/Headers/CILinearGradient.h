/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector;

__attribute__((visibility("hidden")))
@interface CILinearGradient : CIFilter

{
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

@property (retain, nonatomic) CIVector *inputPoint0;
@property (retain, nonatomic) CIVector *inputPoint1;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
