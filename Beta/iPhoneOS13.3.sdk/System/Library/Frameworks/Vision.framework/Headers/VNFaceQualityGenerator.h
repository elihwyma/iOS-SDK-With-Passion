/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceQualityGenerator : VNDetector

{
    struct shared_ptr<vision::mod::FaceQualityPredictor> _mFaceQualityPredictor;
    struct FaceQualityOptions _mNetworkOptions;
}

+ (id)configurationOptionKeysForDetectorKey;

- (id).cxx_construct;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;

@end
