/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UINavigationBarTransitionContext.h>

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext

{
    struct CGRect _endingNewTitleViewFrame;
    struct CGRect _endingNewBackButtonFrame;
    struct CGRect _endingBackIndicatorViewFrame;
    struct CGSize _titleTransitionDistance;
}

- (void)cancel;
- (void)complete;
- (void)animate;
- (void)_prepareContentView;
- (void)prepare;
- (int)transition;
- (void)_animateBackgroundView;
- (id)viewUsingEaseOutCurve;
- (void)_prepareScaleTransition;
- (void)_prepareLargeTitleView;
- (void)_prepareBackgroundView;
- (void)_prepareSearchBar;
- (void)_animateContentView;
- (void)_animateScaleTransition;
- (void)_animateLargeTitleView;
- (void)_animateSearchBar;
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;

@end
