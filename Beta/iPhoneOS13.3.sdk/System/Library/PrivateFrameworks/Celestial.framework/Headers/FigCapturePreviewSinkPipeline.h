/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWImageQueueSinkNode, BWNodeOutput, BWPixelTransferNode, BWPreviewStitcherNode, BWPreviewTimeMachineSinkNode, BWSceneClassifierSinkNode, BWStreamingFilterNode, NSArray, NSDictionary, NSString;

@protocol BWQRCodeSceneObserver;

@interface FigCapturePreviewSinkPipeline : FigCaptureSinkPipeline

{
    BWPixelTransferNode *_scalerNode;
    BWImageQueueSinkNode *_imageQueueSinkNode;
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWStreamingFilterNode *_filterNode;
    BWPreviewTimeMachineSinkNode *_timeMachineSinkNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    NSArray *_filters;
    BWPreviewStitcherNode *_previewStitcher;
    BWNodeOutput *_mrcCaptureOutput;
    BWNodeOutput *_videoDataSinkOutput;
    BWNodeOutput *_videoThumbnailSinkOutput;
    BWNodeOutput *_depthDataSinkOutput;
    NSDictionary *_imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
    struct FigCaptureVideoTransform _outputTransform;
    struct FigCaptureVideoTransform _videoThumbnailSinkOutputTransform;
    NSString *_sourceID;
    int _sourceDeviceType;
    _Bool _overCaptureEnabled;
    double _videoStabilizationOverscan;
    long long _primaryCaptureRectUniqueID;
    _Bool _depthFilterRenderingEnabled;
}

@property (nonatomic) id <BWQRCodeSceneObserver> qrCodeSceneObserver;
@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) BWImageQueueSinkNode *imageQueueSinkNode;
@property (nonatomic, readonly) BWStreamingFilterNode *filterNode;
@property (nonatomic, readonly) BWPixelTransferNode *scalerNode;
@property (nonatomic, readonly) BWPreviewTimeMachineSinkNode *timeMachineSinkNode;
@property (nonatomic, readonly) BWNodeOutput *mrcCaptureOutput;
@property (nonatomic, readonly) BWNodeOutput *videoDataSinkOutput;
@property (nonatomic, readonly) BWNodeOutput *videoThumbnailSinkOutput;
@property (nonatomic, readonly) BWNodeOutput *depthDataSinkOutput;
@property (nonatomic, readonly) NSDictionary *imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
@property (nonatomic, readonly) _Bool depthFilterRenderingEnabled;
@property (nonatomic, readonly) struct FigCaptureVideoTransform outputTransform;
@property (nonatomic, readonly) struct FigCaptureVideoTransform videoThumbnailSinkOutputTransform;
@property (nonatomic) _Bool discardsImageQueueSampleData;
@property (nonatomic) _Bool sceneClassifierSuspended;
@property (retain, nonatomic) NSArray *filters;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (readonly) double primaryCaptureRectAspectRatio;
@property (readonly) struct CGPoint primaryCaptureRectCenter;
@property (readonly) long long primaryCaptureRectUniqueID;
@property _Bool displaysWidestCameraOnly;

+ (void)initialize;

- (void)dealloc;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (void)setVideoStabilizationOverscanCropEnabled:(_Bool)arg1;
- (void)setPrimaryCaptureRectAspectRatio:(double)arg1 center:(struct CGPoint)arg2 fencePortSendRight:(id)arg3 uniqueID:(long long)arg4;
- (void)setStoppingForModeSwitch:(_Bool)arg1;
- (id)initWithConfiguration:(id)arg1 sourcePreviewOutput:(id)arg2 imageQueueSinkNode:(id)arg3 graph:(id)arg4 name:(id)arg5 inferenceScheduler:(id)arg6 captureDevice:(id)arg7 previewTapDelegate:(id)arg8;
- (int)_buildVideoPreviewSinkPipeline:(id)arg1 sourcePreviewOutput:(id)arg2 graph:(id)arg3 inferenceScheduler:(id)arg4 captureDevice:(id)arg5 previewTapDelegate:(id)arg6;
- (int)_appendFilteredPreviewPipeline:(id *)arg1 desiredPipelineStage:(id)arg2 videoPreviewSinkConnectionConfiguration:(id)arg3 graph:(id)arg4 inferenceScheduler:(id)arg5 captureDevice:(id)arg6;
- (int)_buildImageQueuePreviewSinkPipeline:(id)arg1 previewPipelineStage:(id)arg2 videoPreviewSinkConnectionConfiguration:(id)arg3 previewScalerOutputBuffersAreShared:(_Bool)arg4 debugOverlayEnabled:(_Bool)arg5 clientIsCameraOrDerivative:(_Bool)arg6 displayPipeRequiresPacked10BitPixelFormatForP3Input:(_Bool)arg7 isBravoDevice:(_Bool)arg8 deferredPrepareEnabled:(_Bool)arg9 remoteVideoPreview:(_Bool)arg10 graph:(id)arg11 previewTapDelegate:(id)arg12;
- (int)_buildPreviewTimeMachineSinkPipeline:(id)arg1 upstreamPipelineStageForPreviewTimeMachine:(id)arg2 upstreamTransform:(struct FigCaptureVideoTransform)arg3 previewTimeMachineConnectionConfiguration:(id)arg4 videoPreviewEnabled:(_Bool)arg5 deferredPrepareEnabled:(_Bool)arg6 graph:(id)arg7 captureDevice:(id)arg8;
- (void)_stashPreviewImageQueueUpdatedNotificationPayload:(int)arg1 previewDimensions:(CDStruct_79c71658)arg2 remoteVideoPreview:(_Bool)arg3;

@end
