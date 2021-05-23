/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@interface CUIKRecurrenceRuleDescriptionGenerator : CUIKDescriptionGenerator

+ (id)_daysOfWeek;
+ (id)localizedOfMonthStringForMonth:(id)arg1;
+ (long long)daysTypeForDayArray:(id)arg1;
+ (id)_andDaysOfWeekString:(id)arg1;
+ (id)_weekDayPositionAsString:(long long)arg1;
+ (id)_orDaysOfWeekString:(id)arg1;
+ (id)_dayOfMonthAsString:(long long)arg1;
+ (id)_numberedWeekDayString:(id)arg1;
+ (id)_customDayCombinationDescription:(id)arg1;

- (id)naturalLanguageDescriptionForRecurrenceRule:(id)arg1 withStartDate:(id)arg2;

@end
