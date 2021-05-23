/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@interface NUVideoRenderJob : NURenderJob

- (id)result;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsRenderStage;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (id)scalePolicy;
- (_Bool)wantsOutputVideo;
- (id)generateVideoComposition:(out id *)arg1;
- (id)videoRenderRequest;

@end
