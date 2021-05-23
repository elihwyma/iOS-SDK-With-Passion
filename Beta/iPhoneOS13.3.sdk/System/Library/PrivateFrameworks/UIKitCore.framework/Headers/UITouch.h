/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString, UIResponder, UIView, UIWindow, _UITouchPredictor;

@protocol _UITouchPhaseChangeDelegate;

@interface UITouch : NSObject

{
    double _movementMagnitudeSquared;
    long long _phase;
    unsigned long long _tapCount;
    long long _edgeType;
    unsigned long long _edgeAim;
    unsigned int _touchIdentifier;
    UIWindow *_window;
    UIView *_view;
    UIView *_warpedIntoView;
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    struct CGPoint _locationInWindow;
    struct CGPoint _previousLocationInWindow;
    struct CGPoint _preciseLocationInWindow;
    struct CGPoint _precisePreviousLocationInWindow;
    double _previousPressure;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    double _pathMajorRadius;
    double _majorRadiusTolerance;
    double _pressure;
    double _maxObservedPressure;
    float _zGradient;
    struct {
        unsigned int _firstTouchForView:1;
        unsigned int _isTap:1;
        unsigned int _isDelayed:1;
        unsigned int _sentTouchesEnded:1;
        unsigned int _abandonForwardingRecord:1;
        unsigned int _deliversUpdatesInTouchesMovedIsValid:1;
        unsigned int _deliversUpdatesInTouchesMoved:1;
        unsigned int _isPredictedTouch:1;
        unsigned int _didDispatchAsEnded:1;
        unsigned int _analyticsUsedByAllowedGesture:1;
    } _touchFlags;
    _UITouchPredictor *_touchPredictor;
    _Bool _eaten;
    _Bool _needsForceUpdate;
    _Bool _hasForceUpdate;
    double _timestamp;
    long long _forceCorrelationToken;
    double _maximumPossiblePressure;
    unsigned long long _senderID;
    struct __IOHIDEvent *_hidEvent;
    double _altitudeAngle;
    long long _type;
    id <_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
    UIWindow *__windowServerHitTestWindow;
    double _azimuthAngleInCADisplay;
    double _azimuthAngleInWindow;
    double _initialTouchTimestamp;
    struct CGSize _displacement;
}

@property (nonatomic, setter=_setPathIndex:) unsigned char _pathIndex;
@property (nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;
@property (nonatomic, readonly) double _pressure;
@property (nonatomic, setter=_setZGradient:) float _zGradient;
@property (nonatomic, setter=_setEdgeType:) long long _edgeType;
@property (nonatomic, setter=_setEdgeAim:) unsigned long long _edgeAim;
@property (nonatomic, getter=_isEaten, setter=_setEaten:) _Bool _eaten;
@property (nonatomic, setter=_setDisplacement:) struct CGSize _displacement;
@property (retain, nonatomic, setter=_setPhaseChangeDelegate:) id <_UITouchPhaseChangeDelegate> _phaseChangeDelegate;
@property (retain, nonatomic, setter=_setWindowServerHitTestWindow:) UIWindow *_windowServerHitTestWindow;
@property (nonatomic, setter=_setType:) long long type;
@property (nonatomic, readonly) double azimuthAngle;
@property (nonatomic, setter=_setAzimuthAngleInCADisplay:) double azimuthAngleInCADisplay;
@property (nonatomic, readonly) double azimuthAngleInWindow;
@property (nonatomic, setter=_setAltitudeAngle:) double altitudeAngle;
@property (nonatomic, setter=_setIsPredictedTouch:) _Bool _isPredictedTouch;
@property (nonatomic, setter=_setNeedsForceUpdate:) _Bool _needsForceUpdate;
@property (nonatomic, setter=_setHasForceUpdate:) _Bool _hasForceUpdate;
@property (nonatomic, setter=_setForceCorrelationToken:) long long _forceCorrelationToken;
@property (nonatomic, setter=_setMaximumPossiblePressure:) double _maximumPossiblePressure;
@property (nonatomic, readonly) double _unclampedForce;
@property (nonatomic, setter=_setSenderID:) unsigned long long _senderID;
@property (nonatomic, setter=_setHidEvent:) struct __IOHIDEvent *_hidEvent;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) long long phase;
@property (nonatomic) unsigned long long tapCount;
@property (nonatomic) _Bool isTap;
@property (nonatomic) _Bool sentTouchesEnded;
@property (nonatomic) double majorRadius;
@property (nonatomic) double majorRadiusTolerance;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *warpedIntoView;
@property (nonatomic, readonly) _Bool _respectsCharge;
@property (nonatomic, getter=_isAnalyticsUsedByAllowedGesture, setter=_setAnalyticsUsedByAllowedGesture:) _Bool _analyticsUsedByAllowedGesture;
@property (copy, nonatomic, readonly) NSArray *gestureRecognizers;
@property (nonatomic, readonly) double force;
@property (nonatomic, readonly) double maximumPossibleForce;
@property (nonatomic, readonly) NSNumber *estimationUpdateIndex;
@property (nonatomic, readonly) long long estimatedProperties;
@property (nonatomic, readonly) long long estimatedPropertiesExpectingUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
@property (retain, nonatomic, setter=_setResponder:) UIResponder *_responder;

