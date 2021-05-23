/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMPerformanceTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMCameraRollTestHarness : CAMPerformanceTestHarness

{
    _Bool _awaitPreload;
    _Bool _testingWarmPresentation;
    _Bool _testingAnimation;
    double _settlingDelay;
    CAMViewfinderViewController *_viewfinderViewController;
}

@property (nonatomic, readonly) _Bool awaitPreload;
@property (nonatomic, readonly) double settlingDelay;
@property (nonatomic, readonly) _Bool testingWarmPresentation;
@property (nonatomic, readonly, getter=isTestingAnimation) _Bool testingAnimation;
@property (nonatomic, readonly) CAMViewfinderViewController *viewfinderViewController;

- (void)startTesting;
- (void)stopTesting;
- (id)initWithTestName:(id)arg1 viewfinderViewController:(id)arg2 testingAnimation:(_Bool)arg3 testingWarmPresentation:(_Bool)arg4 awaitPreload:(_Bool)arg5 settlingDelay:(double)arg6;
- (void)_presentCameraRollAnimated;
- (void)_dismissCameraRollImmediately;
- (void)_handlePUDisplayLinkStarted:(id)arg1;

@end
