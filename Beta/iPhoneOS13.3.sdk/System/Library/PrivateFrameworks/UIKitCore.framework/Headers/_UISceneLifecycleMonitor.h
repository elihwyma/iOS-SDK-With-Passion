/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneLifecycleMonitor : NSObject

{
    UIScene *__scene;
}

@property (weak, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) long long currentActivationState;

- (id)initWithScene:(id)arg1;
- (void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(CDUnknownBlockType)arg4;
- (void)willConnect;
- (void)didConnect;
- (void)willBecomeActive;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)didResignActive;
- (void)willEnterForeground;
- (void)didEnterForeground;
- (void)willEnterBackground;
- (void)didEnterBackground;
- (void)willDisonnect;
- (void)didDisonnect;

@end
