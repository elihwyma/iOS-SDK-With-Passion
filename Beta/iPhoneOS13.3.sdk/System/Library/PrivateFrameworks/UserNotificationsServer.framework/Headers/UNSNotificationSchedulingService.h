/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableDictionary, UNSLocationMonitor, UNSNotificationRepository, UNSNotificationScheduleRepository, UNSPendingNotificationRepository;

@protocol OS_dispatch_queue;

@interface UNSNotificationSchedulingService : NSObject

{
    UNSNotificationRepository *_notificationRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSLocationMonitor *_locationMonitor;
    NSMutableDictionary *_clients;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)localeDidChange;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (id)undeliveredNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)_queue_applicationsDidDenyNotificationSettings:(id)arg1;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)_queue_addPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removePendingNotificationRecordsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeSimilarPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (id)_queue_undeliveredNotificationRequestsForBundleIdentifier:(id)arg1;
- (void)_queue_applicationStateDidRestore;
- (void)_queue_localeDidChange;
- (void)_queue_timeDidChangeSignificantly;
- (id)_queue_clientForBundleIdentifier:(id)arg1;
- (id)_queue_addClientForBundleIdentifier:(id)arg1;
- (void)_queue_removeClientForBundleIdentifier:(id)arg1;
- (id)initWithNotificationRepository:(id)arg1 pendingNotificationRepository:(id)arg2 notificationScheduleRepository:(id)arg3 locationMonitor:(id)arg4;
- (void)addPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)removeSimilarPendingNotificationRecords:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeAllPendingNotificationRecordsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)arg1;
- (void)applicationStateDidRestore;
- (void)timeDidChangeSignificantly;

@end
