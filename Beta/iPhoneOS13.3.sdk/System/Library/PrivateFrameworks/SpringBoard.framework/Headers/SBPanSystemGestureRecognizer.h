/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIPanGestureRecognizer.h>

@class BSMonotonicReferenceTime, NSTimer;

@protocol SBPanSystemGestureRecognizerDelegate;

@interface SBPanSystemGestureRecognizer : UIPanGestureRecognizer

{
    _Bool _initialTouchReceived;
    BSMonotonicReferenceTime *_initialTouchReceivedReferenceTime;
    _Bool _failsPastMaximumPressDurationWithoutHysteresis;
    double _maximumPressDuration;
    NSTimer *_noHysterisisCancellationTimer;
}

@property (retain, nonatomic) NSTimer *noHysterisisCancellationTimer;
@property (weak, nonatomic) id <SBPanSystemGestureRecognizerDelegate> delegate;
@property (nonatomic) _Bool failsPastMaximumPressDurationWithoutHysteresis;
@property (nonatomic) double maximumPressDuration;

- (void)dealloc;
- (void)reset;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)invalidateNoHysterisisCancellationTimer;
- (void)setupNoHysterisisCancellationTimerIfNeeded;

@end
