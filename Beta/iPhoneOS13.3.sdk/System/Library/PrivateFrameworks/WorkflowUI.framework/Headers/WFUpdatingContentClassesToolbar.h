/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFContentClassesToolbar.h>

@class WFWorkflow;

@interface WFUpdatingContentClassesToolbar : WFContentClassesToolbar

{
    WFWorkflow *_workflow;
}

@property (retain, nonatomic) WFWorkflow *workflow;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)accessibilityElementsHidden;

@end
