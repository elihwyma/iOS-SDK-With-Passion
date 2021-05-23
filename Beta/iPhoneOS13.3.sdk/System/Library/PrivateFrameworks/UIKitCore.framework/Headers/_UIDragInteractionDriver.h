/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIView, _UIDragInteractionDriverStateMachine;

@protocol _UIDragInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionDriver : NSObject

{
    _Bool _enabled;
    _Bool _additionalTouchesCancelLift;
    _Bool _acceleratedDragGestureEnabled;
    _Bool _allowsSimultaneousRecognitionDuringLift;
    _Bool _shouldAnimateLift;
    _Bool _cancellationTimerEnabled;
    _Bool _competingLongPressOnLift;
    _Bool _automaticallyAddsFailureRelationships;
    id <_UIDragInteractionDriverDelegate> _delegate;
    UIView *_view;
    double _liftDelay;
    double _cancellationDelay;
    double _competingLongPressDelay;
    double _liftMoveHysteresis;
    NSArray *_allowedTouchTypes;
    _UIDragInteractionDriverStateMachine *_stateMachine;
    struct CGPoint _initialLocationInWindow;
}

@property (nonatomic) _Bool shouldAnimateLift;
@property (nonatomic) struct CGPoint initialLocationInWindow;
@property (nonatomic, readonly) _UIDragInteractionDriverStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (id)init;
- (void)cancel;
- (void)didTransitionToBeginState;
- (void)didTransitionToInactiveState;
- (void)didTransitionToInflightState;
- (_Bool)isGestureRecognizerForDragInitiation:(id)arg1;
- (void)detachFromView:(id)arg1;
- (void)attachToView:(id)arg1;
- (void)didTransitionToPreparing;
- (void)didTransitionToCancelState;

@end
