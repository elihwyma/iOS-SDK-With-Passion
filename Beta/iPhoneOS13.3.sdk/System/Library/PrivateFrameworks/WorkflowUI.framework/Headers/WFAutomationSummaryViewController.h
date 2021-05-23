/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView, WFConfiguredTriggerRecord, WFTrigger, WFWorkflow;

@protocol WFAutomationSummaryViewControllerDelegate;

@interface WFAutomationSummaryViewController : UIViewController

{
    id <WFAutomationSummaryViewControllerDelegate> _delegate;
    WFConfiguredTriggerRecord *_triggerRecord;
    WFTrigger *_trigger;
    WFWorkflow *_workflow;
    unsigned long long _mode;
    NSArray *_actionIcons;
    NSArray *_sections;
    UITableView *_tableView;
}

@property (nonatomic, readonly) WFConfiguredTriggerRecord *triggerRecord;
@property (nonatomic, readonly) WFTrigger *trigger;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSArray *actionIcons;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) UITableView *tableView;
@property (weak, nonatomic) id <WFAutomationSummaryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isModalInPresentation;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateUI;
- (void)didTapDone:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 workflow:(id)arg2 mode:(unsigned long long)arg3;
- (void)loadActionDescriptionIcons;
- (void)testAutomation;
- (void)enabledSwitchChanged:(id)arg1;
- (void)promptSwitchChanged:(id)arg1;

@end
