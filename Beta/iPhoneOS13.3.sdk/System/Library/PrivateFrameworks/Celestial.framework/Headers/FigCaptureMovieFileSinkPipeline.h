/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWFigVideoCaptureDevice, BWFileCoordinatorNode, BWIrisStagingNode, BWVideoOrientationMetadataNode, FigCaptureMovieFileSinkHeadPipeline, FigCaptureMovieFileSinkMiddlePipeline, NSArray, NSDictionary, NSMutableArray, NSString;

@protocol BWQRCodeSceneObserver;

@interface FigCaptureMovieFileSinkPipeline : FigCaptureSinkPipeline

{
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    FigCaptureMovieFileSinkMiddlePipeline *_middlePipeline;
    NSMutableArray *_tailPipelines;
    NSMutableArray *_movieFileSinkNodes;
    NSMutableArray *_videoCompressorNodes;
    NSMutableArray *_sdofCompressorNodes;
    NSDictionary *_movieFileColorInfo;
    _Bool _momentCaptureMovieRecordingEnabled;
    _Bool _overCaptureTailPipelineRenderingEnabled;
    _Bool _overCaptureEnabled;
}

@property (nonatomic, readonly) NSString *videoConnectionID;
@property (nonatomic, readonly) NSString *videoSourceID;
@property (nonatomic, readonly) int videoSourceDeviceType;
@property (nonatomic, readonly) BWIrisStagingNode *irisStagingNode;
@property (nonatomic, readonly) BWFileCoordinatorNode *fileCoordinatorNode;
@property (nonatomic, readonly) BWVideoOrientationMetadataNode *videoOrientationMetadataNode;
@property (nonatomic, readonly) NSArray *movieFileSinkNodes;
@property (nonatomic, readonly) NSArray *videoCompressorNodes;
@property (nonatomic, readonly) NSArray *sdofCompressorNodes;
@property (nonatomic, readonly) BWFigVideoCaptureDevice *captureDevice;
@property (nonatomic, readonly) struct CGRect irisVISCleanOutputRectForCLAP;
@property (nonatomic, readonly) NSDictionary *movieFileColorInfo;
@property (nonatomic, readonly) CDStruct_79c71658 offlineVISDimensions;
@property (nonatomic, readonly) _Bool overCaptureEnabled;
@property (nonatomic) _Bool overCaptureTailPipelineRenderingEnabled;
@property (nonatomic) id <BWQRCodeSceneObserver> qrCodeSceneObserver;
@property (nonatomic) _Bool sceneClassifierSuspended;
@property (nonatomic, readonly) _Bool allTailsAreRecording;
@property (nonatomic, readonly) _Bool atLeastOneTailIsRecording;

+ (void)initialize;

- (void)dealloc;
- (void)setRecording:(_Bool)arg1 forTailPipelineIndex:(unsigned long long)arg2;
- (void)setUpBackPressureForResolvedRetainedBufferCounts;
- (id)initWithConfiguration:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 name:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 recordingStatusDelegate:(id)arg12 irisRequestDelegate:(id)arg13 masterClock:(struct OpaqueCMClock *)arg14;
- (id)middlePipeline;
- (void)setRecordingForAllTailPipelines:(_Bool)arg1;

@end
