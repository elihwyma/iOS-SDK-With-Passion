/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIWindowAnimationController.h>

__attribute__((visibility("hidden")))
@interface _UIWindowRotationAnimationController : _UIWindowAnimationController

{
    _Bool _skipCallbacks;
    _Bool _updateStatusBarIfNecessary;
    CDUnknownBlockType _animations;
    double _duration;
}

@property (copy, nonatomic) CDUnknownBlockType animations;
@property (nonatomic) double duration;
@property (nonatomic) _Bool skipCallbacks;
@property (nonatomic) _Bool updateStatusBarIfNecessary;

- (void)dealloc;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

@end
