/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITransitionView, UIViewController, UIWindow;

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface UIWindowController : NSObject

{
    UITransitionView *_transitionView;
    UIWindow *_window;
    int _currentTransition;
    id _target;
    SEL _didEndSelector;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    struct CGPoint _beginOriginForToView;
    struct CGPoint _endOriginForToView;
    _Bool _presenting;
    long long _toModalStyle;
    _Bool _needsDidAppear;
    _Bool _needsDidDisappear;
    _Bool __interactiveTransition;
    id <UIViewControllerAnimatedTransitioning> _transitionController;
    id <UIViewControllerInteractiveTransitioning> _interactionController;
}

@property (weak, nonatomic) UIWindow *window;
@property (nonatomic, readonly) UITransitionView *transitionView;
@property (nonatomic) _Bool presenting;
@property (retain, nonatomic, setter=_setTransitionController:) id <UIViewControllerAnimatedTransitioning> _transitionController;
@property (retain, nonatomic, setter=_setInteractionController:) id <UIViewControllerInteractiveTransitioning> _interactionController;
@property (nonatomic, getter=_isInteractiveTransition, setter=_setInteractiveTransition:) _Bool _interactiveTransition;

+ (id)windowControllerForWindow:(id)arg1;
+ (void)windowWillBeDeallocated:(id)arg1;

- (void)dealloc;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)durationForTransition:(int)arg1;
- (void)transitionViewDidStart:(id)arg1;
- (void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 animation:(CDUnknownBlockType)arg6;
- (_Bool)transitionViewShouldUseViewControllerCallbacks;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (struct CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (struct CGPoint)_adjustOrigin:(struct CGPoint)arg1 givenOtherOrigin:(struct CGPoint)arg2 forTransition:(int)arg3;
- (struct CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (struct CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(_Bool)arg4;
- (struct CGSize)_flipSize:(struct CGSize)arg1;
- (struct CGPoint)_originForViewController:(id)arg1 orientation:(long long)arg2 actualStatusBarHeight:(double)arg3 fullScreenLayout:(_Bool)arg4 inWindow:(id)arg5;
- (struct CGRect)_boundsForViewController:(id)arg1 transition:(int)arg2 orientation:(long long)arg3 fullScreenLayout:(_Bool)arg4 inWindow:(id)arg5;
- (void)transitionViewDidCancel:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;

@end
