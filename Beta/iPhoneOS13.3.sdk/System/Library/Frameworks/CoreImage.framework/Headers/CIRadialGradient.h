/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRadialGradient : CIFilter

{
    CIVector *inputCenter;
    NSNumber *inputRadius0;
    NSNumber *inputRadius1;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius0;
@property (retain, nonatomic) NSNumber *inputRadius1;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
