/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTriggerConfigurationViewController.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSString, UITableView;

@interface WFAppInFocusTriggerConfigurationViewController : WFTriggerConfigurationViewController

{
    NSMutableOrderedSet *_selectedApps;
    NSMutableArray *_displayNameOfSelectedApps;
    UITableView *_tableView;
    NSArray *_sections;
}

@property (retain, nonatomic) NSMutableOrderedSet *selectedApps;
@property (retain, nonatomic) NSMutableArray *displayNameOfSelectedApps;
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
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;
- (id)infoForSection:(long long)arg1;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (void)appSearchViewController:(id)arg1 didFinishWithApps:(id)arg2;
- (void)appSearchViewControllerDidCancel:(id)arg1;
- (void)updateDisplayNameOfSelectedApps;

@end
