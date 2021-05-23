/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VCScreenCapture

{
    id _weakCapture;
    NSDictionary *_options;
    struct OpaqueFigVirtualDisplaySession *_session;
    struct OpaqueVTImageRotationSession *_rotationSession;
    struct __CVPixelBufferPool *_rotationBufferPool;
    struct __CVPixelBufferPool *_resizeBufferPool;
    struct OpaqueVTPixelTransferSession *_resizeTransferSession;
    _Bool _shouldResizeInitialized;
    _Bool _shouldResize;
    struct _opaque_pthread_mutex_t _screenCaptureLock;
    _Bool _isPreviewing;
    _Bool _isCapturing;
    int _captureWidth;
    int _captureHeight;
    int _captureFramerate;
}

- (void)dealloc;
- (int)startPreview;
- (int)stop:(_Bool)arg1;
- (_Bool)isPreviewRunning;
- (int)setFrameRate:(int)arg1;
- (void)callbackWithEventString:(id)arg1;
- (int)_startCapture;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)copyColorInfo:(const struct __CFDictionary **)arg1;
- (int)setCameraWithUID:(id)arg1;
- (id)getCameraUID;
- (_Bool)isFrontCamera;
- (int)getPreviewFrameCount:(int *)arg1 captureFrameCount:(int *)arg2 reset:(_Bool)arg3;
- (int)frameBecameAvailableCount:(int *)arg1 figBufferQueueEmptyCount:(int *)arg2 figBufferQueueErrorCount:(int *)arg3;
- (_Bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (void)capturedScreen:(struct opaqueCMSampleBuffer *)arg1 sourceRect:(struct CGRect)arg2 desRect:(struct CGRect)arg3 transform:(unsigned int)arg4;
- (id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 clientPID:(int)arg5 error:(int *)arg6;

@end
