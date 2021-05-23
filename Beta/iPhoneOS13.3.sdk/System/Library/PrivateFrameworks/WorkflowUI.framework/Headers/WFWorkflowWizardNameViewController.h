/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, WFIconComposeViewController, WFWorkflow, WFWorkflowWizardNameConfiguration;

@protocol WFWorkflowWizardNameViewControllerDelegate;

@interface WFWorkflowWizardNameViewController : UITableViewController <Swift>

{
    id <WFWorkflowWizardNameViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    WFWorkflowWizardNameConfiguration *_configuration;
    NSString *_updatedName;
    WFIconComposeViewController *_iconComposeViewController;
}

@property (retain, nonatomic) NSString *updatedName;
@property (weak, nonatomic) WFIconComposeViewController *iconComposeViewController;
@property (weak, nonatomic) id <WFWorkflowWizardNameViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (retain, nonatomic) WFWorkflowWizardNameConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didTapDone;
- (id)infoText;
- (id)nameCell;
- (void)workflowWizardNameCellDidFinishEditing:(id)arg1;
- (void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2;
- (void)workflowWizardNameCellDidSelectEditIcon:(id)arg1;
- (void)workflowWizardNameSuggestionCellDidSelectSuggestedPhrase:(id)arg1;
- (id)initWithWorkflow:(id)arg1 configuration:(id)arg2;
- (void)updateDoneButtonForName:(id)arg1;
- (void)iconComposeViewControllerDidTapDone;
- (id)workflowName;
- (id)suggestedPhrases;
- (id)nameSuggestionCell;
- (void)updateNameCell:(id)arg1;
- (id)dequeueNameCellAtIndexPath:(id)arg1;
- (id)dequeueNameSuggestionCellAtIndexPath:(id)arg1;

@end
