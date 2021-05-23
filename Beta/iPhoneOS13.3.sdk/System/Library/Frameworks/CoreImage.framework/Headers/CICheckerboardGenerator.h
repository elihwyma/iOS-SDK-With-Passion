/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheckerboardGenerator : CIFilter

{
    CIVector *inputCenter;
    CIColor *inputColor0;
    CIColor *inputColor1;
    NSNumber *inputWidth;
    NSNumber *inputSharpness;
}

@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputSharpness;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
