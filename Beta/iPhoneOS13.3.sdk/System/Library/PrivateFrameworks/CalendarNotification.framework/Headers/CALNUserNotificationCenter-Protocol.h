/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/Swift-Protocol.h>

@protocol CALNUserNotificationCenterDelegate;

@protocol CALNUserNotificationCenter <Swift>

@property (weak, nonatomic) id <CALNUserNotificationCenterDelegate> delegate;

- (unsigned short)setNotificationCategories: /* Error: Ran out of types for this method. */;
- (unsigned short)notificationCategories;
- (unsigned short)removeDeliveredNotificationsWithIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)deliveredNotifications;
- (unsigned short)removeAllDeliveredNotifications;
- (unsigned short)addNotificationRequest:error: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceNotificationRequest:error: /* Error: Ran out of types for this method. */;
- (unsigned short)collectSettingsStats: /* Error: Ran out of types for this method. */;

@end
