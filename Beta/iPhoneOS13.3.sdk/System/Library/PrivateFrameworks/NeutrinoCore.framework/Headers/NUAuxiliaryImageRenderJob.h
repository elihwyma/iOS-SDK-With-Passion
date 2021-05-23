/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@class CIRenderTask, NUCVPixelBuffer;

@protocol NUAuxiliaryImage;

@interface NUAuxiliaryImageRenderJob : NURenderJob

{
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_cvBuffer;
    id <NUAuxiliaryImage> _auxiliaryImage;
    long long _auxiliaryImageType;
}

@property (retain) id <NUAuxiliaryImage> auxiliaryImage;
@property long long auxiliaryImageType;

- (id)result;
- (_Bool)render:(out id *)arg1;
- (void)cleanUp;
- (_Bool)complete:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (_Bool)wantsPrepareNodeCached;
- (_Bool)wantsRenderNodeCached;
- (_Bool)wantsRenderScaleClampedToNativeScale;
- (id)scalePolicy;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;

@end
