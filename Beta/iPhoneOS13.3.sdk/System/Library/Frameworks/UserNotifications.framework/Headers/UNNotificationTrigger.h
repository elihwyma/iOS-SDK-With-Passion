/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@interface UNNotificationTrigger : NSObject

{
    _Bool _repeats;
}

@property (nonatomic, readonly) _Bool repeats;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (double)_retroactiveTriggerHysteresis;
- (id)_initWithRepeats:(_Bool)arg1;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterLastTriggerDate:(id)arg1 withRequestedDate:(id)arg2;
- (_Bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;

@end
