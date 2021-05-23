/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIGestureRecognizer, UIView;

@protocol _UIClickInteractionDriverDelegate;

@protocol _UIClickInteractionDriving <Swift>

@property (weak, nonatomic) id <_UIClickInteractionDriverDelegate> delegate;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) double allowableMovement;
@property (nonatomic) _Bool cancelsTouchesInView;
@property (nonatomic, readonly) UIGestureRecognizer *primaryGestureRecognizer;
@property (nonatomic, readonly) double touchDuration;
@property (nonatomic, readonly) _Bool hasExceededAllowableMovement;
@property (nonatomic, readonly) _Bool isCurrentlyAcceleratedByForce;
@property (nonatomic, readonly) _Bool clicksUpAutomaticallyAfterTimeout;
@property (nonatomic, readonly) double maximumEffectProgress;

+ (unsigned short)requiresForceCapability;
+ (unsigned short)prefersCancelsTouchesInView;

- (unsigned short)cancelInteraction;
- (unsigned short)locationInCoordinateSpace: /* Error: Ran out of types for this method. */;

@end
