/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CINinePartStretched : CIFilter

{
    CIImage *inputImage;
    CIVector *inputBreakpoint0;
    CIVector *inputBreakpoint1;
    CIVector *inputGrowAmount;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputBreakpoint0;
@property (retain, nonatomic) CIVector *inputBreakpoint1;
@property (retain, nonatomic) CIVector *inputGrowAmount;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
