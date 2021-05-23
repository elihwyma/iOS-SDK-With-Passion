/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <UserNotifications/UNNotificationTrigger.h>

@class NSCalendar, NSDate, NSTimeZone;

@interface UNLegacyNotificationTrigger : UNNotificationTrigger

{
    int _remainingRepeatCount;
    int _totalRepeatCount;
    NSDate *_date;
    NSTimeZone *_timeZone;
    NSCalendar *_repeatCalendar;
    unsigned long long _repeatInterval;
}

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSCalendar *repeatCalendar;
@property (nonatomic) int remainingRepeatCount;
@property (nonatomic) int totalRepeatCount;
@property (nonatomic) unsigned long long repeatInterval;

+ (_Bool)supportsSecureCoding;
+ (id)triggerWithDate:(id)arg1 timeZone:(id)arg2 repeatInterval:(unsigned long long)arg3 repeatCalendar:(id)arg4;
+ (id)triggerWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (double)_retroactiveTriggerHysteresis;
- (_Bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)_initWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6;
- (id)_nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 defaultTimeZone:(id)arg3;

@end
