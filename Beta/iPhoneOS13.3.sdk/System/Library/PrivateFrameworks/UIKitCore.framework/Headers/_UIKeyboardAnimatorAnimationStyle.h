/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewAnimationStyle.h>

@class _UIKeyboardAnimator;

@protocol UIInputViewAnimationHost;

__attribute__((visibility("hidden")))
@interface _UIKeyboardAnimatorAnimationStyle : UIInputViewAnimationStyle

{
    _UIKeyboardAnimator *_animator;
    id <UIInputViewAnimationHost> _currentHost;
    _Bool _currentFromPosition;
}

+ (id)animationStyleWithAnimator:(id)arg1;

- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (void)defaultLaunchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
