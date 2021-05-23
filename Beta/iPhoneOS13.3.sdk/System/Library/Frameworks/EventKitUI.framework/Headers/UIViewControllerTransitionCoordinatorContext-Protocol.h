/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/Swift-Protocol.h>

@class UIView;

@protocol UIViewControllerTransitionCoordinatorContext <Swift>

@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) _Bool initiallyInteractive;
@property (nonatomic, readonly) _Bool isInterruptible;
@property (nonatomic, readonly, getter=isInteractive) _Bool interactive;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) double transitionDuration;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) double completionVelocity;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) struct CGAffineTransform targetTransform;

- (unsigned short)viewControllerForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)viewForKey: /* Error: Ran out of types for this method. */;

@end
