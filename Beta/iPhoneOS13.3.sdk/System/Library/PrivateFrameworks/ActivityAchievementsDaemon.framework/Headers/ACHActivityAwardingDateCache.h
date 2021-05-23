/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class NSCalendar, NSDate, NSDateComponents, NSNumber;

@interface ACHActivityAwardingDateCache : NSObject

{
    NSNumber *_dayOfWeekForToday;
    NSNumber *_dayOfWeekForLastDayOfFitnessWeek;
    NSNumber *_numberOfDaysInThisMonth;
    NSNumber *_dayOfMonthForToday;
    NSDateComponents *_currentDateComponents;
    NSCalendar *_calendar;
    NSDate *_currentDate;
}

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSDateComponents *currentDateComponents;
@property (nonatomic, readonly) NSNumber *dayOfWeekForToday;
@property (nonatomic, readonly) NSNumber *dayOfWeekForLastDayOfFitnessWeek;
@property (nonatomic, readonly) NSNumber *numberOfDaysInThisMonth;
@property (nonatomic, readonly) NSNumber *dayOfMonthForToday;

- (id)initWithCalendar:(id)arg1;
- (void)_clearDateVariables;

@end
