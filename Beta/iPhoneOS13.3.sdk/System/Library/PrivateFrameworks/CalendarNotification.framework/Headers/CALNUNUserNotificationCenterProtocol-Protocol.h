/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/Swift-Protocol.h>

@protocol UNUserNotificationCenterDelegate;

@protocol CALNUNUserNotificationCenterProtocol <Swift>

@property (weak, nonatomic) id <UNUserNotificationCenterDelegate> delegate;

- (unsigned short)notificationSettings;
- (unsigned short)setNotificationCategories: /* Error: Ran out of types for this method. */;
- (unsigned short)notificationCategories;
- (unsigned short)setWantsNotificationResponsesDelivered;
- (unsigned short)removeDeliveredNotificationsWithIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)deliveredNotifications;
- (unsigned short)removeAllDeliveredNotifications;
- (unsigned short)notificationSettingsForTopics;
- (unsigned short)addNotificationRequest:error: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceContentForRequestWithIdentifier:replacementContent:error: /* Error: Ran out of types for this method. */;

@end
