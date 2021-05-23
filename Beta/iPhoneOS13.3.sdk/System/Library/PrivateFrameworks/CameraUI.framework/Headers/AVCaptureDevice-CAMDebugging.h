/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <AVFoundation/AVCaptureDevice.h>

@class AVCaptureDeviceFormat;

@interface AVCaptureDevice (CAMDebugging)

@property (nonatomic, readonly) AVCaptureDeviceFormat *cam_formatForPortraitFrontFacingZoomed;

- (id)cameraVideoFormatForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2;
- (id)cameraVideoPresetForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2;
- (id)cameraPanoramaFormatForConfiguration:(id)arg1;
- (void)cam_debugFocusState;
- (void)cam_debugExposureState;
- (void)cam_debugFocusAndExposureState;
- (id)cam_highestQualityFormatForConfiguration:(long long)arg1 colorSpace:(long long)arg2;

@end
