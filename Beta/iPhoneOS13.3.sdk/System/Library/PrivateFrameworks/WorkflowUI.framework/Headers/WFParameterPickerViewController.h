/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, WFWorkflow, WFWorkflowViewController;

@protocol WFParameterPickerViewControllerDelegate;

@interface WFParameterPickerViewController : UIViewController

{
    WFWorkflow *_workflow;
    id <WFParameterPickerViewControllerDelegate> _delegate;
    WFWorkflowViewController *_workflowViewController;
    NSArray *_excludedParameters;
}

@property (weak, nonatomic) WFWorkflowViewController *workflowViewController;
@property (retain, nonatomic) NSArray *excludedParameters;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (weak, nonatomic) id <WFParameterPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)cancelPressed;
- (id)initWithWorkflow:(id)arg1;
- (id)createModelForAction:(id)arg1;
- (void)component:(id)arg1 didSelectAction:(id)arg2 parameter:(id)arg3;

@end
