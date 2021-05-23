/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateInterval;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface REUpNextTimer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastFireDate;
    NSDateInterval *_fireInterval;
    double _rate;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_dispatch_timer;
}

@property (retain) NSObject<OS_dispatch_source> *dispatch_timer;
@property (nonatomic, readonly) NSDateInterval *fireInterval;
@property (nonatomic, readonly) double rate;
@property (nonatomic, readonly) CDUnknownBlockType block;
@property (readonly, getter=isValid) _Bool valid;

+ (id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithFireDate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithFireInterval:(id)arg1 atRate:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (void)invalidate;
- (void)_rescheduleTimer;
- (id)initWithDateInterval:(id)arg1 rate:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_scheduleTimerWithInterval:(id)arg1 rate:(double)arg2;
- (void)_handleTimer;
- (_Bool)_isNowRepeatingTimerWithCurrentDate:(id)arg1;

@end
