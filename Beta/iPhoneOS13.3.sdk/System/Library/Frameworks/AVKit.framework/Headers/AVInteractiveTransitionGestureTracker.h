/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSArray, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIView;

@protocol AVTransitionDriverDelegate;

__attribute__((visibility("hidden")))
@interface AVInteractiveTransitionGestureTracker : NSObject

{
    _Bool _enabled;
    _Bool _pinchToDismissEnabled;
    _Bool _pinchToPresentEnabled;
    _Bool _panToDismissEnabled;
    _Bool _waitingForTransition;
    _Bool _waitingForBoundsChange;
    _Bool _waitingForLocationChangeAfterBoundsChange;
    _Bool _hasContinued;
    _Bool _hasRotated;
    _Bool _lastNonZeroVelocityWasDownward;
    UIPanGestureRecognizer *_contentTransitioningViewGestureRecognizer;
    id <AVTransitionDriverDelegate> _transitionDriverDelegate;
    double _previousPinchScale;
    double __rotation;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    NSArray *_recognizers;
    double _timestampOfTouchWithLocationChangeAfterBoundsChange;
    long long _initialInterfaceOrientation;
    long long _transitionInteraction;
    UIView *_view;
    struct CGPoint _gestureLocationAfterBoundsChange;
    struct CGPoint _lastReportedLocationInWindow;
    struct CGPoint _anchorLocationInWindow;
    struct CGRect _initialCoordinateSpaceBounds;
}

@property (nonatomic, getter=isPinchToDismissEnabled) _Bool pinchToDismissEnabled;
@property (nonatomic, getter=isPinchToPresentEnabled) _Bool pinchToPresentEnabled;
@property (nonatomic, getter=isPanToDismissEnabled) _Bool panToDismissEnabled;
@property (nonatomic) double previousPinchScale;
@property (nonatomic, setter=_setRotation:) double _rotation;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property (nonatomic, readonly) NSArray *recognizers;
@property (nonatomic, getter=isWaitingForTransition) _Bool waitingForTransition;
@property (nonatomic, getter=isWaitingForBoundsChange) _Bool waitingForBoundsChange;
@property (nonatomic, getter=isWaitingForLocationChangeAfterBoundsChange) _Bool waitingForLocationChangeAfterBoundsChange;
@property (nonatomic) double timestampOfTouchWithLocationChangeAfterBoundsChange;
@property (nonatomic) _Bool hasContinued;
@property (nonatomic) _Bool hasRotated;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) struct CGRect initialCoordinateSpaceBounds;
@property (nonatomic) struct CGPoint gestureLocationAfterBoundsChange;
@property (nonatomic) struct CGPoint lastReportedLocationInWindow;
@property (nonatomic) struct CGPoint anchorLocationInWindow;
@property (nonatomic) _Bool lastNonZeroVelocityWasDownward;
@property (nonatomic) long long transitionInteraction;
@property (weak, nonatomic) UIView *view;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTransitionDriverDelegate> transitionDriverDelegate;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) double rotationVelocity;
@property (nonatomic, readonly) double pinchScale;
@property (nonatomic, readonly) double pinchVelocity;
@property (weak, nonatomic) UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer;

- (id)init;
- (void)dealloc;
- (void)_reset;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (_Bool)isTracking;
- (void)_handlePanGesture:(id)arg1;
- (void)_cancel;
- (struct CGPoint)locationInWindow;
- (void)_finish;
- (struct CGPoint)translationInWindow;
- (struct CGPoint)velocityInWindow;
- (double)angleOfVelocityInWindow;
- (_Bool)transitionDriver:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)addRecognizersToView:(id)arg1;
- (id)_locationRecognizer;
- (struct CGPoint)_untranslatedUnfilteredLocationInFixedCoordinateSpace;
- (struct CGPoint)_filteredUntranslatedLocationInWindow;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleRotationGesture:(id)arg1;
- (_Bool)_isWaitingToContinue;
- (void)_beginTracking:(long long)arg1;
- (void)_updateLastNonZeroVelocityDirection;
- (void)_resetGesturesIfPossible;
- (void)_setHasContinuedIfNeeded;

@end
