/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDate, NSString, NSTimer;

@protocol BSRelativeDateTimerDelegate;

@interface BSRelativeDateTimer : NSObject

{
    NSCalendar *_gregorian;
    NSTimer *_timer;
    NSDate *_date;
    id <BSRelativeDateTimerDelegate> _delegate;
    unsigned long long _currResolution;
    long long _currValue;
}

@property (weak, nonatomic) id <BSRelativeDateTimerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)addTimerToMainRunLoop:(id)arg1;
+ (void)invalidateTimer:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)date;
- (void)setDate:(id)arg1;
- (void)_invalidateTimer;
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
- (void)_fireForLocaleEvent:(id)arg1;
- (void)fireAndSchedule;
- (void)_fireForEvent;
- (void)_fireAndUpdateTimerIfNecessary;
- (id)_timeDifferenceFromDate:(id)arg1;
- (double)_nextFireInterval:(id)arg1 resolution:(unsigned long long)arg2 comparedToNow:(long long)arg3;
- (double)nextFireInterval;

@end
