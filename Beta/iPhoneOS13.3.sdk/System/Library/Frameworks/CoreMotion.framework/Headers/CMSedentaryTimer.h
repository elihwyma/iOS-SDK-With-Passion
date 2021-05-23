/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMSedentaryTimer_Internal;

@interface CMSedentaryTimer : NSObject

{
    CMSedentaryTimer_Internal *_internal;
}

@property (nonatomic, readonly) CMSedentaryTimer_Internal *_internal;

+ (_Bool)isAvailable;

- (id)init;
- (void)dealloc;
- (_Bool)isActive;
- (void)startTimerWithStartTime:(id)arg1 periodInterval:(double)arg2 reminderInterval:(double)arg3 autoReschedule:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)stopTimerWithHandler:(CDUnknownBlockType)arg1;
- (void)queryAlarmDataSince:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)registerForAlarmsWithHandler:(CDUnknownBlockType)arg1;

@end
