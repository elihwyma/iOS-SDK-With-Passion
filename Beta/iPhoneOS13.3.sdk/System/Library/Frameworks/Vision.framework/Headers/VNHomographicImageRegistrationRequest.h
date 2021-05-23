/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageRegistrationRequest.h>

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest

- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)allowsCachingOfResults;
- (struct __CVBuffer *)_createHomographicPixelBufferFromImageBuffer:(id)arg1 cropRect:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)_createN:(unsigned long long)arg1 CVPixelBuffers:(struct __CVBuffer **)arg2 withPixelFormat:(unsigned int)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id *)arg6;
- (_Bool)_calculateHomographicWarpTransform:(CDStruct_8e0628e6 *)arg1 ofFloatingImagePixelBuffer:(struct __CVBuffer *)arg2 ontoReferenceImagePixelBuffer:(struct __CVBuffer *)arg3 usingImageRegistrationContext:(struct ImageRegistrationCtx_s *)arg4 glContext:(void *)arg5 seededWithPreviousWarpTransform:(const CDStruct_8e0628e6 *)arg6 error:(id *)arg7;
- (_Bool)wantsSequencedRequestObservationsRecording;

@end
