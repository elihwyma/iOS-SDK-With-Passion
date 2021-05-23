/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <OpusFoundation/Swift-Protocol.h>

@protocol OFViewControllerTransitioningContext <Swift>

@property (nonatomic) double progressVelocity;

- (unsigned short)progress;
- (unsigned short)wasCancelled;
- (unsigned short)containerView;
- (unsigned short)isInteractive;
- (unsigned short)completeTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)updateInteractiveTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)startInteractiveTransition;
- (unsigned short)fromViewController;
- (unsigned short)toViewController;
- (unsigned short)initiallyInteractive;
- (unsigned short)isCompleting;
- (unsigned short)isRubberBanding;
- (unsigned short)finishInteractiveTransitionWithVelocity: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelInteractiveTransitionWithVelocity: /* Error: Ran out of types for this method. */;
- (unsigned short)updateNonInteractiveTransitionWithProgress: /* Error: Ran out of types for this method. */;
- (unsigned short)doEaseIn;
- (unsigned short)doEaseOut;
- (unsigned short)makeTransitionInteractiveWithInteractor:andProgress: /* Error: Ran out of types for this method. */;

@end
