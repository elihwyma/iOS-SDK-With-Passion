/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, UIDelayedAction, UITouch;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer

{
    struct CGPoint _startPoint;
    double _allowableMovement;
    int _numberOfFullTaps;
    double _minimumFinalPressDuration;
    NSMutableSet *_activeTouches;
    int _currentNumberOfTaps;
    UITouch *_touch;
    UIDelayedAction *_tapTimer;
}

@property (retain, nonatomic) UITouch *touch;
@property (nonatomic) int numberOfFullTaps;
@property (nonatomic) double allowableMovement;
@property (nonatomic) double minimumFinalPressDuration;

- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)clearTapTimer;
- (void)tooSlow:(id)arg1;
- (void)startTapTimer:(double)arg1;
- (void)recognized:(id)arg1;
- (void)startRecognitionTimer:(double)arg1;
- (void)_verifyMovementInAllowableRange;
- (struct CGPoint)translationInWindowCoordinates;

@end
