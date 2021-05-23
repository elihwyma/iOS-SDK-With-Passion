/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTXPCScheduler : NSObject

{
    NSString *_eventName;
}

@property (copy, nonatomic) NSString *eventName;

+ (id)xpcSchedulerWithEvent:(id)arg1;

- (id)initWithEvent:(id)arg1;
- (void)scheduleTimerForSeconds:(double)arg1;
- (void)unscheduleTimer;
- (void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(CDUnknownBlockType)arg2 performImmediately:(_Bool)arg3;
- (void)scheduleActivityWithCriteria:(id)arg1 activityHandler:(CDUnknownBlockType)arg2;
- (void)unscheduleActivity;

@end
