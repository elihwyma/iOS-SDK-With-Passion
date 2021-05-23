/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIGestureRecognizer.h>

@class SBReachabilitySettings, SBTouchHistory, UITouch;

@interface SBReachabilityGestureRecognizer : UIGestureRecognizer

{
    _Bool _everTranslatedUpwards;
    _Bool _movedPastHysteresis;
    SBTouchHistory *_touchHistory;
    UITouch *_activeTouch;
    SBReachabilitySettings *_settings;
    struct CGPoint _initialTouchLocation;
}

@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (retain, nonatomic) UITouch *activeTouch;
@property (nonatomic) struct CGPoint initialTouchLocation;
@property (nonatomic) _Bool everTranslatedUpwards;
@property (nonatomic) _Bool movedPastHysteresis;
@property (retain, nonatomic) SBReachabilitySettings *settings;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
