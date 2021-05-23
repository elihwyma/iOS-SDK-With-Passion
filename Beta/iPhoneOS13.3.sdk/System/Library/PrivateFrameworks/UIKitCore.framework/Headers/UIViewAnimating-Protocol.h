/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol UIViewAnimating <Swift>

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, getter=isReversed) _Bool reversed;
@property (nonatomic) double fractionComplete;

- (unsigned short)stopAnimation: /* Error: Ran out of types for this method. */;
- (unsigned short)finishAnimationAtPosition: /* Error: Ran out of types for this method. */;
- (unsigned short)startAnimation;
- (unsigned short)startAnimationAfterDelay: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseAnimation;

@end
