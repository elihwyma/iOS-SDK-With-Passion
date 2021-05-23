/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFaceLandmarkDetectorDNN.h>

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorRevision2 : VNFaceLandmarkDetectorDNN

+ (unsigned char)landmarkDetectorDNNVersion;

- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end
