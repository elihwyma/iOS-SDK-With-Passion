/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDate, NSTimeZone;

@interface NSDateComponents : NSObject

@property (copy) NSCalendar *calendar;
@property (copy) NSTimeZone *timeZone;
@property long long era;
@property long long year;
@property long long month;
@property long long day;
@property long long hour;
@property long long minute;
@property long long second;
@property long long nanosecond;
@property long long weekday;
@property long long weekdayOrdinal;
@property long long quarter;
@property long long weekOfMonth;
@property long long weekOfYear;
@property long long yearForWeekOfYear;
@property (getter=isLeapMonth) _Bool leapMonth;
@property (copy, readonly) NSDate *date;
@property (readonly, getter=isValidDate) _Bool validDate;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithCFDateComponents:(struct __CFDateComponents *)arg1;
- (long long)week;
- (void)setWeek:(long long)arg1;
- (_Bool)isLeapMonthSet;
- (struct __CFDateComponents *)_dateComponents;
- (void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (long long)valueForComponent:(unsigned long long)arg1;
- (_Bool)isValidDateInCalendar:(id)arg1;

@end
