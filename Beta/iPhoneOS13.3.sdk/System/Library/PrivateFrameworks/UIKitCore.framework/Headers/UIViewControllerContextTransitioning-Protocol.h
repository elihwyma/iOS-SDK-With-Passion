/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIView;

@protocol UIViewControllerContextTransitioning <Swift>

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (nonatomic, readonly) _Bool transitionWasCancelled;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) struct CGAffineTransform targetTransform;

- (unsigned short)viewControllerForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)completeTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelInteractiveTransition;
- (unsigned short)finishInteractiveTransition;
- (unsigned short)updateInteractiveTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)viewForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseInteractiveTransition;
- (unsigned short)finalFrameForViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)initialFrameForViewController: /* Error: Ran out of types for this method. */;

@end
