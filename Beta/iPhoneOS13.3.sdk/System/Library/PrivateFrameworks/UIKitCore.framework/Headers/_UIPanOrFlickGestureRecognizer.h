/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPanGestureRecognizer.h>

@class UIDelayedAction;

@protocol _UIPanOrFlickGestureRecognizerDelegate;

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer

{
    unsigned long long _touchCount;
    _Bool _didLongPress;
    _Bool _longPressOnly;
    unsigned long long _allowedFlickDirections;
    double _maximumFlickDuration;
    double _minimumFlickDistance;
    double _minimumPressDuration;
    double _allowableMovement;
    double _responsivenessDelay;
    double _timestampBeforeGestureBegan;
    double _timestampOfLastEvent;
    UIDelayedAction *_elapsedAction;
    UIDelayedAction *_responsivenessAction;
    struct CGPoint _initialCentroidLocation;
}

@property (nonatomic) double timestampBeforeGestureBegan;
@property (nonatomic) double timestampOfLastEvent;
@property (retain, nonatomic) UIDelayedAction *elapsedAction;
@property (retain, nonatomic) UIDelayedAction *responsivenessAction;
@property (nonatomic) struct CGPoint initialCentroidLocation;
@property (nonatomic, readonly) id <_UIPanOrFlickGestureRecognizerDelegate> panOrFlickDelegate;
@property (nonatomic) unsigned long long allowedFlickDirections;
@property (nonatomic) double maximumFlickDuration;
@property (nonatomic) double minimumFlickDistance;
@property (nonatomic, readonly) unsigned long long recognizedFlickDirection;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;
@property (nonatomic, readonly) _Bool didLongPress;
@property (nonatomic) _Bool longPressOnly;
@property (nonatomic) double responsivenessDelay;

- (void)dealloc;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)_analyticsIsGestureHandled;
- (void)clearTimer;
- (void)enoughTimeElapsed:(id)arg1;
- (void)startTimer;
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;
- (_Bool)isValidLongPress;
- (void)responsivenessTimeElapsed:(id)arg1;

@end
