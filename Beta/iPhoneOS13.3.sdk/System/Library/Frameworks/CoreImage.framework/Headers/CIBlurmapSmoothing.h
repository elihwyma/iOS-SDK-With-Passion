/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapSmoothing : CIFilter

{
    CIImage *inputImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
    NSNumber *inputDraftMode;
}

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain, nonatomic) NSNumber *inputDraftMode;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelH;
- (id)_kernelV;
- (id)performPass:(id)arg1 reference:(id)arg2 values:(id)arg3 rect:(struct CGRect)arg4;

@end
