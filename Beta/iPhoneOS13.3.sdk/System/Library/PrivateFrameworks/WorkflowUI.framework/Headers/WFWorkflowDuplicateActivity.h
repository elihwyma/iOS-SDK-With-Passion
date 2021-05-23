/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIActivity.h>

@class WFWorkflow;

@interface WFWorkflowDuplicateActivity : UIActivity

{
    CDUnknownBlockType _dismissToHomeHandler;
    WFWorkflow *_workflow;
}

@property (retain, nonatomic) WFWorkflow *workflow;
@property (copy, nonatomic) CDUnknownBlockType dismissToHomeHandler;

+ (id)workflowFromActivityItems:(id)arg1;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;

@end
