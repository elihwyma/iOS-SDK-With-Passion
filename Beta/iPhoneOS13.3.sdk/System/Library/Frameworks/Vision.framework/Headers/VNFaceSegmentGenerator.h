/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceSegmentGenerator : VNEspressoModelFileBasedDetector

{
    struct shared_ptr<vision::mod::FaceSegmenterDNN> _faceSegmenterDNN;
}

+ (float)_faceSegmenterMaximumInputImageAspectRatio;

- (id).cxx_construct;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)_getFaceSegmenterInputImageSize:(struct CGSize *)arg1 forRequestRevision:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_getNumberOfSupportedFaceSegments:(unsigned long long *)arg1 forRequestRevision:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_fillFaceSegmentLabelToProbabilityMap:(id)arg1 error:(id *)arg2;

@end
