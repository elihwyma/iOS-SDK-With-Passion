/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWDepthConverterNode, BWFigVideoCaptureDevice, BWPortraitHDRStagingNode, BWStillImageBravoDisparityNode, BWStillImageCoordinatorNode, BWStillImageSampleBufferSinkNode, NSArray, NSString;

@interface FigCaptureStillImageUnifiedBracketingSinkPipeline : FigCaptureSinkPipeline

{
    BWFigVideoCaptureDevice *_captureDevice;
    unsigned int _pipelineStagePriority;
    unsigned int _inferencePriority;
    BWStillImageCoordinatorNode *_stillImageCoordinatorNode;
    BWStillImageSampleBufferSinkNode *_stillImageSinkNode;
    BWStillImageBravoDisparityNode *_stillImageDisparityNode;
    BWDepthConverterNode *_stillImageDepthConverterNode;
    BWPortraitHDRStagingNode *_portraitHDRStagingNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *nodes;
@property (nonatomic, readonly) NSString *sinkID;
@property (nonatomic, readonly) BWStillImageCoordinatorNode *stillImageCoordinatorNode;
@property (nonatomic, readonly) BWStillImageSampleBufferSinkNode *stillImageSinkNode;
@property (nonatomic, readonly) BWPortraitHDRStagingNode *portraitHDRStagingNode;

+ (void)initialize;

- (void)dealloc;
- (void)enablePrepareTimeAllocationsForDeferredPrepare;
- (id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 sourceOutputsByPortType:(id)arg3 captureStatusDelegate:(id)arg4 inferenceScheduler:(id)arg5 graph:(id)arg6 name:(id)arg7;
- (int)_buildStillImageSinkPipelineWithConfiguration:(id)arg1 sourceOutputsByPortType:(id)arg2 captureStatusDelegate:(id)arg3 inferenceScheduler:(id)arg4 graph:(id)arg5;
- (int)_buildRedEyeReductionSubPipelineWithName:(id)arg1 pipelineStage:(id)arg2 graph:(id)arg3 sensorConfigurationsByPortType:(id)arg4 inferenceScheduler:(id)arg5 subPipelineInputOut:(id *)arg6 subPipelineOutputOut:(id *)arg7;
- (int)_buildScaleAndEncodeSubPipelineWithName:(id)arg1 pipelineStage:(id)arg2 graph:(id)arg3 stillImageSinkPipelineWithConfiguration:(id)arg4 sensorConfigurationsByPortType:(id)arg5 supportsScaling:(_Bool)arg6 provideMeteorHeadroom:(_Bool)arg7 providePostEncodeInferences:(_Bool)arg8 inferenceScheduler:(id)arg9 subPipelineInputOut:(id *)arg10 subPipelineOutputOut:(id *)arg11;

@end
