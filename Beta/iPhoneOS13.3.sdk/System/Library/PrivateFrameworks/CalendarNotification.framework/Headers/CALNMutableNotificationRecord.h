/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/CALNNotificationRecord.h>

@class CALNNotificationContent, NSDate, NSString;

@interface CALNMutableNotificationRecord : CALNNotificationRecord

@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSString *sourceClientIdentifier;
@property (copy, nonatomic) CALNNotificationContent *content;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) _Bool shouldPresentAlert;
@property (nonatomic) _Bool shouldPlaySound;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
