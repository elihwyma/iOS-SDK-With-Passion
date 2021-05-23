/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol NAScheduler;

@interface MTAgentNotificationManager : NSObject

{
    NSMutableArray *_listeners;
    id <NAScheduler> _serializer;
}

@property (retain, nonatomic) NSMutableArray *listeners;
@property (retain, nonatomic) id <NAScheduler> serializer;

+ (double)defaultAssertionTimeOutForNotification:(id)arg1 type:(long long)arg2;
+ (double)_schedulingAssertionTimeout;

- (id)init;
- (void)dealloc;
- (void)beginListening;
- (void)registerListener:(id)arg1;
- (void)_registerForDarwinNotifications;
- (void)_registerForLiveDarwinNotification:(id)arg1;
- (void)_registerForDistributedNotifications;
- (void)_registerForAlarmNotifications;
- (void)_registerForXPCStream:(id)arg1 notificationType:(long long)arg2;
- (void)_handleNotificationWithName:(id)arg1 type:(long long)arg2;

@end
