/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKAnimation.h>

@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

{
    CDUnknownBlockType _groupStepHandler;
    NSMutableArray *_animations;
}

@property (nonatomic, readonly) NSMutableArray *animations;
@property (copy, nonatomic) CDUnknownBlockType groupStepHandler;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (double)duration;
- (_Bool)running;
- (void)setDuration:(double)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (id)initWithAnimations:(id)arg1;
- (void)setRunsForever:(_Bool)arg1;
- (void)onTimerFired:(double)arg1;
- (void)startWithRunner:(id)arg1;
- (_Bool)runsForever;
- (_Bool)timed;

@end
