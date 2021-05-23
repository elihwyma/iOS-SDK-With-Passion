/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationTrigger.h>

@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger

{
    NSDateComponents *_dateComponents;
}

@property (copy, nonatomic, readonly) NSDateComponents *dateComponents;

+ (_Bool)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)arg1 repeats:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)nextTriggerDate;
- (id)_initWithDateComponents:(id)arg1 repeats:(_Bool)arg2;

@end
