/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKAnimation.h>

@interface VKDynamicAnimation : VKAnimation

{
    CDUnknownBlockType _dynamicStepHandler;
    double _lastTimestamp;
    _Bool _resuming;
}

@property (copy, nonatomic) CDUnknownBlockType dynamicStepHandler;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stopAnimation:(_Bool)arg1;
- (void)setRunsForever:(_Bool)arg1;
- (void)onTimerFired:(double)arg1;
- (_Bool)runsForever;

@end
