/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSDate, NSTimeZone;

@interface REMDisplayDate : NSObject <Swift>

{
    _Bool _allDay;
    NSDate *_date;
    NSTimeZone *_timeZone;
}

@property (copy, nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, getter=isAllDay) _Bool allDay;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDueDateComponents:(id)arg1 alarms:(id)arg2;
- (id)initWithFloatingDateComponents:(id)arg1 nonFloatingDateComponents:(id)arg2;
- (id)initWithDate:(id)arg1 allDay:(_Bool)arg2 timeZone:(id)arg3;

@end
