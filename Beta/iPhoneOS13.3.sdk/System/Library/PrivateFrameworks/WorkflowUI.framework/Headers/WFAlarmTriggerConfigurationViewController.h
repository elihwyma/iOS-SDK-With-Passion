/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

@class MTAlarmDataSource, NSArray, NSString, UITableView;

@interface WFAlarmTriggerConfigurationViewController : WFTriggerConfigurationViewController

{
    UITableView *_tableView;
    NSArray *_sections;
    MTAlarmDataSource *_alarmDataSource;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) MTAlarmDataSource *alarmDataSource;
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
- (void)alarmChooserViewController:(id)arg1 didFinishWithChosenAlarms:(id)arg2;
- (void)alarmChooserViewControllerDidCancel:(id)arg1;
- (id)titleForCellInSection:(id)arg1 item:(id)arg2;
- (id)extraTextForCellInSection:(id)arg1 item:(id)arg2;
- (long long)accessoryTypeForCellInSection:(id)arg1 item:(id)arg2;
- (void)presentAlarmChooserViewController;

@end
