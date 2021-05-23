/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNInboxNotificationMonitor, UISApplicationState;

@interface CALNCalendarAppBadgeUpdater : NSObject

{
    CALNInboxNotificationMonitor *_inboxNotificationMonitor;
    UISApplicationState *_applicationState;
}

@property (nonatomic, readonly) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (nonatomic, readonly) UISApplicationState *applicationState;

- (void)handleNotificationCountChangedNotification:(id)arg1;
- (id)initWithInboxNotificationMonitor:(id)arg1;

@end
