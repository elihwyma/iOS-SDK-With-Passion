/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetector.h>

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceBBoxAligner : VNDetector

{
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> mFaceBoxPoseAlignerImpl;
    _Bool _modelFilesWereMemmapped;
    id <VNModelFile> mFaceBoxAlignerModelFileHandle;
}

+ (_Bool)shouldDumpDebugIntermediates;

- (void)dealloc;
- (id).cxx_construct;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;
- (void)dumpDebugIntermediatesWithImageBuffer:(id)arg1 lumaIntermediate:(struct __CVBuffer *)arg2 rawBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg3 alignedBBoxInLumaIntermediateCoordinates:(struct _Geometry2D_rect2D_)arg4 meanShapeInLumaIntermediateCoordinates:(const vector_f48c7054 *)arg5 rotationAngle:(float)arg6;
- (id)processWithOptions:(id)arg1 warningRecorder:(id)arg2 error:(id *)arg3;

@end
