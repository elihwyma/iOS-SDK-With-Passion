/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKRecurrenceChooserController.h>

@class EKRecurrenceOrdinalPickerViewController, NSString, UITableViewCell;

@interface EKRecurrenceOrdinalChooserController : EKRecurrenceChooserController

{
    EKRecurrenceOrdinalPickerViewController *_pickerViewController;
    UITableViewCell *_cell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDate:(id)arg1;
- (long long)numberOfRows;
- (long long)frequency;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (void)frequencyPickerUpdated:(id)arg1;

@end
