/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFaceLandmarkDetector.h>

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorRevision1 : VNFaceLandmarkDetector

{
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkAlgorithmImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkMouthRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkRightEyeRefinerImpl;
    struct shared_ptr<vision::mod::LandmarkDetectorERT> mFaceLandmarkLeftEyeRefinerImpl;
    _Bool modelFilesWereMemmapped;
    id <VNModelFile> mCoreLandmarkModelFileHandle;
    id <VNModelFile> mLandmarkRefinerModelFileHandle;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (_Bool)shouldDumpDebugIntermediates;
+ (void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(struct __CVBuffer *)arg2 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg3 meanShapeInLumaIntermediate:(const vector_f48c7054 *)arg4 landmarkPointsInLumaIntermediate:(const vector_f48c7054 *)arg5;

- (void)dealloc;
- (id).cxx_construct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)loadRefinersAndReturnError:(id *)arg1;
- (_Bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;
- (unsigned long long)cascadeStepCountInOriginalModel;
- (unsigned long long)cascadeStepCountLoaded;

@end
