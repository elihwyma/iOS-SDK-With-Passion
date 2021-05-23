/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIWindowAnimationController.h>

__attribute__((visibility("hidden")))
@interface _UIHostedWindowAnimationController : _UIWindowAnimationController

{
    CDUnknownBlockType _transitionActions;
    double _duration;
}

@property (copy, nonatomic) CDUnknownBlockType transitionActions;
@property (nonatomic) double duration;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

@end
