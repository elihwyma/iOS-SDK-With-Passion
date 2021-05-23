/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSArray, NSMutableSet, NSObservation, NSString, UIDelayedAction, UIHeldAction, UILongPressGestureVelocitySample, UITapRecognizer;

@interface UILongPressGestureRecognizer : UIGestureRecognizer

{
    NSArray *_touches;
    NSMutableSet *_activeTouches;
    unsigned long long _numberOfTouchesRequired;
    double _minimumPressDuration;
    double _allowableMovement;
    struct CGPoint _startPointScreen;
    struct CGPoint _lastCentroidScreen;
    UIHeldAction *_enoughTimeElapsed;
    UIDelayedAction *_tooMuchTimeElapsed;
    UIDelayedAction *_multitouchTimer;
    UITapRecognizer *_imp;
    NSObservation *_touchForceObservation;
    long long _impulseObservations;
    double _currentImpulse;
    double _lastForce;
    double _lastForceTimestamp;
    unsigned int _gotTouchEnd:1;
    unsigned int _gotTooMany:1;
    unsigned int _gotEnoughTaps:1;
    unsigned int _cancelPastAllowableMovement:1;
    unsigned int _allowsDynamicTouchesList:1;
    _Bool _requiresQuietImpulse;
    _Bool _requiresQuietImpulseForCurrentTouchSequence;
    _Bool __prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;
    _Bool __shouldAlwaysEnableMultitouchTimerAtTouchesBegin;
    long long _buttonType;
    UILongPressGestureVelocitySample *_velocitySample;
    UILongPressGestureVelocitySample *_previousVelocitySample;
    double _allowableElapsedTimeForAllRequiredTouches;
    double _lastTouchTime;
    struct CGPoint _lastSceneReferenceLocation;
    struct CGPoint _lastUnadjustedSceneReferenceLocation;
}

@property (nonatomic) double delay;
@property (retain, nonatomic) NSArray *touches;
@property (nonatomic, readonly) struct CGPoint startPoint;
@property (nonatomic, readonly) struct CGPoint centroid;
@property (nonatomic) _Bool cancelPastAllowableMovement;
@property (nonatomic, setter=_setButtonType:) long long _buttonType;
@property (nonatomic, setter=_setRequiresQuietImpulse:) _Bool _requiresQuietImpulse;
@property (nonatomic, setter=_setRequiresQuietImpulseForCurrentTouchSequence:) _Bool _requiresQuietImpulseForCurrentTouchSequence;
@property (readonly, getter=_velocitySample) UILongPressGestureVelocitySample *_velocitySample;
@property (readonly, getter=_previousVelocitySample) UILongPressGestureVelocitySample *_previousVelocitySample;
@property (nonatomic) struct CGPoint lastSceneReferenceLocation;
@property (nonatomic) struct CGPoint lastUnadjustedSceneReferenceLocation;
@property (nonatomic) double lastTouchTime;
@property (nonatomic, readonly) struct CGPoint _centroidScreen;
@property (nonatomic) _Bool _prefersToBeExclusiveWithCompetingLongPressGestureRecognizers;
@property (nonatomic, setter=_setShouldAlwaysEnableMultitouchTimerAtTouchesBegin:) _Bool _shouldAlwaysEnableMultitouchTimerAtTouchesBegin;
@property (nonatomic, setter=_setAllowableElapsedTimeForAllRequiredTouches:) double _allowableElapsedTimeForAllRequiredTouches;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)velocityInView:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (void)_setAllowableSeparation:(double)arg1;
- (_Bool)_shouldReceivePress:(id)arg1;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (void)clearTimer;
- (void)_resetVelocitySamples;
- (double)_allowableSeparation;
- (double)_touchSloppinessFactor;
- (void)_resetImpulseQuietness;
- (void)enoughTimeElapsed:(id)arg1;
- (void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1;
- (_Bool)_impulseQuietEnough;
- (void)tooMuchElapsed:(id)arg1;
- (struct CGPoint)_locationOfTouches:(id)arg1;
- (_Bool)_allowsDynamicTouchesList;
- (void)_changeTouchesListTo:(id)arg1;
- (_Bool)activeTouchesExceedAllowableSeparation;
- (void)_startMultitouchTimer;
- (void)startTimer;
- (_Bool)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2 physicalTouch:(id)arg3;
- (void)_interactionsEndedWithValidTouches:(_Bool)arg1;
- (long long)_finalStateForRecognition;
- (struct CGPoint)_centroidInView:(id)arg1;
- (struct CGPoint)_startPointInView:(id)arg1;
- (_Bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (void)_startTapFinishedTimer;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (_Bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)_setAllowsDynamicTouchesList:(_Bool)arg1;
- (double)_allowableTouchTimeSeparation;
- (struct CGPoint)_translationInView:(id)arg1;
- (void)_setTranslation:(struct CGPoint)arg1 inView:(id)arg2;

@end
