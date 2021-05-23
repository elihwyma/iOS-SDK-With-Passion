/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Intents/INRunWorkflowIntent.h>

@interface INRunWorkflowIntent (Workflow)

- (id)initWithWorkflowReference:(id)arg1 includeIcon:(_Bool)arg2;
- (id)initWithWorkflowReference:(id)arg1;
- (id)workflowForIntentInDatabase:(id)arg1;
- (void)setIconForAssociatedApplicationInWorkflow:(id)arg1;

@end
