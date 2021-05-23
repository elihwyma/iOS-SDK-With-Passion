/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, NSSet, NSTimer;

@interface StocksTapDragGestureRecognizer : UIGestureRecognizer

{
    NSTimer *_touchDelayTimer;
    NSMutableSet *_touches;
    struct CGPoint _startingPosition;
    double _requiredPressDelay;
    unsigned long long _minimumNumberOfTouches;
    unsigned long long _maximumNumberOfTouches;
    struct CGRect _touchableBounds;
}

@property (nonatomic, readonly) NSSet *touches;
@property (nonatomic) double requiredPressDelay;
@property (nonatomic) unsigned long long minimumNumberOfTouches;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) struct CGRect touchableBounds;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchDelayTimerFired:(id)arg1;

@end
