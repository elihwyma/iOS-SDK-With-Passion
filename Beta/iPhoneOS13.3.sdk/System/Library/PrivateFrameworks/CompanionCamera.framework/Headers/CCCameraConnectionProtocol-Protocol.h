/*
 Image: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
 */

@protocol CCCameraConnectionProtocol

- (unsigned short)xpc_ensureSwitchedToOneOfSupportedCaptureModes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)takePhotoWithCountdown: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_beginBurstCaptureWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_endBurstCaptureWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_setCaptureMode:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_startCaptureWithMode:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_stopCaptureWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_setPreviewEndpoint: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_setFocusPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_fetchCurrentStateIncludingSupportedCaptureModes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_cancelCountdown;
- (unsigned short)xpc_setZoom:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_setFlashMode: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_setHDRMode: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_setIrisMode: /* Error: Ran out of types for this method. */;
- (unsigned short)xpc_toggleCameraDevice;

@end
