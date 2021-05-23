/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class AVCaptureDataOutputSynchronizer, AVCaptureDepthDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput, NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAVFoundationCapture

{
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureVideoDataOutput *_videoCaptureOutput;
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
    NSObject<OS_dispatch_queue> *_viewPointCorrectionQueue;
    AVCaptureSession *_captureSession;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
    NSMutableArray *_outputSynchronizerOutputs;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureDepthDataOutput *_depthDataOutput;
    AVCaptureDevice *_captureDevice;
    _Bool _faceMeshTrackingEnabled;
    _Bool _viewPointCorrectionThermalEnabled;
    _Bool _effectsApplied;
    CDStruct_1b6d18a9 _lastPrintTimestamp;
    CDStruct_1b6d18a9 _lastReceivedTimestamp;
    CDStruct_1b6d18a9 _lastSentTimestamp;
    int _lastRequestedWidth;
    int _lastRequestedHeight;
    int _lastRequestedFrameRate;
    int _lastClientRequestedFrameRate;
    int _sentFrameCount;
    int _receivedFrameCount;
    struct CGSize _requestSize;
    struct CGSize _captureSize;
    _Bool _resize;
    _Bool _isPreviewing;
    _Bool _isCapturing;
    _Bool _forceMirrorCapture;
    _Bool _forceDynamicEffectsFramerate;
    _Bool _forcePearlCamera;
    int _previewFrameCount;
    int _captureFrameCount;
    float _processTimeSum;
    float _depthFrameRateMultplier;
    float _viewpointProcessTime;
    NSMutableArray *_renderFrameTimes;
    struct __CVPixelBufferPool *_bufferPool;
    struct OpaqueVTPixelTransferSession *_transferSession;
    struct __CVPixelBufferPool *_resizeBufferPool;
    struct OpaqueVTPixelTransferSession *_resizeTransferSession;
    struct __CVPixelBufferPool *_rotateBufferPool;
    struct OpaqueVTImageRotationSession *_rotationSession;
    struct __CVPixelBufferPool *_mirrorBufferPool;
    struct OpaqueVTImageRotationSession *_mirrorSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property _Bool faceMeshTrackingEnabled;
@property _Bool effectsApplied;

- (void)dealloc;
- (int)startPreview;
- (int)stop:(_Bool)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (_Bool)isPreviewRunning;
- (void)setCameraZoomFactor:(double)arg1;
- (void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (int)setFrameRate:(int)arg1;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)copyColorInfo:(const struct __CFDictionary **)arg1;
- (int)setCameraWithUID:(id)arg1;
- (id)getCameraUID;
- (_Bool)isFrontCamera;
- (int)getPreviewFrameCount:(int *)arg1 captureFrameCount:(int *)arg2 reset:(_Bool)arg3;
- (int)frameBecameAvailableCount:(int *)arg1 figBufferQueueEmptyCount:(int *)arg2 figBufferQueueErrorCount:(int *)arg3;
- (_Bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (void)setViewPointCorrectionEnabaled:(_Bool)arg1;
- (struct CGSize)getBestCaptureSizeForEncodingSize:(struct CGSize)arg1;
- (void)captureSessionNotification:(id)arg1;
- (int)setCamera:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4;
- (void)initializeOutputs;
- (void)setupRotationBufferPoolWithWidth:(int)arg1 height:(int)arg2;
- (void)setupMirrorBufferPoolWithWidth:(int)arg1 height:(int)arg2;
- (void)resetViewPointLogging;
- (void)initializeVideoCaptureOutput;
- (void)initializeMetadataOutput;
- (void)initializeDepthDataOutput;
- (void)initializeSynchronizedOutputs;
- (_Bool)shouldAddDepthData;
- (void)configureCaptureDeviceDepthFormat;
- (_Bool)shouldAddTrackedFacesData;
- (void)prepareSynchronizedOutputs:(id)arg1;
- (void)updateDepthFrameRate;
- (void)updateRenderProcessFrameRate:(id)arg1;
- (void)updateVideoCaptureServerWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 frontCamera:(_Bool)arg3 shouldMirrorFrontPreview:(_Bool)arg4 isFromEffects:(_Bool)arg5;
- (int)setFrameRateInternal:(int)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 depthData:(id)arg2 faceData:(id)arg3 captureDevice:(id)arg4;
- (struct opaqueCMSampleBuffer *)newResizedFrame:(struct opaqueCMSampleBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (struct opaqueCMSampleBuffer *)copySampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)attachMetadata:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2;
- (void)processViewPointCorrection:(struct opaqueCMSampleBuffer *)arg1 metaData:(id)arg2 shouldProcess:(_Bool)arg3;
- (void)sendImageDataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 depthData:(id)arg2 faceData:(id)arg3 captureDevice:(id)arg4 originalSize:(struct CGSize)arg5;
- (void)ensureRotationBufferPoolSupportsWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)ensureMirroredBufferPoolSupportsWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct opaqueCMSampleBuffer *)newMirroredVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (struct opaqueCMSampleBuffer *)newRotatedVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 shouldMirror:(_Bool)arg3;
- (struct __CVBuffer *)copyPixelBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)shouldResizeWithCaptureSize:(struct CGSize)arg1 requestSize:(struct CGSize)arg2;
- (int)setVideoDeviceToWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (_Bool)cameraSupportsNoQueueFormatWidth:(int)arg1 height:(int)arg2;
- (CDStruct_1b6d18a9)frameDurationForVideoDeviceFormat:(id)arg1 frameRate:(int)arg2;
- (int)getMaxAllowedFrameRate:(int)arg1;
- (id)cameraFormatForWidth:(int)arg1 height:(int)arg2;
- (_Bool)isBackCamera;
- (int)setVideoDeviceToSelectedDevice:(id)arg1;
- (_Bool)shouldUseRearCameraVideoStabilization;
- (void)setVideoStabilizationTo:(_Bool)arg1;
- (void)checkCameraZoomCapability;
- (void)setVideoOrientationAndMirroredForDevice:(id)arg1;
- (id)cameraFormatForWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (_Bool)isFormatMaxFrameRateSupported:(id)arg1 frameRate:(int)arg2;
- (void)encodeProcessedPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 imageData:(id)arg3 processTime:(id)arg4;
- (id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraUID:(id)arg5;
- (_Bool)shouldUseViewpointCorrection;
- (_Bool)supportsViewpointCorrection;

@end
