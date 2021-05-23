/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCapturePipeline.h>

@class BWBackPressureNode, BWPixelTransferNode, BWQuickTimeMovieFileSinkNode, BWVideoCompressorNode, BWVideoStitcherNode, FigCaptureVISPipeline;

@protocol BWNodeBackPressureSource, BWQRCodeSceneObserver;

@interface FigCaptureMovieFileSinkTailPipeline : FigCapturePipeline

{
    BWVideoStitcherNode *_videoStitcherNode;
    BWPixelTransferNode *_scalerNode;
    FigCaptureVISPipeline *_visPipeline;
    BWVideoCompressorNode *_videoCompressorNode;
    BWVideoCompressorNode *_sdofCompressorNode;
    BWBackPressureNode *_irisIntermediateJPEGDecompressionBackPressureNode;
    BWBackPressureNode *_irisIntermediateJPEGDecompressionBackPressureNodeForSynchronizedSlaveVideoStitching;
    BWBackPressureNode *_videoStitcherBackPressureNode;
    BWBackPressureNode *_visBackPressureNode;
    BWBackPressureNode *_irisSDOFVISBackPressureNode;
    BWQuickTimeMovieFileSinkNode *_movieFileSinkNode;
    id <BWNodeBackPressureSource> _visBackPressureSourceNode;
    unsigned long long _tailIndex;
    unsigned long long _JPEGDecompressionSlaveSemaphoreIndex;
    int _visBackPressureExtraRetainedBufferCount;
    int _videoStabilizationType;
    _Bool _offlineVISEnabled;
    _Bool _recording;
    _Bool _sceneClassifierSuspended;
    id <BWQRCodeSceneObserver> _qrCodeSceneObserver;
}

@property (nonatomic) id <BWQRCodeSceneObserver> qrCodeSceneObserver;
@property (nonatomic, readonly) BWQuickTimeMovieFileSinkNode *movieFileSinkNode;
@property (nonatomic, readonly) BWVideoCompressorNode *videoCompressorNode;
@property (nonatomic, readonly) BWVideoCompressorNode *sdofCompressorNode;
@property (nonatomic, readonly) FigCaptureVISPipeline *visPipeline;
@property (nonatomic, readonly) struct CGRect irisVISCleanOutputRectForCLAP;
@property (nonatomic, readonly) CDStruct_79c71658 offlineVISDimensions;
@property (nonatomic) _Bool recording;
@property (nonatomic, readonly) unsigned long long JPEGDecompressionSlaveSemaphoreIndex;
@property (nonatomic) _Bool sceneClassifierSuspended;

- (void)dealloc;
- (int)_buildMovieFileSinkTailPipeline:(id)arg1 tailIndex:(unsigned long long)arg2 numTailPipelines:(unsigned long long)arg3 graph:(id)arg4 parentPipeline:(id)arg5 captureDevice:(id)arg6 inferenceScheduler:(id)arg7 recordingStatusDelegate:(id)arg8;
- (id)_appendBackPressureNodeToPreviousVideoOutput:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 pipelineStage:(id)arg4 nodeName:(id)arg5 backPressureNodeOut:(id *)arg6;
- (id)initWithConfiguration:(id)arg1 tailIndex:(unsigned long long)arg2 numTailPipelines:(unsigned long long)arg3 graph:(id)arg4 parentPipeline:(id)arg5 captureDevice:(id)arg6 inferenceScheduler:(id)arg7 recordingStatusDelegate:(id)arg8;
- (void)setUpBackPressureSemaphoresWithIrisIntermediateJPEGPhotoDecompressorNode:(id)arg1 videoDefringingNode:(id)arg2;

@end
