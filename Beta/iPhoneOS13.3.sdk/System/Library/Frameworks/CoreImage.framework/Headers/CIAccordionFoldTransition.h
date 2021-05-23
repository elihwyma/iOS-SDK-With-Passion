/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAccordionFoldTransition : CIFilter

{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    NSNumber *inputBottomHeight;
    NSNumber *inputNumberOfFolds;
    NSNumber *inputFoldShadowAmount;
    NSNumber *inputTime;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) NSNumber *inputBottomHeight;
@property (retain, nonatomic) NSNumber *inputNumberOfFolds;
@property (retain, nonatomic) NSNumber *inputFoldShadowAmount;
@property (retain, nonatomic) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_kernelWarpS;
- (id)_kernelWarpT;
- (id)_kernelMix;
- (id)_kernel;
- (id)outputImage;

@end
