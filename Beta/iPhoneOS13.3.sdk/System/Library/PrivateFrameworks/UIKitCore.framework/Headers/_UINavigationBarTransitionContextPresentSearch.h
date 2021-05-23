/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UINavigationBarTransitionContext.h>

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPresentSearch : _UINavigationBarTransitionContext

- (void)cancel;
- (void)complete;
- (void)animate;
- (void)prepare;
- (int)transition;
- (void)_animateBackgroundView;
- (void)_resetContentAndLargeTitleViewCompleted:(_Bool)arg1;
- (void)_prepareBackgroundView;

@end
