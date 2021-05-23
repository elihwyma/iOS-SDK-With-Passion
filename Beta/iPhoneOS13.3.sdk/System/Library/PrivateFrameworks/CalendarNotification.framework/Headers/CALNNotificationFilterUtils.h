/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@interface CALNNotificationFilterUtils : NSObject

+ (id)filterIdentifierForNotificationRecord:(id)arg1;
+ (void)setFilterIdentifierForEKCalendarNotification:(id)arg1 onNotificationContent:(id)arg2;
+ (id)filterIdentifierForNotificationContent:(id)arg1;
+ (void)setFilterIdentifier:(id)arg1 onNotificationContent:(id)arg2;

@end
