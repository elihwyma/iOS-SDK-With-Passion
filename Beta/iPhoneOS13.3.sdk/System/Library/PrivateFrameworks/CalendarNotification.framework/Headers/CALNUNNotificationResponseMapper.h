/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNUNNotificationMapper;

@interface CALNUNNotificationResponseMapper : NSObject

{
    CALNUNNotificationMapper *_notificationMapper;
}

@property (nonatomic, readonly) CALNUNNotificationMapper *notificationMapper;

+ (id)_calnNotificationActionIdentifierFromUNNotificationActionIdentifier:(id)arg1;

- (id)initWithNotificationMapper:(id)arg1;
- (id)calnNotificationResponseFromUNNotificationResponse:(id)arg1;

@end
