/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMPerformanceTestHarness.h>

@class CAMCaptureRequestIntervalometer, CUCaptureController, NSMutableDictionary, NSNumber, NSString;

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness

{
    CUCaptureController *_captureController;
    _Bool _performWarmupCapture;
    _Bool _hasOutstandingCapture;
    _Bool _nextCaptureIsMyLast;
    NSMutableDictionary *_numberOfResponsesForRequest;
    NSNumber *_expectedNumberOfResponsesPerRequest;
    CAMCaptureRequestIntervalometer *_testIntervalometer;
}

@property (retain, nonatomic) CAMCaptureRequestIntervalometer *testIntervalometer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)harnessWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(id)arg2 captureController:(id)arg3 performingWarmupCapture:(_Bool)arg4;

- (void)startTesting;
- (void)stopTesting;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)failedTestwithReason:(id)arg1;
- (_Bool)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (void)intervalometerDidReachMaximumCount:(id)arg1;
- (id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(id)arg2 captureController:(id)arg3 performingWarmupCapture:(_Bool)arg4;
- (_Bool)_hasReceivedExpectedNumberOfResponsesForRequests;

@end
