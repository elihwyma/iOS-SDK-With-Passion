/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFaceLandmarkDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorDNN : VNFaceLandmarkDetector

{
    struct shared_ptr<vision::mod::LandmarkDetectorDNN> _landmarkDetector;
    vector_f48c7054 _landmarkPoints65;
}

@property (readonly) vector_f48c7054 *landmarkPoints65;

+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)inputBlobNames;
+ (id)outputBlobNames;
+ (const map_c38c583f *)_requestConstellationToDetectorConstellationMap;

- (id).cxx_construct;
- (void)releaseResources;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)getConstellation:(unsigned long long *)arg1 cvmlConstellation:(int *)arg2 fromOptions:(id)arg3 error:(id *)arg4;
- (_Bool)getLandmarkPoints:(vector_f48c7054 *)arg1 forConstellation:(int)arg2 error:(id *)arg3;
- (_Bool)getLandmarkErrorEstimates:(vector_7584168e *)arg1 forConstellation:(int)arg2 error:(id *)arg3;
- (_Bool)getLandmarkOcclusionFlags:(vector_a7cf9eda *)arg1 forConstellation:(int)arg2 error:(id *)arg3;
- (_Bool)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:(vector_f48c7054 *)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 error:(id *)arg4;

@end
