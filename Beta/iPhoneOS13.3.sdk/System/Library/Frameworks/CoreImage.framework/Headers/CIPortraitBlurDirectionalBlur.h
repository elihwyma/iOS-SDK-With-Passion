/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurDirectionalBlur : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputMaxBlur;
    NSNumber *inputHorizontalBlur;
    NSNumber *inputAntiAliasBlurStrength;
    NSNumber *inputUseMetal;
}

@property (retain) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputMaxBlur;
@property (copy, nonatomic) NSNumber *inputHorizontalBlur;
@property (copy, nonatomic) NSNumber *inputAntiAliasBlurStrength;
@property (copy, nonatomic) NSNumber *inputUseMetal;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelMetal;

@end
