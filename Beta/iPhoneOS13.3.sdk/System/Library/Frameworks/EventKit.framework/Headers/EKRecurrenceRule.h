/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/EKObject.h>

@class EKRecurrenceEnd, EKRecurrenceHelper, NSArray, NSDate, NSString;

@interface EKRecurrenceRule : EKObject

{
    EKRecurrenceHelper *_recurrenceHelper;
    _Bool _shouldPinMonthDays;
    _Bool _usesEndDate;
}

@property (nonatomic, readonly) _Bool shouldPinMonthDays;
@property (nonatomic, readonly) CDStruct_deff9ab7 gregorianUnits;
@property (readonly) _Bool usesEndDate;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSDate *cachedEndDate;
@property (nonatomic, readonly) _Bool dirtyStateMayAffectExceptionDates;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;
@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) long long interval;
@property (nonatomic, readonly) long long firstDayOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheWeek;
@property (nonatomic, readonly) NSArray *daysOfTheMonth;
@property (nonatomic, readonly) NSArray *daysOfTheYear;
@property (nonatomic, readonly) NSArray *weeksOfTheYear;
@property (nonatomic, readonly) NSArray *monthsOfTheYear;
@property (nonatomic, readonly) NSArray *setPositions;

+ (id)recurrenceRuleWithType:(long long)arg1 interval:(unsigned long long)arg2 end:(id)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1;
+ (id)iCalendarValueFromRecurrenceType:(long long)arg1;
+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(_Bool)arg2 isFloating:(_Bool)arg3;
+ (long long)_ekWeekdayFromCalDayOfWeek:(int)arg1;
+ (int)_calDayOfWeekFromEKWeekday:(long long)arg1;
+ (Class)frozenClass;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (id)specifier;
- (void)setInterval:(unsigned long long)arg1;
- (id)endDate;
- (void)setUUID:(id)arg1;
- (void)reset;
- (void)rollback;
- (void)setEndDate:(id)arg1;
- (void)setFrequency:(long long)arg1;
- (void)setSpecifier:(id)arg1;
- (id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)initRecurrenceWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3;
- (void)pinToEndsOfMonthsWithCalendarItem:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (_Bool)isWeekendRule;
- (_Bool)isWeekdayRule;
- (_Bool)isAnyDayRule;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (void)setFirstDayOfTheWeek:(unsigned long long)arg1;
- (_Bool)isEqualToRecurrenceRule:(id)arg1;
- (id)stringValueAsDateOnly:(_Bool)arg1 isFloating:(_Bool)arg2;
- (int)firstDayOfTheWeekRaw;
- (void)setFirstDayOfTheWeekRaw:(int)arg1;
- (id)_recurrenceHelper;
- (void)_updateSpecifierIfNeeded;
- (_Bool)mayOccurAfterDate:(id)arg1;
- (_Bool)isSimpleRule;

@end
