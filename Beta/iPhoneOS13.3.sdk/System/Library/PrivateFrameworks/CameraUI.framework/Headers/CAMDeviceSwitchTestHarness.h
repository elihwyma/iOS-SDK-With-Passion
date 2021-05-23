/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness

{
    _Bool _testingAnimation;
    CAMViewfinderViewController *_viewfinderViewController;
    long long _desiredDevicePosition;
    long long _startingCaptureMode;
}

@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;
@property (nonatomic, readonly) long long desiredDevicePosition;
@property (nonatomic, readonly) long long startingCaptureMode;
@property (nonatomic, readonly, getter=isTestingAnimation) _Bool testingAnimation;

- (void)startTesting;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 devicePosition:(long long)arg3 testingAnimation:(_Bool)arg4 startingCaptureMode:(long long)arg5;
- (void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(CDUnknownBlockType)arg3;

@end
