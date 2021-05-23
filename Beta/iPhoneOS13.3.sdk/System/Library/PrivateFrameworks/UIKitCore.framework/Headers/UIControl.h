/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSSet;

@interface UIControl : UIView

{
    NSMutableArray *_targetActions;
    struct CGPoint _previousPoint;
    double _downTime;
    struct {
        unsigned int disabled:1;
        unsigned int tracking:1;
        unsigned int touchInside:1;
        unsigned int touchDragged:1;
        unsigned int requiresDisplayOnTracking:1;
        unsigned int highlighted:1;
        unsigned int dontHighlightOnTouchDown:1;
        unsigned int delayActions:1;
        unsigned int allowActionsToQueue:1;
        unsigned int pendingUnhighlight:1;
        unsigned int selected:1;
        unsigned int verticalAlignment:3;
        unsigned int horizontalAlignment:3;
        unsigned int wasLastHighlightSuccessful:1;
        unsigned int touchHasHighlighted:1;
    } _controlFlags;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) long long contentVerticalAlignment;
@property (nonatomic) long long contentHorizontalAlignment;
@property (nonatomic, readonly) long long effectiveContentHorizontalAlignment;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly, getter=isTracking) _Bool tracking;
@property (nonatomic, readonly, getter=isTouchInside) _Bool touchInside;
@property (nonatomic, readonly) NSSet *allTargets;
@property (nonatomic, readonly) unsigned long long allControlEvents;

+ (unsigned long long)_primaryStateForState:(unsigned long long)arg1;
+ (_Bool)_allowActionsToQueue;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (_Bool)canBecomeFocused;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)_setTouchHasHighlighted:(_Bool)arg1;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityShouldActivateOnHUDLift;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setLastHighlightSuccessful:(_Bool)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)_clippedHighlightBounds;
- (_Bool)_touchHasHighlighted;
- (double)_highlightCornerRadius;
- (_Bool)_wasLastHighlightSuccessful;
- (long long)effectiveContentVerticalAlignment;
- (void)setTracking:(_Bool)arg1;
- (void)_cancelDelayedActions;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)_unhighlight;
- (_Bool)requiresDisplayOnTracking;
- (_Bool)shouldTrack;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)cancelTouchTracking;
- (void)_incrementStatisticsForUserActionForEvents:(unsigned long long)arg1;
- (void)_sendDelayedActions:(_Bool)arg1;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)_beginInteractionDurationStatisticMeasurements;
- (void)_commitInteractionDurationStatisticMeasurements;
- (_Bool)cancelMouseTracking;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2;
- (_Bool)_hasActionForEventMask:(unsigned long long)arg1;
- (void)_setHighlightOnMouseDown:(_Bool)arg1;
- (void)_delayActions;
- (void)_sendDelayedActions;
- (_Bool)touchDragged;
- (void)setRequiresDisplayOnTracking:(_Bool)arg1;
- (_Bool)hasOneOrMoreTargets;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (void)_diagnoseFocusabilityForReport:(id)arg1;
- (long long)_focusedSound;
- (unsigned long long)_stateForFocusUpdateContext:(id)arg1;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (id)_scalarStatisticsForUserValueChangedEvent;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (id)__distributionStatisticsForUserInteractionDuration;
- (id)_scalarStatisticsForUserTouchUpInsideEvent;
- (id)_distributionStatisticsForUserInteractionDuration;

@end
