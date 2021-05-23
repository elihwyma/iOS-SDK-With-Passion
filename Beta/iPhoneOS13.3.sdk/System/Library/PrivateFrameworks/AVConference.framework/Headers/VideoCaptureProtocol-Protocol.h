/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@protocol VideoCaptureProtocol

- (unsigned short)startPreview;
- (unsigned short)stop: /* Error: Ran out of types for this method. */;
- (unsigned short)isPreviewRunning;
- (unsigned short)setFrameRate: /* Error: Ran out of types for this method. */;
- (unsigned short)startCaptureWithWidth:height:frameRate: /* Error: Ran out of types for this method. */;
- (unsigned short)setWidth:height:frameRate: /* Error: Ran out of types for this method. */;
- (unsigned short)copyColorInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)setCameraWithUID: /* Error: Ran out of types for this method. */;
- (unsigned short)getCameraUID;
- (unsigned short)isFrontCamera;
- (unsigned short)getPreviewFrameCount:captureFrameCount:reset: /* Error: Ran out of types for this method. */;
- (unsigned short)frameBecameAvailableCount:figBufferQueueEmptyCount:figBufferQueueErrorCount: /* Error: Ran out of types for this method. */;
- (unsigned short)cameraSupportsFormatWidth:height: /* Error: Ran out of types for this method. */;

@end
