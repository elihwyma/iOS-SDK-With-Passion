/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFaceDetector.h>

@class VNFaceBBoxAligner;

__attribute__((visibility("hidden")))
@interface VNFaceDetectorRevision1 : VNFaceDetector

{
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> _faceDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
}

+ (id)configurationOptionKeysForDetectorKey;

- (id).cxx_construct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (void)purgeIntermediates;

@end
