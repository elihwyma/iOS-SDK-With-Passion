/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKCalendarDayCell.h>

@interface HKMonthDayCell : HKCalendarDayCell

{
    long long _dayOfWeek;
    long long _circleState;
}

@property (nonatomic, readonly) long long circleState;

+ (double)dayLabelFontSize;

- (void)dealloc;
- (void)setSelected:(_Bool)arg1;
- (id)initWithDateCache:(id)arg1;
- (void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2;
- (void)_updateFontAndCircle;
- (void)_setCircleState:(long long)arg1;
- (_Bool)_representsWeekendDay;
- (void)pressToTransition:(_Bool)arg1;

@end
