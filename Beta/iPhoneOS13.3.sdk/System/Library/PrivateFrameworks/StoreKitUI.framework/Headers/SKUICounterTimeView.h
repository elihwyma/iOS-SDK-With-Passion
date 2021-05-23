/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSDate, SKUIClientContext, UIColor, UIFont, _SKUICounterTimeFieldView;

__attribute__((visibility("hidden")))
@interface SKUICounterTimeView : UIView

{
    SKUIClientContext *_clientContext;
    _SKUICounterTimeFieldView *_daysFieldView;
    NSDate *_endDate;
    _SKUICounterTimeFieldView *_hoursFieldView;
    long long _lastTimeValue;
    _SKUICounterTimeFieldView *_minutesFieldView;
    _SKUICounterTimeFieldView *_secondsFieldView;
    UIColor *_textColor;
    UIFont *_valueFont;
    unsigned long long _visibleFields;
}

@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) unsigned long long visibleFields;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithClientContext:(id)arg1;
- (void)reloadTimeValue;
- (void)_setValuesUsingTimestamp:(long long)arg1;
- (id)_allFieldViews;
- (id)_visibleFieldViews;
- (double)_fieldSpacingForFieldCount:(long long)arg1 fieldWidth:(double)arg2 totalWidth:(double)arg3;

@end
