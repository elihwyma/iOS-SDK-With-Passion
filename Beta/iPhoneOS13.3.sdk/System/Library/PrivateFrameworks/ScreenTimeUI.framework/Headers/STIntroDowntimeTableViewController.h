/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UITableViewController.h>

@class NSDateFormatter, STDeviceBedtime;

__attribute__((visibility("hidden")))
@interface STIntroDowntimeTableViewController : UITableViewController

{
    STDeviceBedtime *_bedtime;
    long long _datePickerVisibility;
    NSDateFormatter *_downtimeFormatter;
}

@property long long datePickerVisibility;
@property (readonly) NSDateFormatter *downtimeFormatter;
@property (readonly) STDeviceBedtime *bedtime;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_datePickerChanged:(id)arg1;
- (void)_stIntroDowntimeTableViewControllerCommonInit;
- (long long)_tableRowForStartLabelRow;
- (long long)_tableRowForEndLabelRow;
- (long long)_tableRowForDatePicker;

@end
