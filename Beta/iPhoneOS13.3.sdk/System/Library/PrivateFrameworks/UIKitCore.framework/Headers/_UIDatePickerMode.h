/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateComponents, NSNumberFormatter, NSString, UIColor, UIFont, _UIDatePickerView;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode : NSObject

{
    NSDateComponents *_selectedDateComponents;
    NSDateComponents *_baseDateComponents;
    unsigned long long *_elements;
    long long _yearsSinceBaseDate;
    struct _NSRange _maxDayRange;
    struct _NSRange _maxMonthRange;
    NSString *_localizedFormatString;
    NSArray *_dateFormatters;
    UIColor *_todayTextColor;
    UIFont *_amPmFont;
    UIFont *_font;
    UIFont *_defaultTimeFont;
    NSString *_amString;
    NSString *_pmString;
    NSDateComponents *_todayDateComponents;
    NSNumberFormatter *_formatter;
    _UIDatePickerView *_datePickerView;
    _Bool _isUsingJapaneseCalendar;
    long long _minuteInterval;
    double _todaySinceReferenceDate;
    NSDate *_minimumDate;
    NSDateComponents *_minimumDateComponents;
    NSDate *_maximumDate;
    NSDateComponents *_maximumDateComponents;
    unsigned long long _numberOfComponents;
    NSDate *_baseDate;
    NSDate *_originatingDate;
}

@property (weak, nonatomic) _UIDatePickerView *datePickerView;
@property (nonatomic, readonly) UIFont *amPmFont;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) UIFont *defaultTimeFont;
@property (nonatomic, readonly) UIFont *sizedFont;
@property (nonatomic, readonly) NSString *amString;
@property (nonatomic, readonly) NSString *pmString;
@property (nonatomic) unsigned long long numberOfComponents;
@property (nonatomic) unsigned long long *elements;
@property (retain, nonatomic) NSString *localizedFormatString;
@property (retain, nonatomic) NSDate *baseDate;
@property (retain, nonatomic) NSDateComponents *baseDateComponents;
@property (nonatomic) long long yearsSinceBaseDate;
@property (retain, nonatomic) NSDate *originatingDate;
@property (retain, nonatomic) NSDateComponents *selectedDateComponents;
@property (nonatomic, readonly) long long datePickerMode;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic, readonly) long long displayedCalendarUnits;
@property (nonatomic, readonly) UIColor *todayTextColor;
@property (nonatomic) long long minuteInterval;
@property (retain, nonatomic) NSDateComponents *todayDateComponents;
@property (nonatomic) double todaySinceReferenceDate;
@property (nonatomic, readonly) NSDate *minimumDate;
@property (nonatomic, readonly) NSDateComponents *minimumDateComponents;
@property (nonatomic, readonly) NSDate *maximumDate;
@property (nonatomic, readonly) NSDateComponents *maximumDateComponents;
@property (nonatomic, readonly) double totalComponentWidth;
@property (nonatomic, readonly, getter=is24Hour) _Bool is24Hour;
@property (nonatomic, readonly, getter=isTimeIntervalMode) _Bool isTimeIntervalMode;

+ (void)initialize;
+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;
+ (id)newDateFromGregorianYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4;
+ (id)_datePickerModeWithMode:(long long)arg1 datePickerView:(id)arg2;
+ (id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)calendar;
- (id)timeZone;
- (id)locale;
- (void)noteCalendarChanged;
- (void)_shouldReset:(id)arg1;
- (void)resetComponentWidths;
- (id)dateFormatterForCalendarUnit:(unsigned long long)arg1;
- (long long)componentForCalendarUnit:(unsigned long long)arg1;
- (id)calendarForFormatters;
- (unsigned long long)calendarUnitForComponent:(long long)arg1;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (double)totalComponentWidthWithFont:(id)arg1;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (void)fixUpElementsForRTL;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (void)clearBaseDate;
- (long long)_yearlessYearForMonth:(long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (struct _NSRange)rangeForCalendarUnit:(unsigned long long)arg1;
- (long long)_incrementForStaggeredTimeIntervals;
- (id)_dateForYearRow:(long long)arg1;
- (long long)secondForRow:(long long)arg1;
- (long long)minuteForRow:(long long)arg1;
- (long long)hourForRow:(long long)arg1;
- (long long)dayForRow:(long long)arg1;
- (long long)monthForRow:(long long)arg1;
- (long long)yearForRow:(long long)arg1;
- (long long)eraForYearRow:(long long)arg1;
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (id)_dateByEnsuringValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;
- (long long)rowForValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2 currentRow:(long long)arg3;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(_Bool)arg2;
- (void)updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1;
- (_Bool)_monthExists:(long long)arg1 inYear:(long long)arg2;
- (long long)_numberOfDaysInDateComponents:(id)arg1;
- (id)fontForCalendarUnit:(unsigned long long)arg1;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (_Bool)_shouldEnableValueForRow:(long long)arg1 column:(long long)arg2;
- (_Bool)_isComponentScrolling:(long long)arg1;
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (_Bool)_scrollingAnyColumnExcept:(int)arg1;
- (double)componentWidthForTwoDigitCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (double)widthForComponent:(long long)arg1 maxWidth:(double)arg2;
- (long long)validateValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (void)loadDate:(id)arg1 animated:(_Bool)arg2;
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3;
- (_Bool)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;
- (void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2;

@end
