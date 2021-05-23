/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICurrentContextPresentationController.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController

{
    UIView *_counterRotatedView;
    double _counterRotatedAngle;
    struct CGRect _counterRotatedOriginalBounds;
    long long _originalOrientation;
    _Bool _presentingViewControllerHandledCounterRotation;
    CDUnknownBlockType finalRotationBlock;
}

- (void)dealloc;
- (long long)presentationStyle;
- (_Bool)shouldPresentInFullscreen;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)_setPresentedViewController:(id)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (_Bool)_inheritsPresentingViewControllerThemeLevel;
- (void)_removeCounterRotation;
- (_Bool)_invokesDelegatesOnOrientationChange;
- (void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(_Bool)arg5;

@end
