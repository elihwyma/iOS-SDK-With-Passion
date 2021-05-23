/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationTrigger.h>

@class CLRegion;

@interface UNLocationNotificationTrigger : UNNotificationTrigger

{
    CLRegion *_region;
}

@property (copy, nonatomic, readonly) CLRegion *region;

+ (_Bool)supportsSecureCoding;
+ (id)triggerWithRegion:(id)arg1 repeats:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)_initWithRegion:(id)arg1 repeats:(_Bool)arg2;

@end
