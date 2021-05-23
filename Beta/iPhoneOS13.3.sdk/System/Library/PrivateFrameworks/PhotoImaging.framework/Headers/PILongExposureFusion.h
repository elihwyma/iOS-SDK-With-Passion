/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface PILongExposureFusion : CIFilter

{
    CIImage *_inputImage;
    CIImage *_inputStillImage;
    CIImage *_inputMaskImage;
    NSNumber *_inputRenderScale;
    NSNumber *_inputVideoScale;
    CIVector *_inputAlignmentExtent;
    CIVector *_inputAlignmentTransform;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputStillImage;
@property (retain, nonatomic) CIImage *inputMaskImage;
@property (retain, nonatomic) NSNumber *inputRenderScale;
@property (retain, nonatomic) NSNumber *inputVideoScale;
@property (retain, nonatomic) CIVector *inputAlignmentExtent;
@property (retain, nonatomic) CIVector *inputAlignmentTransform;

+ (void)initialize;
+ (_Bool)debugDumpIntermediateImages;
+ (void)loadFusionTuningParameters;
+ (_Bool)_debugDumpIntermediateImages;

- (id)outputImage;
- (id)alignImage:(id)arg1 transform:(CDStruct_8e0628e6)arg2 extent:(struct CGRect)arg3;
- (id)_computeNCCMapFromImage:(id)arg1 toImage:(id)arg2 scale:(double)arg3;
- (id)_refineMaskImage:(id)arg1 guideImage:(id)arg2 scale:(double)arg3;
- (id)_fuseImage:(id)arg1 withGuideImage:(id)arg2 weightImage:(id)arg3 maskImage:(id)arg4;

@end
