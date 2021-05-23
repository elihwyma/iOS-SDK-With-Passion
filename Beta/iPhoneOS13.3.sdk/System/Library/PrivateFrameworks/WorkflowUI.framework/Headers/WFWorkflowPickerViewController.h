/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, WFVariable;

@protocol WFVariableProvider, WFWorkflowPickerViewControllerDelegate;

@interface WFWorkflowPickerViewController : UITableViewController

{
    id <WFWorkflowPickerViewControllerDelegate> _delegate;
    NSArray *_workflowNames;
    id <WFVariableProvider> _variableProvider;
    WFVariable *_selectedVariable;
    NSString *_selectedWorkflowName;
    NSArray *_workflows;
    NSArray *_variables;
    NSArray *_filteredWorkflows;
    NSArray *_filteredVariables;
}

@property (retain, nonatomic) NSArray *workflows;
@property (retain, nonatomic) NSArray *variables;
@property (retain, nonatomic) NSArray *filteredWorkflows;
@property (retain, nonatomic) NSArray *filteredVariables;
@property (weak, nonatomic) id <WFWorkflowPickerViewControllerDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *workflowNames;
@property (nonatomic, readonly) id <WFVariableProvider> variableProvider;
@property (retain, nonatomic) WFVariable *selectedVariable;
@property (copy, nonatomic) NSString *selectedWorkflowName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)loadView;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)initWithWorkflowNames:(id)arg1 variableProvider:(id)arg2 allowedVariableTypes:(id)arg3;
- (id)workflowIconForWorkflow:(id)arg1;
- (void)reloadSearchResults;

@end
