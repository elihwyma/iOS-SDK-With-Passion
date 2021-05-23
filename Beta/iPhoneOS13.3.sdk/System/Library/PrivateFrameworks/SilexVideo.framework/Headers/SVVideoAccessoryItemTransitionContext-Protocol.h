/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@class UIView;

@protocol SVVideoAccessoryItemTransitionContext <Swift>

@property (nonatomic, readonly) UIView *fromView;
@property (nonatomic, readonly) UIView *toView;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) _Bool transitionWasCancelled;

- (unsigned short)completeTransition: /* Error: Ran out of types for this method. */;

@end
