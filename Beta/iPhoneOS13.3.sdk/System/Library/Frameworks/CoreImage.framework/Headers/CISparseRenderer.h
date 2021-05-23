/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISparseRenderer : CIFilter

{
    CIImage *inputImage;
    CIImage *inputMatteImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
    NSNumber *inputApertureScaling;
    NSNumber *inputDraftMode;
    NSNumber *inputAperture;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMatteImage;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) NSNumber *inputApertureScaling;
@property (copy, nonatomic) NSNumber *inputDraftMode;
@property (copy, nonatomic) NSNumber *inputAperture;

+ (id)customAttributes;

- (id)outputImage;
- (id)stepsLUTGenerator;
- (id)baseVecsLUTGenerator;
- (_Bool)_useD2XRenderer;
- (id)stepsLUT:(unsigned int)arg1;
- (id)baseVecsLUT:(unsigned int)arg1;
- (id)_lutKernel:(_Bool)arg1 alpha:(_Bool)arg2;
- (id)_kernel:(_Bool)arg1 alpha:(_Bool)arg2;
- (id)_packageParams:(_Bool)arg1 extent:(struct CGRect)arg2 image:(id)arg3 haveAlpha:(_Bool)arg4;

@end
