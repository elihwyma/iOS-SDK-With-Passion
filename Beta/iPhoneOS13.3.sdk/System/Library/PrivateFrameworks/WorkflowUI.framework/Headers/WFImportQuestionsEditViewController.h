/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, SSSection, SSSectionedDataSource, UITableView, WFWorkflow, WFWorkflowSettingsLayoutMetrics;

@interface WFImportQuestionsEditViewController : UIViewController

{
    WFWorkflow *_workflow;
    WFWorkflowSettingsLayoutMetrics *_layoutMetrics;
    UITableView *_tableView;
    SSSectionedDataSource *_dataSource;
    SSSection *_addSection;
}

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) SSSectionedDataSource *dataSource;
@property (retain, nonatomic) SSSection *addSection;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (retain, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (id)initWithWorkflow:(id)arg1;
- (void)questionDetailsViewControllerWillDisappear:(id)arg1 withUpdatedImportQuestion:(id)arg2;
- (void)parameterPickerDidCancel:(id)arg1;
- (void)parameterPicker:(id)arg1 didFinishWithParameter:(id)arg2 ofAction:(id)arg3;
- (void)updateFooterText;
- (void)updateEditButton;

@end
