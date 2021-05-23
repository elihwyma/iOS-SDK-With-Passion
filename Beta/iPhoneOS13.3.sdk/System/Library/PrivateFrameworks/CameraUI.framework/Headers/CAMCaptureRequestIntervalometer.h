/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMCaptureRequest, CAMPreciseTimer;

@protocol CAMCaptureRequestIntervalometerDelegate;

@interface CAMCaptureRequestIntervalometer : NSObject

{
    CAMCaptureRequest *_prototypeRequest;
    id <CAMCaptureRequestIntervalometerDelegate> _delegate;
    double _interval;
    double _delay;
    long long _maximumCount;
    long long _remaining;
    CAMPreciseTimer *__timer;
}

@property (nonatomic) long long remaining;
@property (nonatomic, readonly) CAMPreciseTimer *_timer;
@property (copy, nonatomic) CAMCaptureRequest *prototypeRequest;
@property (weak, nonatomic, readonly) id <CAMCaptureRequestIntervalometerDelegate> delegate;
@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) long long maximumCount;

- (id)init;
- (id)initWithDelegate:(id)arg1 interval:(double)arg2 delay:(double)arg3 maximumCount:(long long)arg4;
- (void)startGeneratingRequests;
- (void)manuallyGenerateRequest;
- (void)stopGeneratingRequests;
- (void)_generateRequestForDelegate;

@end
