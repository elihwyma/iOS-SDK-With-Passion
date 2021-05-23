/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIReductionFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIKMeans : CIReductionFilter

{
    CIImage *inputMeans;
    NSNumber *inputCount;
    NSNumber *inputPasses;
    NSNumber *inputPerceptual;
}

@property (retain, nonatomic) CIImage *inputMeans;
@property (copy, nonatomic) NSNumber *inputCount;
@property (copy, nonatomic) NSNumber *inputPasses;
@property (copy, nonatomic) NSNumber *inputPerceptual;

+ (id)customAttributes;

- (id)outputImage;
- (id)_combine:(id)arg1;
- (id)_kernelKmeans;
- (id)defuse:(id)arg1 seed:(int)arg2;

@end
