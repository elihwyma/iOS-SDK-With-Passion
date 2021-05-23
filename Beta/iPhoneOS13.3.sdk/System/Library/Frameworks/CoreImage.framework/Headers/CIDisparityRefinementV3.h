/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinementV3 : CIFilter

{
    NSNumber *inputScale;
    CIImage *inputImage;
    CIImage *inputMainImage;
    CIImage *inputMatteImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputDraftMode;
}

@property (copy) NSNumber *inputScale;
@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMainImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)outputImage;
- (id)alphaImageForMainImage:(id)arg1 disparity:(id)arg2;

@end
