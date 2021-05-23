/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UITextView, WFAction, WFGradient, WFParameter, WFParameterEditorHostingCell, WFParameterEditorModel, WFWorkflowImportQuestion, WFWorkflowSettingsLayoutMetrics;

@protocol WFImportQuestionDetailsViewControllerDelegate;

@interface WFImportQuestionDetailsViewController : UITableViewController <Swift>

{
    _Bool _focusOnTextView;
    id <WFImportQuestionDetailsViewControllerDelegate> _delegate;
    WFGradient *_workflowGradient;
    WFWorkflowSettingsLayoutMetrics *_layoutMetrics;
    WFWorkflowImportQuestion *_importQuestion;
    WFParameterEditorModel *_parameterEditorModel;
    WFParameterEditorHostingCell *_parameterEditorCell;
    UITextView *_textView;
    WFParameter *_retainedParameter;
    WFAction *_retainedAction;
    struct CGSize _parameterEditorSize;
}

@property (retain, nonatomic) WFWorkflowImportQuestion *importQuestion;
@property (retain, nonatomic) WFParameterEditorModel *parameterEditorModel;
@property (weak, nonatomic) WFParameterEditorHostingCell *parameterEditorCell;
@property (nonatomic) struct CGSize parameterEditorSize;
@property (nonatomic) _Bool focusOnTextView;
@property (weak, nonatomic) UITextView *textView;
@property (nonatomic, readonly) WFParameter *retainedParameter;
@property (nonatomic, readonly) WFAction *retainedAction;
@property (weak, nonatomic) id <WFImportQuestionDetailsViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFGradient *workflowGradient;
@property (retain, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dismissKeyboard;
- (void)textViewDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (void)invalidateLayoutMetrics;
- (void)parameterEditorCell:(id)arg1 didUpdateParameterState:(id)arg2;
- (void)parameterEditorCellDidInvalidateSize:(id)arg1;
- (id)initWithImportQuestion:(id)arg1 forTypingQuestion:(_Bool)arg2 workflowGradient:(id)arg3;
- (void)updateParameterEditorModel;
- (void)reflowParameterEditorCell;

@end
