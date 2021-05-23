/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNCalendarAppBadgeUpdater, CALNInboxNotificationMonitor, CALNNotificationServer, CALNNotificationSourceRefresher, CALNNotificationStorageWrapper, NSArray, NSString;

@interface CALNNotificationServerModule : NSObject

{
    CALNInboxNotificationMonitor *_inboxNotificationMonitor;
    CALNNotificationServer *_calendarNotificationServer;
    CALNNotificationSourceRefresher *_notificationSourceRefresher;
    CALNCalendarAppBadgeUpdater *_calendarAppBadgeUpdater;
    CALNNotificationStorageWrapper *_calendarStorageWrapper;
    CALNNotificationStorageWrapper *_remindersStorageWrapper;
    NSArray *_modules;
}

@property (nonatomic, readonly) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (nonatomic, readonly) CALNNotificationServer *calendarNotificationServer;
@property (nonatomic, readonly) CALNNotificationSourceRefresher *notificationSourceRefresher;
@property (nonatomic, readonly) CALNCalendarAppBadgeUpdater *calendarAppBadgeUpdater;
@property (nonatomic, readonly) CALNNotificationStorageWrapper *calendarStorageWrapper;
@property (nonatomic, readonly) CALNNotificationStorageWrapper *remindersStorageWrapper;
@property (nonatomic, readonly) NSArray *modules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_timeToLeaveRefreshStorage;
+ (id)_protectedCalendarNotificationStorage;
+ (id)_unprotectedCalendarNotificationStorage;
+ (id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 inboxNotificationProvider:(id)arg4 alarmEngineMonitor:(id)arg5 travelEngine:(id)arg6 timeToLeaveRefreshMonitor:(id)arg7 timeToLeaveRefreshStorage:(id)arg8;
+ (id)_createNotificationServerWithUserNotificationCenter:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 inboxNotificationProvider:(id)arg4 alarmEngineMonitor:(id)arg5 travelEngine:(id)arg6 timeToLeaveRefreshMonitor:(id)arg7 timeToLeaveRefreshStorage:(id)arg8;
+ (id)_createNotificationSourcesWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 inboxNotificationProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7;
+ (id)_triggeredEventNotificationDataStorage;
+ (id)_notificationStoragePathWithName:(id)arg1;
+ (id)_createNotificationStorageAtPath:(id)arg1;
+ (void)_setProtectedClassForStorageAtPath:(id)arg1;
+ (id)_triggeredEventNotificationDataStoragePathWithName:(id)arg1;
+ (id)_createTriggeredEventNotificationDataStorageAtPath:(id)arg1;
+ (id)_timeToLeaveRefreshStoragePathWithName:(id)arg1;
+ (id)_createTimeToLeaveRefreshStorageAtPath:(id)arg1;

- (id)init;
- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedNotificationNamed:(id)arg1;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)_registerSettingsCaptureHandlers;
- (void)_updateSourceClientIdentifiersIfNeeded;
- (void)_reloadNotificationsFromUnprotectedStorage:(id)arg1 intoProtectedStorage:(id)arg2 withStorageWrapper:(id)arg3 forNotificationServer:(id)arg4;
- (void)_reloadNotificationRecords:(id)arg1 forNotificationServer:(id)arg2;
- (void)_removeNotificationsFromUnprotectedStorage:(id)arg1;
- (void)_reloadNotificationsAfterFirstUnlock;

@end
