/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, WFAddToHomeIconPreviewCell, WFHomeScreenIcon, WFWorkflow, WFWorkflowWizardNameCell;

@protocol WFAddToHomeScreenViewControllerDelegate;

@interface WFAddToHomeScreenViewController : UITableViewController <Swift>

{
    id <WFAddToHomeScreenViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    WFHomeScreenIcon *_icon;
    WFAddToHomeIconPreviewCell *_previewCell;
    WFWorkflowWizardNameCell *_editorCell;
}

@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFHomeScreenIcon *icon;
@property (retain, nonatomic) WFAddToHomeIconPreviewCell *previewCell;
@property (retain, nonatomic) WFWorkflowWizardNameCell *editorCell;
@property (weak, nonatomic) id <WFAddToHomeScreenViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (id)initWithWorkflow:(id)arg1;
- (void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2;
- (void)workflowWizardNameCellDidSelectEditIcon:(id)arg1;
- (void)registerCells;
- (void)presentPickerControllerWithSourceType:(long long)arg1;
- (void)didTapAdd;

@end
