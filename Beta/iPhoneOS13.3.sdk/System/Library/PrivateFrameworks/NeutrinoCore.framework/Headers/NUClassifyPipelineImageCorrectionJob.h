/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@class NUClassifyPipelineImageCorrectionRequest, VNObservation;

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob

{
    VNObservation *_observation;
    CDStruct_d58201db _imageSize;
}

@property (readonly) NUClassifyPipelineImageCorrectionRequest *classifyPipelineImageCorrectionRequest;

- (id)result;
- (id)cacheKey;
- (_Bool)render:(out id *)arg1;
- (id)initWithRequest:(id)arg1;
- (void)cleanUp;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithClassifyPipelineImageCorrectionRequest:(id)arg1;
- (id)detectClassifyPipelineImageCorrectionInBuffer:(struct __CVBuffer *)arg1 error:(out id *)arg2;

@end
