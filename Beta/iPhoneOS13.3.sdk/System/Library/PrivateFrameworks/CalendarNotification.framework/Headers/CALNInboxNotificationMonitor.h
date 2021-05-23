/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, _EKNotificationMonitor;

@interface CALNInboxNotificationMonitor : NSObject

{
    _Bool _active;
    _EKNotificationMonitor *_notificationMonitor;
}

@property (nonatomic, readonly) _EKNotificationMonitor *notificationMonitor;
@property (nonatomic, getter=isActive) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *eventNotificationReferences;
@property (nonatomic, readonly) unsigned long long eventNotificationCount;

- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedNotificationNamed:(id)arg1;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)addNotificationsChangedObserver:(id)arg1 selector:(SEL)arg2;
- (id)initWithEventStoreProvider:(id)arg1;
- (void)removeNotificationsChangedObserver:(id)arg1;
- (void)addNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNotificationCountChangedObserver:(id)arg1 selector:(SEL)arg2;

@end
