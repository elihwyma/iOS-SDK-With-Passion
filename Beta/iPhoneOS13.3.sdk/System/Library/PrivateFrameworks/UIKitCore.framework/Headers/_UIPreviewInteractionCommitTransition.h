/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCommitTransition : NSObject

{
    UIViewController *_viewController;
    UIWindow *_currentCommitEffectWindow;
}

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIWindow *currentCommitEffectWindow;

- (id)initWithPresentedViewController:(id)arg1;
- (_Bool)_shouldReduceMotion;
- (id)_preferredTransitionAnimatorForReducedMotion;
- (id)_preferredTransitionAnimator;
- (void)_applyCommitEffectTransformToView:(id)arg1;
- (void)performTransitionWithPresentationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
