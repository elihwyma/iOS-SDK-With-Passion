/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSLocale, NSString, NSTimeZone;

@interface PLDateRangeFormatter : NSObject

{
    _Bool _includeDayNumbers;
    _Bool _includeDayNumbersWhenMonthsDiffer;
    _Bool _useRelativeDayFormatting;
    _Bool _useShortMonths;
    _Bool _useShortDaysInRanges;
    _Bool _useTime;
    _Bool _yearOnly;
    _Bool _monthOnly;
    _Bool _timeOnly;
    NSDateFormatter *_sameDayDateFormatter;
    NSDateFormatter *_sameDayNoYearDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    NSDateFormatter *_yearDateFormatter;
    NSDateFormatter *_monthDateFormatter;
    NSDateFormatter *_relativeDateFormatter;
    struct UDateIntervalFormat *_monthDayIntervalFormat;
    struct UDateIntervalFormat *_monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *_differentMonthDayIntervalFormat;
    struct UDateIntervalFormat *_differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *_dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat *_timeIntervalFormat;
    struct UDateIntervalFormat *_monthIntervalFormat;
    struct UDateIntervalFormat *_yearIntervalFormat;
    id _currentLocaleDidChangeNotificationObserver;
    id _currentTimeZoneDidChangeNotificationObserver;
    id _significantTimeChangeNotificationObserver;
    _Bool _autoUpdateOnChanges;
    _Bool _useLocalDates;
    _Bool _shouldOmitYear;
    NSLocale *_locale;
    NSTimeZone *_timeZone;
}

@property (nonatomic) _Bool autoUpdateOnChanges;
@property (nonatomic) _Bool useLocalDates;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) _Bool shouldOmitYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_handleNotification:(id)arg1;
- (void)configureForFormatPreset:(unsigned long long)arg1;
- (id)initWithFormatPreset:(unsigned long long)arg1 configurationBlock:(CDUnknownBlockType)arg2;
- (id)initWithFormatPreset:(unsigned long long)arg1 autoUpdateOnChanges:(_Bool)arg2;
- (void)_updateTimeZone;
- (void)_updateFormatters;
- (id)_sameMonthTemplate;
- (id)_dayTemplate;
- (id)_dayDifferentMonthsTemplate;
- (void)_updateSameDayDateFormatter;
- (void)_updateSameDayNoYearDateFormatter;
- (void)_updateDayOfTheWeekDateFormatter;
- (void)_updateYearDateFormatter;
- (void)_updateMonthDateFormatter;
- (void)_updateRelativeDateFormatter;
- (void)_updateMonthDayIntervalFormat;
- (void)_updateMonthDayNoYearIntervalFormat;
- (void)_updateDifferentMonthDayIntervalFormat;
- (void)_updateDifferentMonthDayNoYearIntervalFormat;
- (void)_updateDayOfTheWeekIntervalFormat;
- (void)_updateTimeIntervalFormat;
- (void)_updateMonthIntervalFormat;
- (void)_updateYearIntervalFormat;
- (id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3;
- (id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)formattedDate:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;

@end
