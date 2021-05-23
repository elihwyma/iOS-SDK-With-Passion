/*
 Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDelayedAction : NSObject

{
    id m_target;
    SEL m_action;
    id m_userInfo;
    double m_delay;
    NSTimer *m_timer;
    _Bool m_canceled;
    NSString *m_runLoopMode;
    NSDate *m_startDate;
}

@property (readonly) NSDate *_startDate;
@property (readonly) _Bool _canceled;
@property (retain) id target;
@property (retain) id userInfo;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (double)delay;
- (void)touch;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5;
- (void)unschedule;
- (_Bool)scheduled;
- (void)timerFired:(id)arg1;
- (void)touchWithDelay:(double)arg1;

@end
