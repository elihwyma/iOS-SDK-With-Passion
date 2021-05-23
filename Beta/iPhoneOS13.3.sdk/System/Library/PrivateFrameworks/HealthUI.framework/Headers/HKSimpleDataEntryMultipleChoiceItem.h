/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKSimpleDataEntryItem.h>

@class HKSimpleDataEntryPlainTextCell, NSArray, NSNumber, NSString, UIPickerView;

@interface HKSimpleDataEntryMultipleChoiceItem : HKSimpleDataEntryItem

{
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSNumber *_chosenIndex;
    NSArray *_choiceDisplayValues;
    NSArray *_choices;
    UIPickerView *_picker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)cell;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 choices:(id)arg3 choiceDisplayNames:(id)arg4 defaultChoice:(id)arg5;
- (id)formattedKeyAndValue;
- (void)_setupPlaceholder;
- (void)updateCellDisplay;
- (void)_setTextForInputTextField:(id)arg1;

@end
