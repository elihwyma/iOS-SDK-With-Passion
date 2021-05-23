/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class FUScrollWheel, NSArray, NSDate, NSDateFormatter, NSMutableArray, NSString, UIColor, UILabel;

@protocol FUDatePickerDelegate;

@interface FUDatePicker : UIView

{
    unsigned long long _monthOffset;
    unsigned long long _dayOffset;
    long long _yearOrder;
    long long _monthOrder;
    long long _dayOrder;
    unsigned long long _numRowsMonth;
    unsigned long long _numRowsDate;
    unsigned long long _numRowsYear;
    NSArray *_monthNames;
    NSArray *_dayValues;
    NSMutableArray *_yearsWithNames;
    UILabel *_dayLabel;
    UILabel *_yearLabel;
    UILabel *_monthLabel;
    NSDateFormatter *_dateFormatter;
    _Bool _firstResponderShouldChange;
    _Bool _displayEra;
    UIColor *_tintColor;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    long long _initialWheelType;
    id <FUDatePickerDelegate> _delegate;
    NSDate *_date;
    FUScrollWheel *_monthWheel;
    FUScrollWheel *_dayWheel;
    FUScrollWheel *_yearWheel;
}

@property (retain, nonatomic) FUScrollWheel *monthWheel;
@property (retain, nonatomic) FUScrollWheel *dayWheel;
@property (retain, nonatomic) FUScrollWheel *yearWheel;
@property (weak, nonatomic) id <FUDatePickerDelegate> delegate;
@property (copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setDate:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 tintColor:(id)arg2 initialWheelType:(long long)arg3 shouldEnableCrown:(_Bool)arg4 minimumDate:(id)arg5 maximumDate:(id)arg6;
- (id)_enumerateDayValues;
- (id)_enumerateDayValuesFromFormatter:(id)arg1;
- (void)_updateDayRangeReloadingWheel:(_Bool)arg1;
- (void)_updateSpinnersAnimated:(_Bool)arg1;
- (id)_wheelOfType:(long long)arg1;
- (unsigned long long)numberOfRowsInScrollWheel:(id)arg1;
- (id)scrollWheel:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (void)scrollWheel:(id)arg1 didChangeCurrentIndexTo:(unsigned long long)arg2;
- (void)tappedScrollWheel:(id)arg1;
- (_Bool)scrollWheelShouldBecomeFirstResponder:(id)arg1;
- (id)dateWheel;

@end
