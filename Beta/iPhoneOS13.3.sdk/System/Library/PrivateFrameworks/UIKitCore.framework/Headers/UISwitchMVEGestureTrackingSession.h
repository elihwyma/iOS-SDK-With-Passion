/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIGestureRecognizer, UIView;

@protocol UISwitchMVEGestureTrackingSessionElement;

__attribute__((visibility("hidden")))
@interface UISwitchMVEGestureTrackingSession : NSObject

{
    _Bool _displayedOnValue;
    _Bool _pendingDisplayedOnValue;
    _Bool _lastCommitedOnValue;
    UIView<UISwitchMVEGestureTrackingSessionElement> *_visualElement;
    double _naturalLayoutDirection;
    double _movementVectorForPanInitiatedChangeY;
    double _movementVectorForPanInitiatedChangeTargetOnValue;
    UIGestureRecognizer *_pendingDisplayedOnValueInitiatingGesture;
}

@property (nonatomic, readonly) double naturalLayoutDirection;
@property (nonatomic, readonly) double movementVectorForPanInitiatedChangeY;
@property (nonatomic, readonly) double movementVectorForPanInitiatedChangeTargetOnValue;
@property (nonatomic, readonly) UIGestureRecognizer *pendingDisplayedOnValueInitiatingGesture;
@property (nonatomic, readonly) _Bool pendingDisplayedOnValue;
@property (nonatomic, readonly) _Bool lastCommitedOnValue;
@property (weak, nonatomic) UIView<UISwitchMVEGestureTrackingSessionElement> *visualElement;
@property (nonatomic) _Bool displayedOnValue;

+ (_Bool)gestureIsInEndState:(long long)arg1;

- (void)reset;
- (void)_updateMovementVectorForPanInitiatedChanges;
- (void)setPendingDisplayedOnValue:(_Bool)arg1 forGesture:(id)arg2;
- (_Bool)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)arg1;
- (void)_applyPendingChangesIfNecessary;
- (void)_sendStateChangeActionsIfNecessary;
- (_Bool)pendingDisplayedOnValueIsValid;
- (_Bool)_isMovementDirectionTrackableForPossibleOnOffChange:(double)arg1;
- (id)initWithVisualElement:(id)arg1;
- (void)invalidatePendingOnValue;
- (_Bool)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)arg1 forGesture:(id)arg2;
- (_Bool)canApplyPendingOnValueForGesture:(id)arg1;
- (void)applyPendingDisplayedOnValueAndSendActions;
- (void)applyPendingDisplayedOnValueWithoutSendingActions;

@end
