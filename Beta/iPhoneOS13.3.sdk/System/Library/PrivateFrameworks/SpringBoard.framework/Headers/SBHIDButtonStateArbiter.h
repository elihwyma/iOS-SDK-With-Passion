/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSTimer;

@protocol SBHIDButtonStateDelegate;

@interface SBHIDButtonStateArbiter : NSObject

{
    BSTimer *_longPressTimer;
    unsigned long long _downEventSenderID;
    unsigned long long _downTime;
    double _longPressTimeoutAtDownEvent;
    double _longPressTimeout;
    long long _pressSequence;
    id <SBHIDButtonStateDelegate> _delegate;
}

@property (nonatomic, readonly, getter=isLongPressDisabled) _Bool longPressDisabled;
@property (nonatomic) double longPressTimeout;
@property (nonatomic, readonly) long long pressSequence;
@property (weak, nonatomic) id <SBHIDButtonStateDelegate> delegate;

- (void)reset;
- (void)processEvent:(struct __IOHIDEvent *)arg1;
- (void)_invalidateLongPressTimer;
- (void)_longPressTimeoutDidOccur;
- (void)_startLongPressTimerWithTimeout:(double)arg1;

@end
