/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAnimationGroup.h>

__attribute__((visibility("hidden")))
@interface PUTimedAnimationGroup : PUAnimationGroup

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
