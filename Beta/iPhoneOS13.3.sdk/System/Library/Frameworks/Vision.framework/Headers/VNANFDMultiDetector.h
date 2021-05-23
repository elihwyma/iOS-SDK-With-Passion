/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelFileBasedDetector.h>

@class ShotflowDetectorANFDv2, VNFaceBBoxAligner;

__attribute__((visibility("hidden")))
@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector

{
    ShotflowDetectorANFDv2 *_mMultiHeadedANFDDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClass;
+ (float)faceDetectorChunkAspectRatio;
+ (id)detectedObjectClassToRequestClass;
+ (id)detectedObjectRequestClassToRequestInfo;
+ (id)detectedAnimalObjectClassToAnimalName;
+ (id)knownAnimalIdentifiers;
+ (void)_printDebugInfo:(id)arg1 detectedObjectsRaw:(id)arg2 faceDetectorBGRAImage:(struct __CVBuffer *)arg3 tempImage:(struct vImage_Buffer)arg4;

- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (id)_alignFace:(id)arg1 imageBuffer:(id)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end
