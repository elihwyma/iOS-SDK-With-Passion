/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

@class NSArray, NSString, UITableView;

@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController

{
    _Bool _showingPicker;
    UITableView *_tableView;
    NSArray *_sections;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic) _Bool showingPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;
- (id)infoForSection:(long long)arg1;
- (void)timeOffsetPickerViewController:(id)arg1 didSelectOffset:(unsigned long long)arg2;
- (void)timeOffsetPickerViewControllerDidCancel:(id)arg1;
- (id)titleForIndexPath:(id)arg1;
- (void)presentOffsetPickerViewControllerForEvent:(unsigned long long)arg1;
- (void)updateTriggerTimeFromDate:(id)arg1;
- (void)timePickerUpdated:(id)arg1;

@end
