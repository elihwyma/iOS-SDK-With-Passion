/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNNotificationRequest, NSDate;

@interface CALNNotification : NSObject

{
    NSDate *_date;
    CALNNotificationRequest *_request;
}

@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) CALNNotificationRequest *request;

+ (_Bool)supportsSecureCoding;
+ (id)notificationWithRequest:(id)arg1 date:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 date:(id)arg2;
- (_Bool)isEqualToNotification:(id)arg1;

@end
