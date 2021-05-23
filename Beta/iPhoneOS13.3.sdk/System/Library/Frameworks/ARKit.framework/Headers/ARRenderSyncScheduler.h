/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARDisplayLink, ARRollingNumberSeries, NSMutableArray;

@interface ARRenderSyncScheduler : NSObject

{
    ARDisplayLink *_displayLink;
    ARRollingNumberSeries *_latencies;
    NSMutableArray *_blocks;
    struct os_unfair_lock_s _lock;
    _Bool _initialLatencyReached;
    _Bool _reportAdjustments;
    _Bool _schedulingActive;
    double _inputJitterBufferInterval;
    unsigned long long _excessiveCallbackOptions;
}

@property double inputJitterBufferInterval;
@property long long expectedFramesPerSecond;
@property double vsyncOffset;
@property _Bool schedulingActive;
@property unsigned long long excessiveCallbackOptions;

- (id)init;
- (void)_callback;
- (id)initWithExpectedFramesPerSecond:(long long)arg1;
- (void)_tryNextBlockWithTotalTried:(unsigned long long)arg1;
- (unsigned long long)_callbackActionForBlockWithLatency:(double)arg1;
- (void)submitBlock:(CDUnknownBlockType)arg1;

@end
