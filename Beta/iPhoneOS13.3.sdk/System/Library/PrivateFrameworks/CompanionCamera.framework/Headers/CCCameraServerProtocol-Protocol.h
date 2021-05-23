/*
 Image: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
 */

@protocol CCCameraServerProtocol

- (unsigned short)checkin;
- (unsigned short)xpc_didUpdateThumbnailWithData:isVideo: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_willStartCapturing;
- (unsigned short)xpc_didStartCaptureTimerWithDate: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_didStopCapture;
- (unsigned short)xpc_burstCaptureWillStart;
- (unsigned short)xpc_burstCaptureNumberOfPhotosDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_burstCaptureDidStop;
- (unsigned short)xpc_captureModeSelected: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_orientationChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_countdownCanceled;
- (unsigned short)xpc_zoomChanged: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_didUpdateShallowDepthOfFieldStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_captureDeviceDidChange;
- (unsigned short)xpc_flashModeDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_hdrModeDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_irisModeDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_showingLivePreviewDidChange: /* Error: Ran out of types for this method. */;

@end
