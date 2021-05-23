/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoExportJob : NUExportJob

{
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;
}

- (_Bool)render:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (_Bool)wantsOutputGeometry;
- (id)scalePolicy;
- (id)initWithVideoExportRequest:(id)arg1;
- (id)initWithExportRequest:(id)arg1;
- (id)videoExportRequest;
- (_Bool)wantsOutputVideo;
- (id)generateVideoComposition:(out id *)arg1;
- (_Bool)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 createCustomMetadata:(_Bool)arg4 geometryTransform:(id)arg5 inputSize:(struct CGSize)arg6 outputSize:(struct CGSize)arg7 error:(out id *)arg8;
- (_Bool)renderVideoFrames:(id)arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 colorSpace:(id)arg4 error:(out id *)arg5;

@end
