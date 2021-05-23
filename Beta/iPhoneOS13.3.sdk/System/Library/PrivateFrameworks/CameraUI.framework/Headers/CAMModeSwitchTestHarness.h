/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMModeSwitchTestHarness : CAMModeAndDeviceConfigurationTestHarness

{
    _Bool _testingAnimation;
    CAMViewfinderViewController *_viewfinderViewController;
    long long _desiredMode;
}

@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;
@property (nonatomic, readonly) long long desiredMode;
@property (nonatomic, readonly, getter=isTestingAnimation) _Bool testingAnimation;

- (void)startTesting;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 mode:(long long)arg3 testingAnimation:(_Bool)arg4;
- (void)_ensureCaptureMode:(long long)arg1 thenPerform:(CDUnknownBlockType)arg2;

@end
