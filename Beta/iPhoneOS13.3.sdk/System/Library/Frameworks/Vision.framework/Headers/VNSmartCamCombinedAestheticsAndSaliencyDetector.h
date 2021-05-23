/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNSmartCamCombinedAestheticsAndSaliencyDetector : VNEspressoModelFileBasedDetector

- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;
- (id)_classifyAesthetics:(_Bool)arg1 generateSaliencyHeatMap:(_Bool)arg2 for32BGRAImageInPixelBuffer:(struct __CVBuffer *)arg3 withOptions:(id)arg4 modelInputImageSize:(struct CGSize)arg5 originalImageSize:(struct CGSize)arg6 regionOfInterest:(struct CGRect)arg7 warningRecorder:(id)arg8 error:(id *)arg9;

@end
