/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@protocol VideoCaptureServer

- (unsigned short)setCaptureFrameRate: /* Error: Ran out of types for this method. */;
- (unsigned short)onCaptureScreenFrame:frameTime:droppedFrames:orientation: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCaptureEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)onCaptureVideoFrame:frameTime:preview:shouldEnqueueFrame:droppedFrames:switching:orientation:camera:videoMirrored: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCaptureEvent:subType: /* Error: Ran out of types for this method. */;
- (unsigned short)onCaptureFramerateChange: /* Error: Ran out of types for this method. */;
- (unsigned short)setCameraZoomAvailable:currentZoomFactor:maxZoomFactor: /* Error: Ran out of types for this method. */;

@end
