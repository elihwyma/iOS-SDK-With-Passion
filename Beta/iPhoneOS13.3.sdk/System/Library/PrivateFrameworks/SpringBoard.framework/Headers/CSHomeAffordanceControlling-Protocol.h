/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class BSAnimationSettings, UIPanGestureRecognizer;

@protocol UIViewSpringAnimationBehaviorDescribing;

@protocol CSHomeAffordanceControlling <Swift>

@property (nonatomic, readonly) UIPanGestureRecognizer *screenEdgePanGesture;
@property (nonatomic, readonly) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (nonatomic, readonly) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property (nonatomic, readonly) id <UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;

- (unsigned short)registerHomeGestureParticipant:withIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterHomeGestureParticipant:withIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)keyboardAssertionForGestureWindow: /* Error: Ran out of types for this method. */;

@end
