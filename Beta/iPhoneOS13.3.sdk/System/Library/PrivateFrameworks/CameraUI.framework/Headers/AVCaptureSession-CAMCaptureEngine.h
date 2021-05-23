/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <AVFoundation/AVCaptureSession.h>

@interface AVCaptureSession (CAMCaptureEngine)

- (void)cam_removeInputs:(id)arg1;
- (_Bool)cam_ensureInputs:(id)arg1;
- (_Bool)cam_ensureOutputs:(id)arg1 whileRemoving:(id)arg2;
- (_Bool)cam_ensureInputs:(id)arg1 exclusively:(_Bool)arg2;
- (_Bool)cam_hasAddedInput:(id)arg1;
- (void)cam_removeAllInputs;
- (_Bool)cam_hasAddedOutput:(id)arg1;
- (_Bool)cam_ensureOutputs:(id)arg1 exclusively:(_Bool)arg2;
- (void)cam_removeAllOutputs;

@end
