/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoModelFileBasedDetector.h>

@class NSString;

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector

{
    struct shared_ptr<vision::mod::LandmarkAttributes> _faceAttributesPupilRefiner;
    id <VNModelFile> mLandmarkRefinerModelFileHandle;
    _Bool modelFilesWereMemmapped;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (struct _Geometry2D_point2D_)computeCentroidUsingPoints:(const struct _Geometry2D_point2D_ *)arg1 indicies:(const int *)arg2 numberOfIndicies:(int)arg3;
+ (const struct _LandmarkDetector_faceMeshParts_ *)landmarksMeshPartsForConstellation:(unsigned long long)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (_Bool)loadRefinersAndReturnError:(id *)arg1;
- (struct __CVBuffer *)createLumaPixelBufferFrom:(id)arg1 forFaceBBox:(struct _Geometry2D_rect2D_)arg2 initializeVImage:(struct vImage_Buffer *)arg3 initializeRect2D:(struct _Geometry2D_rect2D_ *)arg4 initializeIgnoreCropAndScaleFlag:(_Bool *)arg5 initializeLumaScaleFromOriginal:(float *)arg6 options:(id)arg7 error:(id *)arg8;
- (void)calculatePupilLocationAndUpdateLandmarkPoints:(vector_f48c7054 *)arg1;
- (id)computeLandmarksScoreOnImage:(const struct vImage_Buffer *)arg1 withFaceBoundingBox:(const struct _Geometry2D_rect2D_ *)arg2 andLandmarks:(const void *)arg3 error:(id *)arg4;
- (_Bool)postprocessLandmarkResultsForLandmarks:(const vector_f48c7054 *)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 options:(id)arg4 warningRecorder:(id)arg5 error:(id *)arg6;
- (struct CGRect)normalizedFaceBBoxForLandmarks:(id)arg1;
- (_Bool)detectBlinkOnFaceImage:(const struct vImage_Buffer *)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(struct _Geometry2D_rect2D_ *)arg3 landmarks:(const void *)arg4 warningRecorder:(id)arg5 error:(id *)arg6;

@end
