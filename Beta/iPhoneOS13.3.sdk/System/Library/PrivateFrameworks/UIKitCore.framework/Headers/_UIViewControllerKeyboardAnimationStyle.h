/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInputViewAnimationStyleDirectional.h>

@class _UIViewControllerKeyboardAnimationStyleInfo, _UIViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional

{
    _Bool _disableAlongsideView;
    _Bool _allowCustomTransition;
    _UIViewControllerTransitionContext *_context;
    _UIViewControllerKeyboardAnimationStyleInfo *_info;
}

@property (nonatomic, readonly) _UIViewControllerKeyboardAnimationStyleInfo *info;
@property (nonatomic) _Bool allowCustomTransition;
@property (retain, nonatomic) _UIViewControllerTransitionContext *context;
@property (nonatomic) _Bool disableAlongsideView;

+ (id)animationStyleWithContext:(id)arg1 useCustomTransition:(_Bool)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1;
- (void)_launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (_Bool)isAnimationCompleted;
- (_Bool)canDismissWithScrollView;

@end
