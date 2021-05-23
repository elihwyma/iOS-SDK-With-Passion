/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIPickerView;

@protocol EKRecurrenceOrdinalPickerViewControllerDelegate;

@interface EKRecurrenceOrdinalPickerViewController : UIViewController

{
    id <EKRecurrenceOrdinalPickerViewControllerDelegate> _delegate;
}

@property (nonatomic, readonly) UIPickerView *pickerView;
@property id <EKRecurrenceOrdinalPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (int)ordinalValue;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (id)_leftColumn;
- (id)_rightColumn;
- (int)dayMask;

@end
