//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMPanoramaCaptureRequestDelegate-Protocol.h>
#import <CameraUI/CAMStillImageCaptureRequestDelegate-Protocol.h>
#import <CameraUI/CAMStillImageCapturingVideoDelegate-Protocol.h>
#import <CameraUI/CAMVideoCaptureRequestDelegate-Protocol.h>

@class NSTimer;

@interface CAMIdleController : NSObject <CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate>
{
    BOOL _updatingIdleTimer;
    NSTimer *_enableIdleTimer;
}

@property(retain, nonatomic, getter=_enableIdleTimer, setter=_setEnableIdleTimer:) NSTimer *enableIdleTimer; // @synthesize enableIdleTimer=_enableIdleTimer;
@property(nonatomic, getter=isUpdatingIdleTimer, setter=_setUpdatingIdleTimer:) BOOL updatingIdleTimer; // @synthesize updatingIdleTimer=_updatingIdleTimer;
// - (void).cxx_destruct;
- (void)_indefinitelyDisableApplicationIdleTimer;
- (void)_immediatelyEnableApplicationIdleTimer;
- (void)_teardownEnableIdleTimer;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)arg1;
- (void)timelapseRequestDidStopCapturing;
- (void)timelapseRequestDidResumeCapturing;
- (void)timelapseRequestDidStartCapturing;
- (void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2;
- (void)panoramaRequestDidStartCapturing:(id)arg1;
- (void)stillImageRequestsDidStopCapturingCTMVideo;
- (void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg1;
- (void)videoRequestDidStopCapturing:(id)arg1;
- (void)videoRequestDidStartCapturing:(id)arg1;
- (void)stillImageRequestDidStopCapturingStillImage:(id)arg1;
- (void)stopUpdatingIdleTimer;
- (void)startUpdatingIdleTimer;
@property(readonly, nonatomic, getter=_isIdleTimerIndefinitelyDisabled) BOOL idleTimerIndefinitelyDisabled;
- (void)dealloc;
- (id)init;

@end

