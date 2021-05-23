/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSCalendar, NSDate, NSLocale, NSTimeZone, UIColor, _UIDatePickerView;

@interface UIDatePicker : UIControl <Swift>

{
    _UIDatePickerView *_pickerView;
    _Bool _useCurrentDateDuringDecoding;
    _Bool shouldAnimateSetDateCall;
}

@property (nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) _Bool usesBlackChrome;
@property (nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) _Bool drawsBackground;
@property (nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) _Bool allowsZeroCountDownDuration;
@property (nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) _Bool allowsZeroTimeInterval;
@property (nonatomic, readonly, getter=_dateUnderSelectionBar) NSDate *dateUnderSelectionBar;
@property (nonatomic, readonly, getter=_contentWidth) double contentWidth;
@property (nonatomic, readonly, getter=_isTimeIntervalMode) _Bool isTimeIntervalMode;
@property (nonatomic, getter=_useCurrentDateDuringDecoding, setter=_setUseCurrentDateDuringDecoding:) _Bool useCurrentDateDuringDecoding;
@property (retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property (nonatomic) double timeInterval;
@property (nonatomic, getter=_shouldAnimateSetDateCall, setter=_setShouldAnimateSetDateCall:) _Bool shouldAnimateSetDateCall;
@property (nonatomic) long long datePickerMode;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;
@property (nonatomic) double countDownDuration;
@property (nonatomic) long long minuteInterval;

- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (int)hour;
- (int)minute;
- (int)second;
- (id)_locale;
- (void)setBounds:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (void)_populateArchivedSubviews:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_emitValueChanged;
- (void)_installPickerView:(id)arg1;
- (void)_setUpInitialValues;
- (void)_setLocale:(id)arg1;
- (void)setDate:(id)arg1 animated:(_Bool)arg2;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (void)willReceiveBindingsUpdate;
- (void)didReceiveBindingsUpdate;
- (id)dateComponents;
- (void)setDateComponents:(id)arg1;
- (void)setStaggerTimeIntervals:(_Bool)arg1;
- (void)setHighlightsToday:(_Bool)arg1;
- (void)setDate:(id)arg1 animate:(_Bool)arg2;
- (void)_setHidesLabels:(_Bool)arg1;
- (void)_setHighlightsToday:(_Bool)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned long long)arg1;
- (id)_labelTextForCalendarUnit:(unsigned long long)arg1;
- (id)_lastSelectedDateComponents;

@end
