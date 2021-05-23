/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSourcePipeline.h>

@class BWFigVideoCaptureDevice, BWMemoryPool, BWMultiStreamCameraSourceNode, BWNodeOutput, FigCaptureSourceDepthDataFormat, FigCaptureSourceVideoFormat, NSArray, NSDictionary, NSMutableArray;

@protocol BWDetectedFacesFilterDelegate;

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline

{
    _Bool _useCaptureOutputForPreview;
    _Bool _allowISPVISForPreview;
    int _deviceType;
    int _devicePosition;
    NSMutableArray *_sourceNodes;
    BWMultiStreamCameraSourceNode *_sourceNode;
    BWMultiStreamCameraSourceNode *_telephotoSourceNode;
    BWMultiStreamCameraSourceNode *_superWideSourceNode;
    BWMultiStreamCameraSourceNode *_infraredSourceNode;
    BWNodeOutput *_sourceFormatReferenceOutput;
    NSMutableArray *_synchronizerNodes;
    NSArray *_previewFilters;
    NSDictionary *_previewOutputsBySourceDeviceType;
    NSDictionary *_stillImageOutputsByPortType;
    NSDictionary *_videoCaptureOutputsArrayBySourceDeviceType;
    unsigned int _nextVideoCaptureOutputIndexBySourceDeviceType[10];
    NSDictionary *_detectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_visionDataOutputsBySourceDeviceType;
    BWFigVideoCaptureDevice *_captureDevice;
    struct OpaqueFigCaptureSource *_captureSource;
    FigCaptureSourceVideoFormat *_captureSourceVideoFormat;
    FigCaptureSourceDepthDataFormat *_captureSourceDepthDataFormat;
    struct CGRect _overscanRect;
    _Bool _stillImageOutputDerivesFromVideoCaptureOutput;
    BWMemoryPool *_memoryPool;
    _Bool _overCapturePercentage;
}

@property (nonatomic) id <BWDetectedFacesFilterDelegate> faceFilteringDelegate;
@property (nonatomic) int stillImageOutputRetainedBufferCountOverride;
@property (nonatomic) struct OpaqueCMClock *masterClock;
@property (nonatomic) _Bool keepISPStreamingWhenStopping;
@property (nonatomic, readonly) NSDictionary *stillImageOutputsByPortType;
@property (nonatomic, readonly) unsigned int stillImageOutputPixelFormat;
@property (nonatomic, readonly) _Bool stillImageOutputDerivesFromVideoCaptureOutput;
@property (nonatomic, readonly) struct OpaqueCMClock *clock;
@property (nonatomic, readonly) _Bool requiresMasterClock;
@property (nonatomic, readonly) BWFigVideoCaptureDevice *captureDevice;
@property (nonatomic, readonly) struct OpaqueFigCaptureSource *captureSource;
@property (nonatomic, readonly) FigCaptureSourceVideoFormat *captureSourceVideoFormat;
@property (nonatomic, readonly) FigCaptureSourceDepthDataFormat *captureSourceDepthDataFormat;
@property (nonatomic, readonly) struct CGRect overscanRect;
@property (nonatomic, readonly) BWNodeOutput *sourceFormatReferenceOutput;
@property (nonatomic, readonly) struct FigCaptureVideoTransform videoCaptureOutputTransform;
@property (nonatomic, readonly) int motionAttachmentsSource;
@property (nonatomic, readonly) BWMultiStreamCameraSourceNode *sourceNode;

+ (void)initialize;

- (void)dealloc;
- (int)prepareForStillImageCaptureWithStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(_Bool)arg3;
- (void)setPreviewShift:(struct CGPoint)arg1 previewScaleFactor:(float)arg2 forPortType:(id)arg3;
- (_Bool)newConfigurationRequiresStreamRestart:(id)arg1;
- (void)setStreamsSuspendedBySourceDeviceType:(id)arg1;
- (void)logCameraStreamingInformationToAggd:(long long)arg1 applicationID:(id)arg2;
- (id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 graph:(id)arg3 name:(id)arg4 ispIsStreaming:(_Bool)arg5 renderDelegate:(id)arg6;
- (id)previewOutputForSourceDeviceType:(int)arg1;
- (id)nextVideoCaptureOutputForSourceDeviceType:(int)arg1;
- (id)visionDataOutputForSourceDeviceType:(int)arg1;
- (id)detectedObjectsOutputForSourceDeviceType:(int)arg1;
- (void)hackRetainedBufferCountsForDualStreamSources;
- (int)allocateSharedBufferPools;
- (int)_buildMultiStreamCameraSourcePipeline:(id)arg1 graph:(id)arg2 ispIsStreaming:(_Bool)arg3 renderDelegate:(id)arg4;
- (int)_addDepthFromInfraredSynchronizer:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4;
- (int)_buildVideoCaptureOutputNetwork:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4;
- (int)_buildPreviewOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3;
- (int)_buildDetectedObjectsOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3;
- (int)_insertCrossOverAndOverCaptureNodesOnOutputsBySourceDeviceType:(id)arg1 connectionConfigurations:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 outputNetworkType:(int)arg5;
- (int)_addOverCaptureDepthSynchronizerForOutputs:(id *)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3;
- (id)_addCrossOverNodeToGraph:(id)arg1 inputs:(id)arg2 mediaType:(unsigned int)arg3 name:(id)arg4 outErr:(int *)arg5;
- (id)_addOverCaptureSourcePipelineToGraph:(id)arg1 upstreamVideoCaptureOutputsBySourceDeviceType:(id)arg2 depthEnabled:(_Bool)arg3 forPreview:(_Bool)arg4 outErr:(int *)arg5;

@end
