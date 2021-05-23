/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer;

@interface CAMIdleController : NSObject

{
    _Bool _updatingIdleTimer;
    NSTimer *_enableIdleTimer;
}

@property (nonatomic, getter=isUpdatingIdleTimer, setter=_setUpdatingIdleTimer:) _Bool updatingIdleTimer;
@property (nonatomic, readonly, getter=_isIdleTimerIndefinitelyDisabled) _Bool idleTimerIndefinitelyDisabled;
@property (retain, nonatomic, getter=_enableIdleTimer, setter=_setEnableIdleTimer:) NSTimer *enableIdleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_immediatelyEnableApplicationIdleTimer;
- (void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)arg1;
- (void)_indefinitelyDisableApplicationIdleTimer;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_teardownEnableIdleTimer;
- (void)stillImageRequestDidStopCapturingStillImage:(id)arg1;
- (void)videoRequestDidStartCapturing:(id)arg1;
- (void)videoRequestDidStopCapturing:(id)arg1;
- (void)panoramaRequestDidStartCapturing:(id)arg1;
- (void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(_Bool)arg2;
- (void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(_Bool)arg1;
- (void)stillImageRequestsDidStopCapturingCTMVideo;
- (void)startUpdatingIdleTimer;
- (void)stopUpdatingIdleTimer;
- (void)timelapseRequestDidStartCapturing;
- (void)timelapseRequestDidResumeCapturing;
- (void)timelapseRequestDidStopCapturing;

@end
