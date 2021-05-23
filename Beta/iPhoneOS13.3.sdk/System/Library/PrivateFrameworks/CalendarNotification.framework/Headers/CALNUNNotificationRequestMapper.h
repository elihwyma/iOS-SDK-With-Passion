/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNUNNotificationContentMapper, CALNUNNotificationIconMapper;

@interface CALNUNNotificationRequestMapper : NSObject

{
    CALNUNNotificationContentMapper *_notificationContentMapper;
    CALNUNNotificationIconMapper *_notificationIconMapper;
}

@property (nonatomic, readonly) CALNUNNotificationContentMapper *notificationContentMapper;
@property (nonatomic, readonly) CALNUNNotificationIconMapper *notificationIconMapper;

- (id)calnNotificationRequestFromUNNotificationRequest:(id)arg1;
- (id)initWithNotificationContentMapper:(id)arg1 notificationIconMapper:(id)arg2;
- (id)unNotificationRequestFromCALNNotificationRequest:(id)arg1;

@end
