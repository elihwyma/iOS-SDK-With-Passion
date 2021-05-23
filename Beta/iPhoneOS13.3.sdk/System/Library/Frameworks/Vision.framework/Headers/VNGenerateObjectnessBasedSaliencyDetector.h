/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNGenerateObjectnessBasedSaliencyDetector : VNEspressoModelFileBasedDetector

+ (id)configurationOptionKeysForDetectorKey;

- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)_observationsForImageIn32BGRAPixelBuffer:(struct __CVBuffer *)arg1 withOptions:(id)arg2 originalImageSize:(struct CGSize)arg3 regionOfInterest:(struct CGRect)arg4 warningRecorder:(id)arg5 error:(id *)arg6;

@end
