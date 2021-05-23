/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVFullScreenViewController, AVPresentationContainerView, AVPresentationContextTransition, AVPresentationController, UIView, UIViewController, UIWindow;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface AVPresentationContext : NSObject

{
    _Bool _allowsSecondWindowPresentations;
    _Bool _allowsPausingWhenTransitionCompletes;
    UIView *_sourceView;
    UIView *_touchBlockingView;
    UIView *_backgroundView;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIWindow *_rotatableSecondWindow;
    AVFullScreenViewController *_avFullScreenViewController;
    AVPresentationContextTransition *_presentingTransition;
    AVPresentationContextTransition *_dismissingTransition;
    AVPresentationController *_presentationController;
}

@property (weak, nonatomic, readonly) AVPresentationController *presentationController;
@property (nonatomic, readonly) long long transitionType;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic, readonly) AVPresentationContainerView *presentedView;
@property (weak, nonatomic, readonly) UIView *containerView;
@property (weak, nonatomic, readonly) UIWindow *presentationWindow;
@property (nonatomic, readonly) UIView *touchBlockingView;
@property (nonatomic, readonly) UIView *backgroundView;
@property (weak, nonatomic, readonly) UIViewController *presentedViewController;
@property (weak, nonatomic) id <UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) _Bool allowsSecondWindowPresentations;
@property (retain, nonatomic) UIWindow *rotatableSecondWindow;
@property (weak, nonatomic, readonly) AVFullScreenViewController *avFullScreenViewController;
@property (weak, nonatomic, readonly) AVFullScreenViewController *rotatableWindowViewController;
@property (retain, nonatomic) AVPresentationContextTransition *presentingTransition;
@property (retain, nonatomic) AVPresentationContextTransition *dismissingTransition;
@property (nonatomic, readonly) AVPresentationContextTransition *currentTransition;
@property (nonatomic, readonly) _Bool hasActiveTransition;
@property (nonatomic, readonly, getter=isPresenting) _Bool presenting;
@property (nonatomic, readonly, getter=isDismissing) _Bool dismissing;
@property (nonatomic, readonly) _Bool wasInitiallyInteractive;
@property (nonatomic, readonly) _Bool canBeInteractivelyDismissed;
@property (nonatomic) _Bool allowsPausingWhenTransitionCompletes;

+ (_Bool)supportsInteractiveCounterRotationDismissals;

- (id)initWithPresentationController:(id)arg1;
- (id)presentingView;
- (id)presentationFromView;
- (id)dismissalToView;

@end
