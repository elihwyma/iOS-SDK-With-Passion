/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIView;

@protocol _UIDragInteractionDriverDelegate;

@protocol _UIDragInteractionDriving <Swift>

@property (weak, nonatomic) id <_UIDragInteractionDriverDelegate> delegate;
@property (weak, nonatomic) UIView *view;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) double liftDelay;
@property (nonatomic) double liftMoveHysteresis;
@property (nonatomic) _Bool additionalTouchesCancelLift;
@property (nonatomic) _Bool competingLongPressOnLift;
@property (nonatomic) _Bool allowsSimultaneousRecognitionDuringLift;
@property (nonatomic) double cancellationDelay;
@property (nonatomic) double competingLongPressDelay;
@property (nonatomic) _Bool cancellationTimerEnabled;
@property (nonatomic, getter=isAcceleratedDragGestureEnabled) _Bool acceleratedDragGestureEnabled;
@property (nonatomic) _Bool automaticallyAddsFailureRelationships;
@property (copy, nonatomic) NSArray *allowedTouchTypes;
@property (nonatomic, readonly) struct CGPoint initialLocationInWindow;
@property (nonatomic, readonly) _Bool shouldAnimateLift;

- (unsigned short)cancel;
- (unsigned short)isGestureRecognizerForDragInitiation: /* Error: Ran out of types for this method. */;

@end
