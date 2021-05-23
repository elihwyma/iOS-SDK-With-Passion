/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

@class MXMSampleFilter;

@protocol MXMProbeDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface MXMProbe : NSObject

{
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _stopHandler;
    NSObject<OS_dispatch_semaphore> *_stopWaiter;
    _Bool __updating;
    _Bool __shouldStop;
    MXMSampleFilter *_filter;
    NSObject<OS_dispatch_queue> *_updateQueue;
    id <MXMProbeDelegate> _delegate;
}

@property _Bool _updating;
@property _Bool _shouldStop;
@property (copy, nonatomic) MXMSampleFilter *filter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (weak, nonatomic) id <MXMProbeDelegate> delegate;
@property (readonly) _Bool updating;

+ (id)probe;

- (id)init;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (void)stopUpdates;
- (_Bool)performPreIterationActions;
- (void)updateNowUntilStoppedWithUpdateHandler:(CDUnknownBlockType)arg1 stopHandler:(CDUnknownBlockType)arg2;
- (id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long *)arg2;
- (void)_handleIncomingData:(id)arg1;
- (id)sampleWithTimeout:(double)arg1;
- (void)updateNowUntilStopped;
- (void)updateNowUntilTimeout:(double)arg1;
- (_Bool)waitUntilStoppedWithTimeout:(double)arg1;
- (void)updateNowUntilTimeout:(double)arg1 updateHandler:(CDUnknownBlockType)arg2 stopHandler:(CDUnknownBlockType)arg3;
- (_Bool)_setupWaitSemaphore;
- (void)updateNowUntilStoppedWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)updateNowUntilTimeout:(double)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)waitForeverUntilStopped;

@end
