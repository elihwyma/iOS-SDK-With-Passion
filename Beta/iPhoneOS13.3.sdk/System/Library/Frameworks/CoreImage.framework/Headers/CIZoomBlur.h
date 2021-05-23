/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIZoomBlur : CIFilter

{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAmount;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputAmount;

+ (id)customAttributes;

- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)_kernel;
- (id)outputImage;
- (_Bool)_isIdentity;
- (id)_kernelNew;
- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;

@end
