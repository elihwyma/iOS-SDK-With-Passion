/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertySimpleEditingCell.h>

@class CNDatePickerContainerView, NSString, UIDatePicker, UIViewController;

__attribute__((visibility("hidden")))
@interface CNPropertyDateEditingCell : CNPropertySimpleEditingCell

{
    UIDatePicker *_datePicker;
    CNDatePickerContainerView *_datePickerContainerView;
    UIViewController *_contentViewController;
}

@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) CNDatePickerContainerView *datePickerContainerView;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)updateValueWithPropertyItem:(id)arg1;
- (void)labelButtonClicked:(id)arg1;
- (void)regainFocus;
- (void)localeUpdated:(id)arg1;
- (void)dateChanged:(id)arg1;
- (_Bool)_shouldUseYearlessPickerForDateComponents:(id)arg1;
- (void)applyCalendarAndDateToDatePicker;

@end
