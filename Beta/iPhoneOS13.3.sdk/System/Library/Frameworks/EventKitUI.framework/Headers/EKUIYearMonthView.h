/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKCalendarDate, EKUIOverlayCalendarSignificantDatesProvider, NSCalendar, NSSet, NSString, UIColor, UIFont;

@interface EKUIYearMonthView : UIView

{
    EKCalendarDate *_endCalendarDate;
    NSString *_monthString;
    long long _firstDayIndex;
    long long _daysInWeek;
    long long _todayIndex;
    NSSet *_firstOfOverlayMonthIndices;
    NSSet *_firstOfOverlayYearIndices;
    NSCalendar *_calendar;
    _Bool _computeCircleFrameWithoutAdjustments;
    EKCalendarDate *_calendarDate;
    EKUIOverlayCalendarSignificantDatesProvider *_overlaySignificantDatesProvider;
    double _circleSizeForDoubleDigit;
}

@property (nonatomic, readonly) double xInset;
@property (nonatomic, readonly) double yInset;
@property (nonatomic, readonly) double headerXAdjust;
@property (nonatomic, readonly) double headerFontMaxSize;
@property (nonatomic, readonly) double headerFontMinSize;
@property (nonatomic, readonly) UIFont *headerFont;
@property (nonatomic, readonly) double headerFontKerning;
@property (nonatomic, readonly) UIFont *dayNumberFont;
@property (nonatomic, readonly) UIFont *todayNumberFont;
@property (nonatomic, readonly) double todayNumberKerning;
@property (nonatomic, readonly) double dayTextSize;
@property (nonatomic, readonly) double todayTextSize;
@property (nonatomic, readonly) double circleSize;
@property (nonatomic, readonly) double circleSizeForDoubleDigit;
@property (nonatomic, readonly) double daysXAdjustLeft;
@property (nonatomic, readonly) double daysYAdjustTop;
@property (nonatomic, readonly) double xSpacing;
@property (nonatomic, readonly) double ySpacing;
@property (nonatomic, readonly) _Bool showWeekDayInitials;
@property (nonatomic, readonly) double weekDayInitialsAdjustLeft;
@property (nonatomic, readonly) double weekDayInitialsAdjustTop;
@property (nonatomic, readonly) _Bool opaque;
@property (nonatomic, readonly) _Bool showMonthName;
@property (nonatomic, readonly) _Bool vibrant;
@property (nonatomic, readonly) double circleFrameXAdjustment;
@property (nonatomic, readonly) double circleFrameYAdjustment;
@property (nonatomic, readonly) double todayTextYAdjustment;
@property (nonatomic, readonly) double dayNumberKerning;
@property (nonatomic, readonly) _Bool computeCircleFrameWithoutAdjustments;
@property (nonatomic, readonly) double roundedRectCornerRadius;
@property (nonatomic, readonly) NSString *dayColorKey;
@property (nonatomic, readonly) UIColor *dayColor;
@property (nonatomic, readonly) UIFont *weekDayInitialsFont;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) long long daysInWeek;
@property (retain, nonatomic) EKCalendarDate *calendarDate;
@property (retain, nonatomic) EKUIOverlayCalendarSignificantDatesProvider *overlaySignificantDatesProvider;

+ (id)_defaultTextColor;
+ (double)heightForInterfaceOrientation:(long long)arg1 windowSize:(struct CGSize)arg2 heightSizeClass:(long long)arg3;

- (id)description;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (void)localeChanged;
- (void)_reloadCachedValues;
- (id)_imageForMonthName:(id)arg1;
- (struct CGPoint)_monthNameOriginPoint;
- (id)_weekDayInitialsImage;
- (id)_imageForMonthDays:(long long)arg1 size:(struct CGSize)arg2 underlineThickness:(double)arg3;
- (id)_imageForDayNumber:(id)arg1 size:(struct CGSize)arg2 underlineThickness:(double)arg3;
- (void)_getTodayNumberTextFrame:(struct CGRect *)arg1 circleFrame:(struct CGRect *)arg2;
- (_Bool)_shouldUseRoundedRectInsteadOfCircle;
- (id)_todayAttributes;
- (void)_updateToday;
- (struct CGSize)roundedRectSizeForDayNumberString:(id)arg1;
- (void)_updateFirstOfMonthAndYearIndices;
- (_Bool)containsCalendarDate:(id)arg1;
- (void)_warmImageCache;
- (_Bool)isCurrentMonth;
- (id)monthNameForDate:(id)arg1;
- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2;
- (_Bool)pointIsAboveMonthNameBaseline:(struct CGPoint)arg1;
- (void)updateToday;
- (struct CGRect)frameForGridOfDays:(_Bool)arg1;
- (struct CGPoint)headerOrigin;
- (void)pulseTodayCircle;
- (struct CGRect)frameForTodayHighlight;
- (id)monthString;
- (void)overlaySignificantDatesChangedInRange:(id)arg1;
- (double)minHeaderFontSizeUsed;

@end
