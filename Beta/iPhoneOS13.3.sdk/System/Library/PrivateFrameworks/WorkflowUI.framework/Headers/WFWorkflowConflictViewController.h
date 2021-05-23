/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSString, UIBarButtonItem, WFWorkflow, WFWorkflowConflict;

@protocol WFWorkflowConflictViewControllerDelegate;

@interface WFWorkflowConflictViewController : UITableViewController

{
    id <WFWorkflowConflictViewControllerDelegate> _delegate;
    WFWorkflowConflict *_conflict;
    UIBarButtonItem *_keepItem;
    WFWorkflow *_workflowBeingPreviewed;
}

@property (weak, nonatomic) UIBarButtonItem *keepItem;
@property (retain, nonatomic) WFWorkflow *workflowBeingPreviewed;
@property (weak, nonatomic) id <WFWorkflowConflictViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFWorkflowConflict *conflict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)cancelPressed;
- (id)initWithConflict:(id)arg1;
- (void)keepPressed;
- (void)updateKeepButton;
- (id)workflowForRow:(unsigned long long)arg1;

@end
