/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKAnimation.h>

@interface VKTimedAnimation : VKAnimation

{
    CDUnknownBlockType _stepHandler;
    CDUnknownBlockType _timingFunction;
    double _duration;
    double _startTimestamp;
    double _lastTimestamp;
    _Bool _resuming;
    _Bool _startTimestampSet;
}

@property (copy, nonatomic) CDUnknownBlockType timingFunction;
@property (copy, nonatomic) CDUnknownBlockType stepHandler;

+ (void)setDragCoefficientGetter:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)pause;
- (void)resume;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (id)initWithDuration:(double)arg1;
- (id)initWithDuration:(double)arg1 name:(id)arg2;
- (void)onTimerFired:(double)arg1;
- (_Bool)timed;
- (id)initWithDuration:(double)arg1 priority:(long long)arg2 name:(id)arg3;

@end
