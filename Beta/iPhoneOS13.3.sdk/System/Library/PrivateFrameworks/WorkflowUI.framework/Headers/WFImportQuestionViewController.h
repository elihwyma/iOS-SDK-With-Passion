/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSString, UIViewController, WFGradient, WFParameterEditorHostingCell, WFParameterEditorModel, WFWorkflowImportQuestion;

@protocol WFImportQuestionViewControllerDelegate;

@interface WFImportQuestionViewController : UITableViewController

{
    id <WFImportQuestionViewControllerDelegate> _delegate;
    WFWorkflowImportQuestion *_importQuestion;
    WFGradient *_workflowGradient;
    UIViewController *_presenter;
    WFParameterEditorHostingCell *_parameterEditorCell;
    WFParameterEditorModel *_parameterEditorModel;
    struct CGSize _parameterEditorSize;
}

@property (weak, nonatomic) WFParameterEditorHostingCell *parameterEditorCell;
@property (retain, nonatomic) WFParameterEditorModel *parameterEditorModel;
@property (nonatomic) struct CGSize parameterEditorSize;
@property (weak, nonatomic) id <WFImportQuestionViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFWorkflowImportQuestion *importQuestion;
@property (nonatomic, readonly) WFGradient *workflowGradient;
@property (weak, nonatomic) UIViewController *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)parameterEditorCell:(id)arg1 didUpdateParameterState:(id)arg2;
- (void)parameterEditorCellDidInvalidateSize:(id)arg1;
- (void)updateParameterEditorModel;
- (id)initWithImportQuestion:(id)arg1 workflowGradient:(id)arg2;
- (void)reflowParameterEditor;

@end
