/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, PLEntryNotificationOperatorComposition;

@protocol OS_dispatch_queue;

@interface PLMonotonicTimer : NSObject

{
    NSDate *_monotonicFireDate;
    double _interval;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    NSMutableSet *_canceledFireDates;
    PLEntryNotificationOperatorComposition *_wakeEntryNotification;
}

@property double interval;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) CDUnknownBlockType block;
@property (retain) NSMutableSet *canceledFireDates;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain, nonatomic) NSDate *monotonicFireDate;

+ (id)scheduledTimerWithMonotonicFireDate:(id)arg1 withInterval:(double)arg2 withQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (_Bool)debugInstance;
+ (id)debugScheduledTimerWithMonotonicFireDate:(id)arg1 withInterval:(double)arg2 withQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (id)description;
- (void)fire;
- (void)cancel;
- (void)schedule;
- (void)_cancel;
- (void)reschedule;
- (id)initWithMonotonicFireDate:(id)arg1 withInterval:(double)arg2 withQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)_setMonotonicFireDate:(id)arg1;
- (void)timerFiredForMonotonicFireDate:(id)arg1;

@end
