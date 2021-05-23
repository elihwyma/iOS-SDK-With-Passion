/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGuidedFilter : CIFilter

{
    CIImage *inputImage;
    CIImage *inputGuideImage;
    NSNumber *inputRadius;
    NSNumber *inputEpsilon;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputGuideImage;
@property (copy) NSNumber *inputRadius;
@property (copy) NSNumber *inputEpsilon;

+ (id)customAttributes;

- (id)outputImage;
- (id)_fullFloatBoxFilter;
- (id)_multiplyImagesKernel;
- (id)_boxFilter:(id)arg1 fullFloat:(_Bool)arg2;
- (id)_swizzleImageXXX1:(id)arg1;
- (id)_swizzleImageYYZ1:(id)arg1;
- (id)_swizzleImageYZZ1:(id)arg1;
- (id)multiplyImages:(id)arg1 imageB:(id)arg2;
- (id)subtract:(id)arg1 minus:(id)arg2;
- (id)_computeABKernel;
- (id)_downsampledColorImage:(id)arg1;
- (id)_combineRGB_and_A;
- (id)computeAB:(id)arg1;
- (id)_upsampleImage:(id)arg1 targetImageSize:(struct CGSize)arg2;
- (id)_finalResult;

@end
