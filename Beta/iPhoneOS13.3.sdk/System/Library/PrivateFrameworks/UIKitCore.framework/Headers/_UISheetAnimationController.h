/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIView, UIViewPropertyAnimator;

@protocol UIViewControllerContextTransitioning;

@interface _UISheetAnimationController : NSObject <Swift>

{
    _Bool _isReversed;
    _Bool _isInInitialLayout;
    _Bool _scalesDownForwardView;
    CDUnknownBlockType _noninteractiveAnimations;
    CDUnknownBlockType _noninteractiveCompletion;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIView *_forwardView;
    UIViewPropertyAnimator *_propertyAnimator;
    struct CGPoint _offset;
    struct CGPoint _attachmentPoint;
    struct CGRect _sourceFrame;
    struct CGRect _forwardViewFullFrame;
}

@property (weak, nonatomic) id <UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic, readonly) _Bool isForward;
@property (retain, nonatomic) UIView *forwardView;
@property (nonatomic) struct CGRect forwardViewFullFrame;
@property (nonatomic) _Bool isInInitialLayout;
@property (retain, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (nonatomic) _Bool scalesDownForwardView;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) struct CGPoint attachmentPoint;
@property (nonatomic) _Bool isReversed;
@property (nonatomic) struct CGRect sourceFrame;
@property (copy, nonatomic) CDUnknownBlockType noninteractiveAnimations;
@property (copy, nonatomic) CDUnknownBlockType noninteractiveCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)layoutTransitionViews;
- (void)runNoninteractiveAnimationsIfPossible;
- (_Bool)_allowKeyboardToAnimateAlongside:(id)arg1;

@end
