/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPickerView.h>

@class NSCalendar, NSDate, NSDateComponents, NSLocale, NSString, NSTimeZone, UIDatePicker, UIFont, UILabel, _UIDatePickerChineseCalendar, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface _UIDatePickerView : UIPickerView

{
    long long _loadingDate;
    NSDate *_userSuppliedDate;
    NSDate *_userSuppliedMinimumDate;
    NSDate *_userSuppliedMaximumDate;
    NSLocale *_compositeLocale;
    NSLocale *_userProvidedLocale;
    NSCalendar *_userProvidedCalendar;
    _UIDatePickerChineseCalendar *_chineseWrapperCalendar;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    NSDateComponents *_lastSelectedDateComponents;
    _Bool _allowsZeroTimeInterval;
    _UIDatePickerMode *_mode;
    NSTimeZone *_timeZone;
    double _timeInterval;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    UIDatePicker *_datePickerDelegate;
    id _delegateOfDatePicker;
    int _expectedAMPM;
    struct {
        unsigned int staggerTimeIntervals:1;
        unsigned int loadingDateOrTime:1;
        unsigned int highlightsToday:1;
        unsigned int usesBlackChrome:1;
    } _datePickerFlags;
}

@property (nonatomic) _Bool staggerTimeIntervals;
@property (copy, nonatomic) NSDateComponents *dateComponents;
@property (nonatomic) _Bool highlightsToday;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly, getter=_amPmValue) long long amPmValue;
@property (nonatomic, readonly, getter=_hrMinFont) UIFont *hrMinFont;
@property (nonatomic, readonly, getter=_lastSelectedDateComponents) NSDateComponents *lastSelectedDateComponents;
@property (nonatomic) long long datePickerMode;
@property (retain, nonatomic) NSLocale *userProvidedLocale;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSCalendar *userProvidedCalendar;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *minimumDate;
@property (copy, nonatomic) NSDate *maximumDate;
@property (nonatomic) double timeInterval;
@property (nonatomic) long long minuteInterval;
@property (weak, nonatomic) id delegateOfDatePicker;
@property (nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) _Bool usesBlackChrome;
@property (nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) _Bool allowsZeroCountDownDuration;
@property (nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) _Bool allowsZeroTimeInterval;
@property (nonatomic, readonly, getter=_hasCustomCalendar) _Bool hasCustomCalendar;
@property (nonatomic, readonly, getter=_hasCustomLocale) _Bool hasCustomLocale;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic, readonly, getter=_isTimeIntervalMode) _Bool isTimeIntervalMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (int)hour;
- (int)minute;
- (int)second;
- (id)shadowColor;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_setMode:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)setDate:(id)arg1 animated:(_Bool)arg2;
- (void)_setHidesLabels:(_Bool)arg1;
- (_Bool)_updateDateOrTime;
- (void)_setTextColor:(id)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned long long)arg1;
- (id)_labelTextForCalendarUnit:(unsigned long long)arg1;
- (void)_updateLabels:(_Bool)arg1;
- (long long)_selectionBarRowInComponent:(long long)arg1;
- (id)_minutesStringForHour:(long long)arg1 minutes:(long long)arg2;
- (id)_hoursStringForHour:(long long)arg1;
- (void)_rebuildCompositeLocale;
- (void)_datePickerReset:(id)arg1;
- (void)_todayChanged:(id)arg1;
- (_Bool)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(long long)arg1;
- (id)pickerImageNamePrefix;
- (id)_orientationImageSuffix;
- (_Bool)_isCurrentCalendar:(id)arg1;
- (void)_setDate:(id)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;
- (void)_doneLoadingDateOrTime;
- (void)_loadDate:(id)arg1 animated:(_Bool)arg2;
- (void)_updateEnabledCellsIncludingWMDCells:(_Bool)arg1;
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3 notify:(_Bool)arg4;
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(long long)arg2;
- (int)_selectedHourForColumn:(int)arg1;
- (void)_fadeLabelForCalendarUnit:(unsigned long long)arg1 toText:(id)arg2 animated:(_Bool)arg3;
- (int)_selectedMinuteForColumn:(int)arg1;
- (id)_labelForCalendarUnit:(unsigned long long)arg1 createIfNecessary:(_Bool)arg2;
- (void)_updateTextColorForCalendarUnitLabel:(id)arg1;
- (void)_updateLabelColors;
- (id)_contentViewForSizingLabelForPositioningInComponent:(long long)arg1;
- (id)_makeNewCalendarUnitLabel;
- (void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 relativeTo:(id)arg3 order:(long long)arg4;
- (void)_setLabel:(id)arg1 forCalendarUnit:(unsigned long long)arg2 animated:(_Bool)arg3;
- (double)_tableRowHeight;
- (_Bool)_showingDate;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;
- (void)_UIAppearance_setTextColor:(id)arg1;
- (void)_resetSelectionOfTables;
- (id)_viewForSelectedRowInComponent:(long long)arg1;
- (id)_existingLabelForCalendarUnit:(unsigned long long)arg1;

@end
