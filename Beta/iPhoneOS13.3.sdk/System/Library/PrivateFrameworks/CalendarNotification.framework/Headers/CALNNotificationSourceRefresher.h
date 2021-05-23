/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNInboxNotificationMonitor, NSArray;

@protocol CALNNotificationManager, CALNNotificationSource;

@interface CALNNotificationSourceRefresher : NSObject

{
    NSArray<CALNNotificationSource> *_sources;
    CALNInboxNotificationMonitor *_inboxNotificationMonitor;
    id <CALNNotificationManager> _notificationManager;
}

@property (copy, nonatomic, readonly) NSArray<CALNNotificationSource> *sources;
@property (nonatomic, readonly) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (nonatomic, readonly) id <CALNNotificationManager> notificationManager;

- (void)refreshNotifications:(id)arg1;
- (void)handleNotificationsChangedNotification:(id)arg1;
- (void)_withdrawExpiredNotificationsForSource:(id)arg1;
- (id)initWithSources:(id)arg1 notificationMonitor:(id)arg2 notificationManager:(id)arg3;
- (void)refreshNotifications;

@end
