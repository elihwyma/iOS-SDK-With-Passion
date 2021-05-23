/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@interface EKRecurrenceDayOfWeek : NSObject

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
