/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSNotificationCenter, NSString, _EKAlarmEngine;

@interface CALNEKAlarmEngineMonitor : NSObject

{
    _Bool _active;
    NSNotificationCenter *_notificationCenter;
    _EKAlarmEngine *_alarmEngine;
}

@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) _EKAlarmEngine *alarmEngine;
@property (nonatomic, getter=isActive) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedNotificationNamed:(id)arg1;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)addAlarmsFiredObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeAlarmsFiredObserver:(id)arg1;
- (id)initWithAlarmEngine:(id)arg1 notificationCenter:(id)arg2;

@end
