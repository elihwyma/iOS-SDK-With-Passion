/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class HUTriggerDurationPickerValue, NSArray, NSNumber, NSString, UIPickerView;

@protocol HUTriggerDurationPickerDelegate;

@interface HUTriggerDurationPickerCell : UITableViewCell

{
    id <HUTriggerDurationPickerDelegate> _delegate;
    UIPickerView *_pickerView;
    NSArray *_durationOptions;
    HUTriggerDurationPickerValue *_currentDurationValue;
}

@property (nonatomic, readonly) UIPickerView *pickerView;
@property (retain, nonatomic) NSArray *durationOptions;
@property (retain, nonatomic) HUTriggerDurationPickerValue *currentDurationValue;
@property (retain, nonatomic) NSNumber *currentDuration;
@property (weak, nonatomic) id <HUTriggerDurationPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_defaultDurationOptions;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_updateDurationOptions;
- (id)pickerDurationValue;

@end
