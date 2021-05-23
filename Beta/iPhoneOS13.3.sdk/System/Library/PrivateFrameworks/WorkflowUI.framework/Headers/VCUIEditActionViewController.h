/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, WFEditWorkflowViewController, WFWorkflow;

@interface VCUIEditActionViewController : UIViewController

{
    WFWorkflow *_workflow;
    WFEditWorkflowViewController *_workflowViewController;
}

@property (retain, nonatomic) WFEditWorkflowViewController *workflowViewController;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIViewController *componentHostingViewController;

- (void)viewDidLoad;
- (id)initWithWorkflow:(id)arg1;
- (_Bool)workflowViewControllerCanRemoveActions:(id)arg1;

@end
