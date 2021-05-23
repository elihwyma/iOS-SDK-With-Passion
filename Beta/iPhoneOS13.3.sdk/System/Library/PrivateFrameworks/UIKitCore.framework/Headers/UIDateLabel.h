/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UILabel.h>

@class NSCalendar, NSDate, NSString, UIFont;

@interface UIDateLabel : UILabel

{
    _Bool _forceTimeOnly;
    NSDate *_date;
    _Bool _boldForAllLocales;
    NSDate *_yesterday;
    NSDate *_today;
    NSDate *_noon;
    NSDate *_tomorrow;
    NSDate *_previousWeek;
    NSCalendar *_calendar;
    _Bool _shouldRecomputeText;
    double _paddingFromTimeToDesignator;
}

@property (nonatomic, readonly) _Bool use24HourTime;
@property (nonatomic, readonly) _Bool timeDesignatorAppearsBeforeTime;
@property (nonatomic, readonly) struct CGSize timeDesignatorSize;
@property (nonatomic, readonly, getter=_dateString) NSString *dateString;
@property (nonatomic) _Bool shouldRecomputeText;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double timeInterval;
@property (nonatomic, readonly) UIFont *timeDesignatorFont;
@property (nonatomic, readonly) NSString *timeDesignator;
@property (nonatomic) _Bool forceTimeOnly;
@property (nonatomic) _Bool boldForAllLocales;
@property (nonatomic) double paddingFromTimeToDesignator;

+ (id)_dateFormatter;
+ (id)_relativeDateFormatter;
+ (id)defaultFont;
+ (id)amString;
+ (id)pmString;
+ (id)_timeOnlyDateFormatter;
+ (id)_weekdayDateFormatter;

- (void)dealloc;
- (void)invalidate;
- (id)_calendar;
- (id)text;
- (double)_yesterday;
- (double)_today;
- (double)_tomorrow;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)font;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)_stringDrawingContext;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_recomputeTextIfNecessary;
- (id)_todayDate;
- (id)_dateWithDayDiffFromToday:(long long)arg1;
- (void)_didUpdateDate;
- (double)_lastWeek;
- (double)_noon;

@end
