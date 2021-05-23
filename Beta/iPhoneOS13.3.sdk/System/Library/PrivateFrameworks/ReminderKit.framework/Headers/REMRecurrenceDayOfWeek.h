/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@interface REMRecurrenceDayOfWeek : NSObject <Swift>

{
    long long _dayOfTheWeek;
    long long _weekNumber;
}

@property (nonatomic, readonly) long long dayOfTheWeek;
@property (nonatomic, readonly) long long weekNumber;

+ (_Bool)supportsSecureCoding;
+ (id)dayOfWeek:(long long)arg1 weekNumber:(long long)arg2;
+ (id)dayOfWeek:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayOfTheWeek:(long long)arg1 weekNumber:(long long)arg2;
- (id)iCalendarValueFromDayOfTheWeek:(long long)arg1;
- (id)iCalendarDescription;

@end
