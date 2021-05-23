/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKUIYearMonthView.h>

@class NSDateComponents;

@interface EKUIMiniMonthView : EKUIYearMonthView

{
    NSDateComponents *_dateComponents;
}

@property (retain, nonatomic) NSDateComponents *dateComponents;

+ (double)heightForInterfaceOrientation:(long long)arg1 windowSize:(struct CGSize)arg2 heightSizeClass:(long long)arg3;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)opaque;
- (id)headerFont;
- (_Bool)vibrant;
- (_Bool)showMonthName;
- (double)xInset;
- (double)yInset;
- (_Bool)showWeekDayInitials;
- (double)weekDayInitialsAdjustLeft;
- (double)weekDayInitialsAdjustTop;
- (double)daysXAdjustLeft;
- (double)daysYAdjustTop;
- (double)xSpacing;
- (double)ySpacing;
- (id)todayNumberFont;
- (id)dayNumberFont;
- (double)circleSizeForDoubleDigit;
- (double)circleSize;
- (double)circleFrameYAdjustment;
- (double)circleFrameXAdjustment;
- (double)todayTextYAdjustment;
- (double)todayNumberKerning;
- (double)headerXAdjust;
- (double)headerFontMaxSize;
- (double)headerFontMinSize;
- (double)headerFontKerning;
- (id)weekDayInitialsFont;
- (id)dayColorKey;
- (id)dayColor;
- (struct CGRect)frameForGridOfDays:(_Bool)arg1;
- (double)dayTextSize;
- (double)todayTextSize;
- (id)initWithCalendar:(id)arg1 dateComponents:(id)arg2;
- (double)_gridOfDaysYAdjustment;
- (double)_gridOfDaysHeightAdjustment;

@end
