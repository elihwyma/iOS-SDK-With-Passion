/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

@class NSArray, NSDateFormatter, NSString, UITableView;

@interface WFLocationTriggerConfigurationViewController : WFTriggerConfigurationViewController

{
    _Bool _isLocationBasedAlertsEnabled;
    _Bool _isArrive;
    UITableView *_tableView;
    NSArray *_sections;
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic) _Bool isLocationBasedAlertsEnabled;
@property (nonatomic, readonly) _Bool isArrive;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
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
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;
- (id)infoForSection:(long long)arg1;
- (void)timeRangePickerViewController:(id)arg1 didPickStartTime:(id)arg2 endTime:(id)arg3;
- (void)timeRangePickerViewControllerDidCancel:(id)arg1;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)locationPickerDidCancel:(id)arg1;
- (void)checkLocationAuthorization;
- (id)textForSummaryFooterView;
- (void)presentNavigationControllerWithRootViewController:(id)arg1;

@end
