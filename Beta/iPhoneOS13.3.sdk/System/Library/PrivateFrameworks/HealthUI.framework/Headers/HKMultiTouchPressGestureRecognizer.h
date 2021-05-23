/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSArray, NSMutableSet, NSSet, NSTimer;

@protocol HKMultiTouchPressGestureRecognizerDelegate;

@interface HKMultiTouchPressGestureRecognizer : UIGestureRecognizer

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
@property (weak, nonatomic) id <HKMultiTouchPressGestureRecognizerDelegate> delegate;
@property (nonatomic, readonly) NSArray *orderedTouches;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchDelayTimerFired:(id)arg1;
- (id)touchAtIndex:(unsigned long long)arg1;

@end
