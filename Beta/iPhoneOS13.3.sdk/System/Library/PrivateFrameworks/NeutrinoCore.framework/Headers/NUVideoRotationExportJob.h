/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoRotationExportJob : NUExportJob

- (_Bool)render:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsRenderStage;
- (_Bool)requiresVideoComposition;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (_Bool)wantsPrepareNodeCached;
- (_Bool)wantsRenderNodeCached;
- (_Bool)wantsRenderScaleClampedToNativeScale;
- (id)scalePolicy;
- (id)initWithExportRequest:(id)arg1;
- (_Bool)wantsOutputVideo;
- (id)initWithVideoRotationExportRequest:(id)arg1;
- (id)videoRotationExportRequest;
- (_Bool)wantsOutputVideoFrame;

@end
