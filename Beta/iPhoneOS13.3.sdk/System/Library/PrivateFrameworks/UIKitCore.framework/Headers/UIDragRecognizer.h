/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer

{
    double _maximumDeviation;
    double _minimumDistance;
    struct CGPoint _startPosition;
    _Bool _restrictsToAngle;
    double _angle;
    UITouch *_touch;
    UIDelayedAction *_tooSlow;
    double _startAngle;
    double _quietPeriod;
    _Bool _canBeginDrag;
    SEL _checkCanBeginDrag;
    UIDelayedAction *ignoreTouch;
}

@property (nonatomic) struct CGPoint startPosition;
@property (nonatomic) double startAngle;
@property (retain, nonatomic) UITouch *touch;
@property (retain, nonatomic) UIDelayedAction *ignoreTouch;
@property (nonatomic) _Bool restrictsToAngle;
@property (nonatomic) double angle;
@property (nonatomic) double maximumDeviation;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double quietPeriod;
@property (nonatomic) _Bool canBeginDrag;
@property (nonatomic) SEL checkCanBeginDrag;

+ (_Bool)_shouldDefaultToTouches;

- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)tooSlow:(id)arg1;
- (void)clearIgnoreTouch;

@end
