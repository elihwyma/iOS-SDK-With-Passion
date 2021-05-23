/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIActivityViewController.h>

@class WFFileRepresentation;

@interface WFWorkflowActivityViewController : UIActivityViewController

{
    WFFileRepresentation *_workflowFile;
}

@property (retain, nonatomic) WFFileRepresentation *workflowFile;

- (id)initWithWorkflow:(id)arg1 applicationActivities:(id)arg2;

@end
