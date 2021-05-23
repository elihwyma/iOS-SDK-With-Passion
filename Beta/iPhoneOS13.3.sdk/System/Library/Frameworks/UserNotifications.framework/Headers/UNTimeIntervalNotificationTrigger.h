/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger

{
    double _timeInterval;
}

@property (nonatomic, readonly) double timeInterval;

+ (_Bool)supportsSecureCoding;
+ (id)triggerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)nextTriggerDate;
- (id)_initWithTimeInterval:(double)arg1 repeats:(_Bool)arg2;

@end
