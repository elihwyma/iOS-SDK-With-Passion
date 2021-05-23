/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIStretch : CIFilter

{
    CIImage *inputImage;
    CIVector *inputPoint;
    CIVector *inputSize;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputPoint;
@property (retain, nonatomic) CIVector *inputSize;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (void)setDefaults;
- (struct CGRect)computeDOD:(struct vec4)arg1;

@end
