/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CINinePartTiled : CIFilter

{
    CIImage *inputImage;
    CIVector *inputBreakpoint0;
    CIVector *inputBreakpoint1;
    CIVector *inputGrowAmount;
    NSNumber *inputFlipYTiles;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputBreakpoint0;
@property (retain, nonatomic) CIVector *inputBreakpoint1;
@property (retain, nonatomic) CIVector *inputGrowAmount;
@property (retain, nonatomic) NSNumber *inputFlipYTiles;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelAlt;

@end
