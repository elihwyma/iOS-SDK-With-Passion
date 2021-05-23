/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWDepthConverterNode, BWFigVideoCaptureDevice, BWPortraitHDRStagingNode, BWSISNode, BWStillImageBravoDisparityNode, BWStillImageCoordinatorNode, BWStillImageSampleBufferSinkNode, NSArray, NSString;

@interface FigCaptureStillImageSinkPipeline : FigCaptureSinkPipeline

{
    BWFigVideoCaptureDevice *_captureDevice;
    BWStillImageCoordinatorNode *_stillImageCoordinatorNode;
    BWStillImageSampleBufferSinkNode *_stillImageSinkNode;
    BWStillImageBravoDisparityNode *_stillImageDisparityNode;
    BWDepthConverterNode *_stillImageDepthConverterNode;
    BWPortraitHDRStagingNode *_portraitHDRStagingNode;
    BWSISNode *_legacySISNode;
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

@end
