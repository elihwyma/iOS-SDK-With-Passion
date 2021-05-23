/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKSimpleDataEntryItem.h>

@class HKOrganDonationAddressCell, NSArray, NSDictionary, NSString, UIPickerView;

@interface HKOrganDonationAddressEntryItem : HKSimpleDataEntryItem

{
    HKOrganDonationAddressCell *_cell;
    NSString *_address1;
    NSString *_address2;
    NSString *_city;
    NSString *_state;
    NSString *_zipcode;
    UIPickerView *_statePicker;
    NSDictionary *_statesDict;
    NSArray *_sortedStateKeys;
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
- (id)formattedKeyAndValue;
- (void)updateCellDisplay;
- (void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2;
- (id)initWithRegistrant:(id)arg1;

@end
