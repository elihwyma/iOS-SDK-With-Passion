/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

@class NSArray, NSString, UITableView;

@interface WFBluetoothTriggerConfigurationViewController : WFTriggerConfigurationViewController

{
    NSArray *_allDevices;
    UITableView *_tableView;
    NSArray *_sections;
}

@property (copy, nonatomic) NSArray *allDevices;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)triggerTableViewController:(id)arg1 didFinishWithAnySelected:(_Bool)arg2 orSelectedOptions:(id)arg3;
- (void)triggerTableViewControllerDidCancel:(id)arg1;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;
- (id)infoForSection:(long long)arg1;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (void)fetchBluetoothDevices;
- (void)finishWithDevices:(id)arg1;

@end
