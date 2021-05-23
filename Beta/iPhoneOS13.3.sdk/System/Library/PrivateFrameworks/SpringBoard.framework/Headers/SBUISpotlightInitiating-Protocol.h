/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class SBViewControllerTransitionContext;

@protocol SBUISpotlightInitiating <Swift>

@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext;

- (unsigned short)setDisplayLayoutElementActive: /* Error: Ran out of types for this method. */;
- (unsigned short)resetForSpotlightDismissalAnimated: /* Error: Ran out of types for this method. */;
- (unsigned short)cleanupAfterSpotlightDismissal;
- (unsigned short)spotlightHeaderAcquiringViewController;

@end
