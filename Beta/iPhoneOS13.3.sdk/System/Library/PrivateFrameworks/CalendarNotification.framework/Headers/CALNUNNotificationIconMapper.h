/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNNotificationIconCache;

@interface CALNUNNotificationIconMapper : NSObject

{
    CALNNotificationIconCache *_notificationIconCache;
}

@property (nonatomic, readonly) CALNNotificationIconCache *notificationIconCache;

- (id)initWithNotificationIconCache:(id)arg1;
- (id)unNotificationIconFromIconIdentifier:(id)arg1;
- (id)iconIdentifierFromUNNotificationIcon:(id)arg1;

@end
