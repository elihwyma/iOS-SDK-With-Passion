/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <AVFoundation/AVCaptureDeviceFormat.h>

@interface AVCaptureDeviceFormat (CAMCaptureEngine)

@property (nonatomic, readonly) _Bool cam_supportsPortraitFrontFacingZoomed;

- (_Bool)cam_supportsPanoramaConfiguration:(id)arg1;
- (CDStruct_1b6d18a9)cam_frameDurationForVideoConfiguration:(long long)arg1;
- (_Bool)cam_supportsFrameDuration:(CDStruct_1b6d18a9)arg1;
- (_Bool)cam_supportsVideoConfiguration:(long long)arg1 colorSpace:(long long)arg2;
- (long long)cam_compareUsingQuality:(id)arg1;
- (double)cam_frameRateForVideoConfiguration:(long long)arg1;
- (CDStruct_79c71658)_expectedVideoDimensionsForVideoConfiguration:(long long)arg1;
- (_Bool)cam_supportsFrameRate:(double)arg1 width:(long long)arg2 height:(long long)arg3 colorSpace:(long long)arg4;
- (_Bool)cam_supportsFrameRate:(double)arg1;
- (long long)cam_compareUsingBinning:(id)arg1;
- (long long)cam_compareUsingMaximumFramerate:(id)arg1;
- (double)cam_maximumFrameRate;
- (long long)cam_compareUsingDimensions:(id)arg1;

@end
