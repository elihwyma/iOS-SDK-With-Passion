/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIViewControllerTransitionContext.h>

@class UIView, UIViewController;

@interface _UIViewControllerOneToOneTransitionContext : _UIViewControllerTransitionContext

{
    _Bool _isToViewSet;
    _Bool _isFromViewSet;
    UIView *_toView;
    UIView *_fromView;
    _Bool __isDeferred;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    struct CGRect _fromStartFrame;
    struct CGRect _fromEndFrame;
    struct CGRect _toEndFrame;
    struct CGRect _toStartFrame;
}

@property (retain, nonatomic, setter=_setFromViewController:) UIViewController *fromViewController;
@property (retain, nonatomic, setter=_setToViewController:) UIViewController *toViewController;
@property (retain, nonatomic, getter=_fromView, setter=_setFromView:) UIView *fromView;
@property (retain, nonatomic, getter=_toView, setter=_setToView:) UIView *toView;
@property (nonatomic, setter=_setFromStartFrame:) struct CGRect fromStartFrame;
@property (nonatomic, setter=_setFromEndFrame:) struct CGRect fromEndFrame;
@property (nonatomic, setter=_setToEndFrame:) struct CGRect toEndFrame;
@property (nonatomic, setter=_setToStartFrame:) struct CGRect toStartFrame;
@property (nonatomic, setter=_setIsDeferred:) _Bool _isDeferred;

- (void)dealloc;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;

@end
