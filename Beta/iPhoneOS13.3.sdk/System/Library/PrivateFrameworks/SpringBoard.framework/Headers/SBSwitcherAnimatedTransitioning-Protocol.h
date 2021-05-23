/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class BSAnimationSettings;

@protocol SBSwitcherAnimatedTransitioning <Swift>

@property (nonatomic, readonly) _Bool canInterruptActiveTransition;
@property (copy, nonatomic, readonly) BSAnimationSettings *defaultTransitionAnimationSettings;

- (unsigned short)performTransitionWithContext:animated:alongsideAnimationHandler:completion: /* Error: Ran out of types for this method. */;

@end
