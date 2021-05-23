/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNUNNotificationRequestMapper;

@interface CALNUNNotificationMapper : NSObject

{
    CALNUNNotificationRequestMapper *_notificationRequestMapper;
}

@property (nonatomic, readonly) CALNUNNotificationRequestMapper *notificationRequestMapper;

- (id)calnNotificationFromUNNotification:(id)arg1;
- (id)_calnNotificationFromUNNotification:(id)arg1;
- (id)initWithNotificationRequestMapper:(id)arg1;
- (id)calnNotificationsFromUNNotifications:(id)arg1;

@end
