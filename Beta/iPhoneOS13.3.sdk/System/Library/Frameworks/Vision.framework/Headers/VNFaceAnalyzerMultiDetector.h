/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelFileBasedDetector.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerMultiDetector : VNEspressoModelFileBasedDetector

{
    struct shared_ptr<vision::mod::FaceprintAndAttributes> _mMultiHeadedFaceClassifier;
    struct shared_ptr<vision::mod::FaceFrontalizer> _mFaceFrontalizerImpl;
    struct vImage_Buffer _faceVImageBuffer;
    NSMutableData *_mFaceFrontalizerWorkingBuffer;
}

+ (id)configurationOptionKeysForDetectorKey;

- (id).cxx_construct;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (void)_addFaceAnalysisResultsFromMap:(map_fdb8d0b1 *)arg1 toFaceAttributeObject:(id)arg2 withRequestRevision:(unsigned long long)arg3;

@end
