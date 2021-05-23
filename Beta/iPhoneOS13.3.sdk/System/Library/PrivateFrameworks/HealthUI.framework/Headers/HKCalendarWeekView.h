/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKCalendarDayCell, HKDateCache, NSArray, NSDate, NSMutableArray;

@protocol HKCalendarMonthTitleFormatting, HKCalendarWeekViewDelegate;

@interface HKCalendarWeekView : UIView

{
    NSMutableArray *_dayCells;
    HKDateCache *_dateCache;
    UIView<HKCalendarMonthTitleFormatting> *_monthTitleView;
    double _dateTopMargin;
    double _dateBottomMargin;
    double _leadingMargin;
    double _monthTitleTopMargin;
    double _monthTitleBottomMargin;
    double _dateDiameter;
    double _additionalSpacingPerRow;
    NSDate *_monthWeekStart;
    id <HKCalendarWeekViewDelegate> _delegate;
    long long _firstDayOfMonthCellIndex;
    long long _pressedDayOfWeek;
    HKCalendarDayCell *_pressedDayCell;
}

@property (retain, nonatomic) UIView<HKCalendarMonthTitleFormatting> *monthTitleView;
@property (nonatomic) double dateTopMargin;
@property (nonatomic) double dateBottomMargin;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double monthTitleTopMargin;
@property (nonatomic) double monthTitleBottomMargin;
@property (nonatomic) double dateDiameter;
@property (nonatomic) double additionalSpacingPerRow;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (copy, nonatomic) NSDate *monthWeekStart;
@property (weak, nonatomic) id <HKCalendarWeekViewDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *dayCells;
@property (nonatomic) long long firstDayOfMonthCellIndex;
@property (nonatomic) long long pressedDayOfWeek;
@property (retain, nonatomic) HKCalendarDayCell *pressedDayCell;

- (id)description;
- (_Bool)containsDate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (double)preferredHeight;
- (Class)cellClass;
- (_Bool)supportsRTL;
- (id)initWithDateCache:(id)arg1;
- (_Bool)containsMonthTitle;
- (Class)monthTitleClass;
- (void)selectedCalendarDay:(id)arg1;
- (void)reloadCells;
- (struct CGRect)frameForDayCell:(id)arg1;
- (id)currentWeekStartDate;
- (id)_getDayCellWithTouches:(id)arg1;
- (void)pressedOnCalendarDay:(long long)arg1 cell:(id)arg2 down:(_Bool)arg3;
- (id)_getDayCellWithTouchLocation:(struct CGPoint)arg1;
- (id)previousWeekStartDate;
- (id)nextWeekStartDate;

@end
