/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UITableViewController.h>

@class NSDateComponentsFormatter, STAllowance;

__attribute__((visibility("hidden")))
@interface STIntroAppLimitsTableViewController : UITableViewController

{
    _Bool _showingAllCategories;
    _Bool _showingDatePicker;
    STAllowance *_allowance;
    NSDateComponentsFormatter *_timeAmountFormatter;
}

@property _Bool showingAllCategories;
@property _Bool showingDatePicker;
@property (readonly) NSDateComponentsFormatter *timeAmountFormatter;
@property (readonly) STAllowance *allowance;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)_datePickerChanged:(id)arg1;
- (void)_stIntroAppLimitsTableViewControllerCommonInit;
- (id)_selectedCategories;

@end