+ (id)_createTouchesWithGSEvent:(struct __GSEvent *)arg1 phase:(long long)arg2 view:(id)arg3;

- (void)dealloc;
- (long long)info;
- (struct CGPoint)locationInView:(id)arg1;
- (id)_clone;
- (id)_gestureRecognizers;
- (struct CGPoint)previousLocationInView:(id)arg1;
- (struct CGPoint)_locationInSceneReferenceSpace;
- (void)_loadStateFromTouch:(id)arg1;
- (id)_phaseDescription;
- (void)setIsDelayed:(_Bool)arg1;
- (_Bool)isDelayed;
- (id)_rehitTest;
- (struct CGPoint)_locationInWindow:(id)arg1;
- (void)_addGestureRecognizer:(id)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (long long)_compareIndex:(id)arg1;
- (_Bool)_isStationaryRelativeToTouches:(id)arg1;
- (unsigned int)_touchIdentifier;
- (_Bool)_edgeForceActive;
- (_Bool)_edgeForcePending;
- (_Bool)_mightBeConsideredForForceSystemGesture;
- (struct CGPoint)_previousLocationInSceneReferenceSpace;
- (void)_setLocationInWindow:(struct CGPoint)arg1 resetPrevious:(_Bool)arg2;
- (float)_pathMajorRadius;
- (id)_forwardingRecord;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (_Bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (_Bool)_shouldDeliverTouchForTouchesMoved;
- (_Bool)_isFirstTouchForView;
- (void)_setPreviousTouch:(id)arg1;
- (id)_predictedTouchesWithEvent:(id)arg1;
- (_Bool)_isAbandoningForwardingRecord;
- (void)_abandonForwardingRecord;
- (id)_mutableForwardingRecord;
- (void)_clonePropertiesToTouch:(id)arg1;
- (void)_updateMovementMagnitudeFromLocation:(struct CGPoint)arg1 toLocation:(struct CGPoint)arg2;
- (void)_computeAzimuthAngleInWindow;
- (struct CGVector)azimuthUnitVectorInView:(id)arg1;
- (_Bool)_supportsForce;
- (double)_standardForceAmount;
- (void)_updatePredictionsWithCoalescedTouches:(id)arg1;
- (void)_setIsFirstTouchForView:(_Bool)arg1;
- (void)_setLocation:(struct CGPoint)arg1 preciseLocation:(struct CGPoint)arg2 inWindowResetPreviousLocation:(_Bool)arg3;
- (struct CGPoint)_previousLocationInWindow:(id)arg1;
- (struct CGPoint)preciseLocationInView:(id)arg1;
- (struct CGPoint)precisePreviousLocationInView:(id)arg1;
- (double)azimuthAngleInView:(id)arg1;
- (_Bool)_currentlyPredictingTouches;
- (id)_touchPredictor;
- (void)_setTouchIdentifier:(unsigned int)arg1;
- (void)_setPressure:(double)arg1 resetPrevious:(_Bool)arg2;
- (void)_clearGestureRecognizers;
- (void)_updateWithChildEvent:(struct __IOHIDEvent *)arg1;
- (void)_updateMovementMagnitudeForLocation:(struct CGPoint)arg1;
- (void)_willBeDispatchedAsEnded;

@end
