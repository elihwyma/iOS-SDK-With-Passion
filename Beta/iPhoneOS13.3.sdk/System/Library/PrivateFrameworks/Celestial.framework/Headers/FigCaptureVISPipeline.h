/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCapturePipeline.h>

@class BWVISNode;

@interface FigCaptureVISPipeline : FigCapturePipeline

{
    BWVISNode *_visNode;
    BWVISNode *_sdofVISNode;
    struct CGRect _irisVISCleanOutputRect;
}

@property (nonatomic, readonly) BWVISNode *visNode;
@property (nonatomic, readonly) BWVISNode *sdofVISNode;
@property (nonatomic, readonly) struct CGRect irisVISCleanOutputRect;

+ (void)initialize;
+ (_Bool)visPipelineIsRequiredForFigCaptureVideoStabilizationType:(int)arg1;

- (void)dealloc;
- (void)_buildVISPipelineWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 videoCaptureConnectionConfiguration:(id)arg4 pipelineStage:(id)arg5 sdofPipelineStage:(id)arg6 videoStabilizationType:(int)arg7 motionAttachmentsSource:(int)arg8 fillExtendedRowsOfOutputBuffer:(_Bool)arg9 overCaptureEnabled:(_Bool)arg10 overCaptureVideoStitchingEnabled:(_Bool)arg11 videoStabilizationOverscanOverride:(float)arg12 motionMetadataPreloadingEnabled:(_Bool)arg13 visExecutionMode:(int)arg14 pipelineTraceID:(int)arg15 captureDevice:(id)arg16;
- (id)_buildMotionAttachmentsNodeWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 horizontalSensorBinningFactor:(int)arg4 verticalSensorBinningFactor:(int)arg5 maxSupportedFrameRate:(float)arg6 pipelineStage:(id)arg7 motionAttachmentsSource:(int)arg8 captureDevice:(id)arg9 isPanorama:(_Bool)arg10 optimizesImagesForOfflineVideoStabilization:(_Bool)arg11 provideSourceVideoWithMotionAttachmentsOutput:(_Bool)arg12 provideOfflineVISMotionDataOutput:(_Bool)arg13 attachedMediaKeyToProcess:(id)arg14;
- (id)_newVISNodeWithUpstreamOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 videoCaptureConnectionConfiguration:(id)arg4 videoStabilizationType:(int)arg5 motionAttachmentsSource:(int)arg6 fillExtendedRowsOfOutputBuffer:(_Bool)arg7 overCaptureEnabled:(_Bool)arg8 overCaptureVideoStitchingEnabled:(_Bool)arg9 videoStabilizationOverscanOverride:(float)arg10 motionMetadataPreloadingEnabled:(_Bool)arg11 visExecutionMode:(int)arg12 pipelineTraceID:(int)arg13 pipelineStage:(id)arg14 captureDevice:(id)arg15 irisVISCleanOutputRectOut:(struct CGRect *)arg16;
- (id)initWithUpstreamOutput:(id)arg1 graph:(id)arg2 name:(id)arg3 parentPipeline:(id)arg4 videoCaptureConnectionConfiguration:(id)arg5 pipelineStage:(id)arg6 sdofPipelineStage:(id)arg7 videoStabilizationType:(int)arg8 motionAttachmentsSource:(int)arg9 fillExtendedRowsOfOutputBuffer:(_Bool)arg10 overCaptureEnabled:(_Bool)arg11 overCaptureVideoStitchingEnabled:(_Bool)arg12 videoStabilizationOverscanOverride:(float)arg13 motionMetadataPreloadingEnabled:(_Bool)arg14 visExecutionMode:(int)arg15 pipelineTraceID:(int)arg16 captureDevice:(id)arg17;

@end
