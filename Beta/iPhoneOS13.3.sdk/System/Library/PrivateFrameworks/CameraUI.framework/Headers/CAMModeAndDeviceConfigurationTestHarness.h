/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMPerformanceTestHarness.h>

@class NSMutableArray;

@interface CAMModeAndDeviceConfigurationTestHarness : CAMPerformanceTestHarness

{
    NSMutableArray *__modeChangeListeners;
}

@property (nonatomic, readonly) NSMutableArray *_modeChangeListeners;

- (void)handleWillCloseViewfinderForReason:(long long)arg1;
- (void)handleDidCloseViewfinderForReason:(long long)arg1;
- (void)handleWillOpenViewfinderForReason:(long long)arg1;
- (void)handleDidOpenViewfinderForReason:(long long)arg1;
- (void)handleChangeToMode:(long long)arg1 device:(long long)arg2;
- (id)initWithTestName:(id)arg1;
- (void)registerHandler:(CDUnknownBlockType)arg1 forChangeToMode:(long long)arg2 devicePosition:(long long)arg3;

@end
