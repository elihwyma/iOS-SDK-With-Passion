/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerWeekMonthDayView : UIView

{
    struct {
        unsigned int weekdayLast:1;
    } _datePickerWeekMonthDayViewFlags;
    UILabel *_dateLabel;
    UILabel *_weekdayLabel;
    NSString *_formattedDateString;
    double _weekdayWidth;
}

@property (nonatomic, readonly) UILabel *dateLabel;
@property (nonatomic, readonly) UILabel *weekdayLabel;
@property (copy, nonatomic) NSString *formattedDateString;
@property (nonatomic) double weekdayWidth;
@property (nonatomic) _Bool weekdayLast;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)_canBeReusedInPickerView;

@end
