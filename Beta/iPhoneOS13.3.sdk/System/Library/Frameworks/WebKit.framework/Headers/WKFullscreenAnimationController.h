/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface WKFullscreenAnimationController : NSObject

{
    struct CGRect _initialMaskViewBounds;
    struct CGRect _finalMaskViewBounds;
    struct CGAffineTransform _initialAnimatingViewTransform;
    struct CGAffineTransform _finalAnimatingViewTransform;
    struct CGPoint _initialMaskViewCenter;
    struct CGPoint _finalMaskViewCenter;
    struct RetainPtr<UIView> _maskView;
    struct RetainPtr<UIView> _animatingView;
    struct RetainPtr<id<UIViewControllerContextTransitioning>> _context;
    double _initialBackgroundAlpha;
    double _finalBackgroundAlpha;
    _Bool _animatingIn;
    UIViewController *_viewController;
    struct CGRect _initialFrame;
    struct CGRect _finalFrame;
}

@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) struct CGRect initialFrame;
@property (nonatomic) struct CGRect finalFrame;
@property (nonatomic, getter=isAnimatingIn) _Bool animatingIn;
@property (nonatomic, readonly) id <UIViewControllerContextTransitioning> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (void)dealloc;
- (id).cxx_construct;
- (void)end:(_Bool)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)updateWithProgress:(double)arg1;
- (void)configureInitialAndFinalStatesForTransition:(id)arg1;
- (void)_createViewsForTransitionContext:(id)arg1;
- (void)updateWithProgress:(double)arg1 scale:(double)arg2 translation:(struct CGSize)arg3 anchor:(struct CGPoint)arg4;
- (void)updateWithProgress:(double)arg1 translation:(struct CGSize)arg2 anchor:(struct CGPoint)arg3;

@end
