/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIDelayedAction, UITextMagnifierTimeWeightedPoint, _UIStatesFeedbackGenerator;

@protocol _UIKeyboardTextSelectionGestureControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIKeyboardTextSelectionGestureController : NSObject

{
    NSMutableArray *_deallocHandlers;
    _Bool _wasScrollingEnabled;
    _Bool _wasNestedPinchingDisabled;
    _Bool _suppressTwoFingerPan;
    _Bool _didSuppressSelectionGrabbers;
    _Bool _isLongPressing;
    _Bool _isPanning;
    _Bool _isSpacePan;
    _Bool _hadAddedTouch;
    _Bool _didFloatCursor;
    int _previousForcePressCount;
    id <_UIKeyboardTextSelectionGestureControllerDelegate> _delegate;
    double _lastPressTimestamp;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    double _twoFingerTapTimestamp;
    long long _previousRepeatedGranularity;
    long long _panGestureState;
    double _spacePanDistance;
    NSMutableArray *_activeGestures;
    UIDelayedAction *_tapLogTimer;
    UIDelayedAction *_longForcePressAction;
    _UIStatesFeedbackGenerator *_feedbackBehaviour;
    struct CGPoint _lastPanTranslation;
    struct CGPoint _accumulatedAcceleration;
    struct CGPoint _accumulatedBounding;
    struct CGPoint _cursorLocationBase;
}

@property (nonatomic) struct CGPoint lastPanTranslation;
@property (nonatomic) struct CGPoint accumulatedAcceleration;
@property (nonatomic) struct CGPoint accumulatedBounding;
@property (nonatomic) double lastPressTimestamp;
@property (retain, nonatomic) UITextMagnifierTimeWeightedPoint *weightedPoint;
@property (nonatomic) double twoFingerTapTimestamp;
@property (nonatomic) long long previousRepeatedGranularity;
@property (nonatomic) long long panGestureState;
@property (nonatomic) _Bool wasScrollingEnabled;
@property (nonatomic) _Bool wasNestedPinchingDisabled;
@property (nonatomic) _Bool suppressTwoFingerPan;
@property (nonatomic) _Bool didSuppressSelectionGrabbers;
@property (nonatomic) _Bool isLongPressing;
@property (nonatomic) _Bool isPanning;
@property (nonatomic) _Bool isSpacePan;
@property (nonatomic) _Bool hadAddedTouch;
@property (nonatomic) double spacePanDistance;
@property (retain, nonatomic) NSMutableArray *activeGestures;
@property (nonatomic) _Bool didFloatCursor;
@property (nonatomic) struct CGPoint cursorLocationBase;
@property (retain, nonatomic) UIDelayedAction *tapLogTimer;
@property (nonatomic) int previousForcePressCount;
@property (retain, nonatomic) UIDelayedAction *longForcePressAction;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackBehaviour;
@property (nonatomic) id <_UIKeyboardTextSelectionGestureControllerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)willRemoveSelectionController;
- (void)didRemoveSelectionController;
- (id)addTwoFingerTextSelectionInteractionsToView:(id)arg1;
- (id)addOneFingerTextSelectionInteractionsToView:(id)arg1;
- (id)addLongPressTextSelectionInteractionsToView:(id)arg1;
- (void)configureOneFingerForcePressRecognizer:(id)arg1;
- (void)configureTwoFingerPanGestureRecognizer:(id)arg1;
- (void)configureTwoFingerTapGestureRecognizer:(id)arg1;
- (void)removeDeallocationHandler:(id)arg1;
- (id)addDeallocationHandler:(CDUnknownBlockType)arg1;
- (_Bool)oneFingerForcePressShouldFailWithoutForce;
- (_Bool)oneFingerForcePressShouldCancelTouchesInView;
- (void)enableEnclosingScrollViewNestedPinching;
- (double)oneFingerForcePressMinimumDuration;
- (double)oneFingerForcePressAllowableMovement;
- (id)selectionController;
- (void)redisableEnclosingScrollViewNestedPinching;
- (void)_cleanupDeadGesturesIfNecessary;
- (_Bool)shouldAddForceGesture;
- (_Bool)_longPressAllowedForView:(id)arg1;
- (Class)textInteractionClass;
- (_Bool)allowOneFingerDeepPress;

@end
