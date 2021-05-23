/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISceneLifecycleMonitor.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor

{
    NSNumber *_transitioningState;
    _Bool _transitioning;
    _Bool _connected;
}

- (id)initWithScene:(id)arg1;
- (long long)currentActivationState;
- (void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(CDUnknownBlockType)arg4;
- (void)willBecomeActive;
- (void)didEnterBackground;
- (id)_windowScene;

@end
