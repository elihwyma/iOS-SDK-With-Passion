/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLPUAnimationGroup.h>

__attribute__((visibility("hidden")))
@interface QLPUTimedAnimationGroup : QLPUAnimationGroup

{
    _Bool _areAnimationsPaused;
    double _pausedElapsedTime;
    double _beginTime;
}

@property (nonatomic) double beginTime;
@property (nonatomic, readonly) double currentTime;

- (id)init;
- (void)_update;
- (double)elapsedTime;
- (void)setElapsedTime:(double)arg1;
- (void)updateAnimations;
- (void)pauseAnimations;
- (void)resumeAnimations;

@end
