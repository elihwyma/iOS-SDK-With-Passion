/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDateFormatter, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator

{
    NSObject<OS_dispatch_queue> *_serialFormatterEditQueue;
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_abbrevDayFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_standardTimeFormatter;
    NSDateFormatter *_customFormatter;
    NSDateFormatter *_fullStyleDateFormatter;
    NSDateFormatter *_dayOfWeekFormatter;
    NSMutableDictionary *_longFormatters;
}

+ (id)sharedGenerator;
+ (id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(_Bool)arg2;
+ (id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(_Bool)arg2;
+ (id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(_Bool)arg2;
+ (id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)arg1 generateLowercaseString:(_Bool)arg2;

- (id)init;
- (id)timeFormatter;
- (id)dateStringForDate:(id)arg1 allDay:(_Bool)arg2 standalone:(_Bool)arg3 shortFormat:(_Bool)arg4;
- (void)_invalidateFormatters;
- (id)timeStringForDate:(id)arg1 inTimeZone:(id)arg2;
- (id)dateStringForDate:(id)arg1 allDay:(_Bool)arg2 shortFormat:(_Bool)arg3;
- (id)_customFormatter;
- (id)standardTimeFormatter;
- (id)stringForDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(_Bool)arg3 lowerCase:(_Bool)arg4;
- (id)dayFormatter;
- (void)_initializeFormatters;
- (id)_dateFormatterWithLongFormat:(id)arg1;
- (id)_stringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 withLongFormatString:(id)arg3 useAbbreviatedFormats:(_Bool)arg4 lowerCase:(_Bool)arg5;
- (id)abbreviatedDayFormatter;
- (id)formatterForLongFormat:(id)arg1;
- (id)fullStyleDateFormatter;
- (id)_timeStringForDate:(id)arg1;
- (id)dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(_Bool)arg3 standalone:(_Bool)arg4 shortFormat:(_Bool)arg5;
- (id)_dateStringForDate:(id)arg1 relativeToReferenceDate:(id)arg2 allDay:(_Bool)arg3 shortFormat:(_Bool)arg4 lowercase:(_Bool)arg5;
- (id)dayOfWeekFormatter;

@end
