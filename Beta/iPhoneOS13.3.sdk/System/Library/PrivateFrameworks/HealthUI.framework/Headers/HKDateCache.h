/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDate, NSHashTable, NSSet;

@interface HKDateCache : NSObject

{
    NSDate *_startOfYesterdayMidnight;
    NSDate *_endOfYesterdayMidnight;
    NSDate *_startOfDayMidnight;
    NSDate *_endOfDayMidnight;
    NSDate *_oneMinuteBeforeEndOfDayMidnight;
    NSDate *_oneSecondBeforeEndOfDayMidnight;
    NSDate *_startOfTomorrowMidnight;
    NSDate *_endOfTomorrowMidnight;
    NSDate *_startOfRollingWeekMidnight;
    NSDate *_endOfRollingWeekMidnight;
    NSDate *_startOfRollingMonthMidnight;
    NSDate *_endOfRollingMonthMidnight;
    NSDate *_startOfRollingYear;
    NSDate *_endOfRollingYear;
    NSDate *_currentDate;
    NSHashTable *_observers;
    NSSet *_weekendDays;
    NSCalendar *_calendar;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSDate *startOfYesterdayMidnight;
@property (nonatomic, readonly) NSDate *endOfYesterdayMidnight;
@property (nonatomic, readonly) NSDate *startOfDayMidnight;
@property (nonatomic, readonly) NSDate *endOfDayMidnight;
@property (nonatomic, readonly) NSDate *oneMinuteBeforeEndOfDayMidnight;
@property (nonatomic, readonly) NSDate *oneSecondBeforeEndOfDayMidnight;
@property (nonatomic, readonly) NSDate *startOfTomorrowMidnight;
@property (nonatomic, readonly) NSDate *endOfTomorrowMidnight;
@property (nonatomic, readonly) NSDate *startOfRollingWeekMidnight;
@property (nonatomic, readonly) NSDate *endOfRollingWeekMidnight;
@property (nonatomic, readonly) NSDate *startOfRollingMonthMidnight;
@property (nonatomic, readonly) NSDate *endOfRollingMonthMidnight;
@property (nonatomic, readonly) NSDate *startOfRollingYearMidnight;
@property (nonatomic, readonly) NSDate *endOfRollingYearMidnight;

- (id)init;
- (void)dealloc;
- (_Bool)isDateInToday:(id)arg1;
- (_Bool)isDateInTomorrow:(id)arg1;
- (_Bool)isDateInYesterday:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithCalendar:(id)arg1;
- (void)flushCache;
- (id)_currentDate;
- (id)weekendDays;
- (_Bool)isDayOfWeekNumberOnWeekend:(id)arg1;
- (id)startOfRollingDay:(CDUnknownBlockType)arg1;
- (id)endOfRollingDay:(CDUnknownBlockType)arg1;
- (void)_setCurrentDate:(id)arg1;
- (void)_flushCacheAndNotifyObservers:(id)arg1;
- (void)_notifyObserversDidUpdateOnNotification:(id)arg1;
- (id)startOfRollingWeek:(CDUnknownBlockType)arg1;
- (id)endOfRollingWeek:(CDUnknownBlockType)arg1;
- (id)startOfRollingMonth:(CDUnknownBlockType)arg1;
- (id)endOfRollingMonth:(CDUnknownBlockType)arg1;
- (id)startOfRollingYear:(CDUnknownBlockType)arg1;
- (id)endOfRollingYear:(CDUnknownBlockType)arg1;
- (_Bool)isDateInThisCalendarMonth:(id)arg1;
- (_Bool)isDateInThisCalendarYear:(id)arg1;
- (_Bool)isDateWithinLastRollingMonth:(id)arg1;
- (_Bool)isDateWithinLastRollingYear:(id)arg1;

@end
