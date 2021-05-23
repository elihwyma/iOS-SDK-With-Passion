/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarmStorage, MTMetrics, MTTimerStorage, NSString;

@interface MTUserNotificationActionDispatcher : NSObject

{
    MTAlarmStorage *_alarmStorage;
    MTTimerStorage *_timerStorage;
    MTMetrics *_metrics;
}

@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) MTTimerStorage *timerStorage;
@property (retain, nonatomic) MTMetrics *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_alarmNotificationActionForUserNotificationAction:(id)arg1 category:(id)arg2;
+ (unsigned long long)_timerNotificationActionForUserNotificationAction:(id)arg1;

- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_handleAlarmNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleTimerNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)handleAlarmNotificationIdentifier:(id)arg1 action:(unsigned long long)arg2 category:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithAlarmStorage:(id)arg1 timerStorage:(id)arg2;

@end
