/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/Swift-Protocol.h>

@class UIPanGestureRecognizer;

@protocol AVTransitionDriverDelegate;

@protocol AVTransitionDriver <Swift>

@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (weak, nonatomic) id <AVTransitionDriverDelegate> transitionDriverDelegate;
@property (nonatomic, readonly) long long transitionInteraction;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) double rotationVelocity;
@property (nonatomic, readonly) double pinchScale;
@property (nonatomic, readonly) double pinchVelocity;
@property (nonatomic, readonly) _Bool lastNonZeroVelocityWasDownward;
@property (weak, nonatomic) UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer;

- (unsigned short)locationInWindow;
- (unsigned short)translationInWindow;
- (unsigned short)velocityInWindow;
- (unsigned short)angleOfVelocityInWindow;
- (unsigned short)transitionDriver:shouldRequireFailureOfGestureRecognizer: /* Error: Ran out of types for this method. */;

@end
