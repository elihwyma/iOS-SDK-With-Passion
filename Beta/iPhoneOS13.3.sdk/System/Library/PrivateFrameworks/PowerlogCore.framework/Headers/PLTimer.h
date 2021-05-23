/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSDate, PLEntryNotificationOperatorComposition;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLTimer : NSObject

{
    _Bool _repeats;
    NSDate *_fireDate;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _tolerance;
    id _userInfo;
    PLEntryNotificationOperatorComposition *_sleepEntryNotification;
    PLEntryNotificationOperatorComposition *_wakeEntryNotification;
    NSDate *_lastSleepTime;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) CDUnknownBlockType block;
@property (retain) NSObject<OS_dispatch_source> *timer;
@property double interval;
@property double tolerance;
@property _Bool repeats;
@property (retain) id userInfo;
@property (retain) PLEntryNotificationOperatorComposition *sleepEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain) NSDate *lastSleepTime;
@property (nonatomic) _Bool timerActive;
@property (retain, nonatomic) NSDate *fireDate;

- (void)dealloc;
- (void)invalidate;
- (void)fire;
- (void)arm;
- (id)initWithFireDate:(id)arg1 withInterval:(double)arg2 withTolerance:(double)arg3 repeats:(_Bool)arg4 withUserInfo:(id)arg5 withQueue:(id)arg6 withBlock:(CDUnknownBlockType)arg7;
- (void)handleTimerFire;

@end
