/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <QuartzCore/CALayer.h>

@class HKDateCache, NSDate, UIColor, UIFont;

@interface HKCalendarDayCell : CALayer

{
    long long _dayOfMonth;
    _Bool _selected;
    _Bool _representsToday;
    HKDateCache *_dateCache;
    CALayer *_circle;
    CALayer *_dayLabel;
    UIColor *_textColor;
    UIFont *_font;
    UIFont *_boldFont;
    double _dayDiameter;
    NSDate *_date;
}

@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic, readonly) CALayer *circle;
@property (nonatomic, readonly) CALayer *dayLabel;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *boldFont;
@property (nonatomic) double dayDiameter;
@property (copy, nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long dayOfMonth;
@property (nonatomic, readonly) _Bool representsToday;

+ (void)clearImageCache;

- (id)init;
- (id)debugDescription;
- (double)_roundedRectCornerRadius;
- (struct CGSize)circleSize;
- (id)_integerNumberFormatter;
- (id)initWithDateCache:(id)arg1;
- (void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2;
- (id)_reusedImageForDateIndex:(long long)arg1 color:(id)arg2;
- (void)layoutOnce;
- (struct CGSize)_roundedRectSizeForDayNumberString:(id)arg1;
- (void)updateDateTextForDayNumber:(long long)arg1 textColor:(id)arg2;

@end
