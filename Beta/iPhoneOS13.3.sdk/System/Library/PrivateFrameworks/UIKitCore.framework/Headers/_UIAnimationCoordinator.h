/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, UIPercentDrivenInteractiveTransition, UIView, UIViewController, _UIViewControllerOneToOneTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIAnimationCoordinator : NSObject <Swift>

{
    NSMutableDictionary *_stash;
    _UIViewControllerOneToOneTransitionContext *_transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    double _duration;
    CDUnknownBlockType _preperation;
    CDUnknownBlockType _animator;
    CDUnknownBlockType _completion;
    UIView *_containerView;
    UIViewController *_viewController;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
}

@property (retain, nonatomic, readonly) _UIViewControllerOneToOneTransitionContext *transitionContext;
@property (nonatomic) double duration;
@property (copy, nonatomic) CDUnknownBlockType preperation;
@property (copy, nonatomic) CDUnknownBlockType animator;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) struct CGRect startFrame;
@property (nonatomic) struct CGRect endFrame;
@property (retain, nonatomic, readonly) NSMutableDictionary *stash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animate;
- (void)animateInteractively;
- (void)finishInteractiveAnimation;
- (void)cancelInteractiveAnimation;
- (void)updateInteractiveProgress:(double)arg1;
- (void)_updateTransitionContext;

@end
