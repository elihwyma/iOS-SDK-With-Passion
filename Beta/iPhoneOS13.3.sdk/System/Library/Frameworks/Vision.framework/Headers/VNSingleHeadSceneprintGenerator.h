/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNSingleHeadSceneprintGenerator : VNEspressoModelFileBasedDetector

+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;

- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)_analyzePixelBuffer:(struct __CVBuffer *)arg1 sceneprintOutputBuffer:(CDStruct_cf098810 *)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)_analyzeRegionOfInterest:(struct CGRect)arg1 sceneprintOutputBuffer:(CDStruct_cf098810 *)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id *)arg5;
- (id)_observationsForSceneprintOutput:(const CDStruct_cf098810 *)arg1 requestRevision:(unsigned long long)arg2 error:(id *)arg3;

@end
