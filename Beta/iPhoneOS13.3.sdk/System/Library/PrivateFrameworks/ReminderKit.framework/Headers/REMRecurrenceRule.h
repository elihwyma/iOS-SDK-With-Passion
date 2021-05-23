/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, REMObjectID, REMRecurrenceEnd;

@interface REMRecurrenceRule : NSObject <Swift>

{
    REMRecurrenceEnd *_recurrenceEnd;
    long long _frequency;
    long long _interval;
    long long _firstDayOfTheWeek;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
    REMObjectID *_objectID;
    REMObjectID *_accountID;
    REMObjectID *_reminderID;
}

@property (nonatomic, readonly) REMObjectID *objectID;
@property (nonatomic, readonly) REMObjectID *accountID;
@property (nonatomic, readonly) REMObjectID *reminderID;
@property (copy, nonatomic, readonly) REMRecurrenceEnd *recurrenceEnd;
@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) long long interval;
@property (nonatomic, readonly) long long firstDayOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheMonth;
@property (nonatomic, readonly) NSArray *daysOfTheYear;
@property (nonatomic, readonly) NSArray *weeksOfTheYear;
@property (nonatomic, readonly) NSArray *monthsOfTheYear;
@property (nonatomic, readonly) NSArray *setPositions;
@property (nonatomic, readonly) REMObjectID *remObjectID;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)nextRecurrentDueDateAfter:(id)arg1 dueDate:(id)arg2 timeZone:(id)arg3 allDay:(_Bool)arg4 recurrenceRules:(id)arg5;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)iCalendarValueFromRecurrenceType:(long long)arg1;
+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(_Bool)arg2 isFloating:(_Bool)arg3;
+ (id)iCalendarValueFromWeekday:(long long)arg1;
+ (int)_convertREMRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)iCalendarDescription;
- (id)initRecurrenceRuleWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 frequency:(long long)arg4 interval:(long long)arg5 firstDayOfTheWeek:(long long)arg6 daysOfTheWeek:(id)arg7 daysOfTheMonth:(id)arg8 monthsOfTheYear:(id)arg9 weeksOfTheYear:(id)arg10 daysOfTheYear:(id)arg11 setPositions:(id)arg12 end:(id)arg13;
- (id)initWithRecurrenceRule:(id)arg1 objectID:(id)arg2 accountID:(id)arg3 reminderID:(id)arg4;
- (id)initRecurrenceRuleWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 frequency:(long long)arg4 interval:(long long)arg5 end:(id)arg6;
- (_Bool)isEqualToRecurrenceRule:(id)arg1;
- (id)stringValueAsDateOnly:(_Bool)arg1 isFloating:(_Bool)arg2;
- (id)initWithRecurrenceRule:(id)arg1 objectID:(id)arg2 end:(id)arg3;

@end
