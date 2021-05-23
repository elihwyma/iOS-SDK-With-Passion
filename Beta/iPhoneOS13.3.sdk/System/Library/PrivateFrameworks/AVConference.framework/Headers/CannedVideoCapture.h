/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@protocol CannedVideoFrameFeeder;

__attribute__((visibility("hidden")))
@interface CannedVideoCapture

{
    struct CannedVideoCapturePrivate *_pimpl;
    id <CannedVideoFrameFeeder> _frameFeeder;
}

@property (nonatomic, readonly) struct CannedVideoCapturePrivate *pimpl;
@property (retain, nonatomic) id <CannedVideoFrameFeeder> frameFeeder;

+ (int)cannedVideoTypeForPath:(id)arg1;
+ (int)createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 withWidth:(int)arg2 height:(int)arg3;

- (void)dealloc;
- (int)startPreview;
- (int)stop:(_Bool)arg1;
- (_Bool)isPreviewRunning;
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
- (id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraUID:(id)arg5 video:(id)arg6 error:(int *)arg7;
- (void)stopThreads;
- (int)startThreads;

@end
