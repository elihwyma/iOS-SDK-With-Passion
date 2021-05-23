/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <AVFoundation/AVCapturePhotoSettings.h>

@interface AVCapturePhotoSettings (CAMCaptureEngine)

+ (id)cam_settingsWithMomentSettings:(id)arg1 request:(id)arg2;
+ (id)cam_settingsWithRequest:(id)arg1;

- (void)_configureForRequest:(id)arg1 shouldIgnoreInitiationSettingsProperties:(_Bool)arg2;

@end
