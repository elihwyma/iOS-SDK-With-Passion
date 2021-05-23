/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIView;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <Swift>

{
    id <UIViewControllerContextTransitioning> _transitionContext;
    _Bool _removeFromView;
    int _transition;
    id _delegate;
    UIView *_toView;
    UIView *_fromView;
}

@property (weak, nonatomic) id delegate;
@property (weak, nonatomic) UIView *toView;
@property (weak, nonatomic) UIView *fromView;
@property (nonatomic) _Bool removeFromView;
@property (nonatomic) int transition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithTransition:(int)arg1;
- (double)durationForTransition:(int)arg1;
- (void)transitionViewDidStart:(id)arg1;
- (_Bool)transitionViewShouldUseViewControllerCallbacks;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (struct CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (struct CGPoint)_adjustOrigin:(struct CGPoint)arg1 givenOtherOrigin:(struct CGPoint)arg2 forTransition:(int)arg3;
- (struct CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (struct CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(_Bool)arg4;

@end
