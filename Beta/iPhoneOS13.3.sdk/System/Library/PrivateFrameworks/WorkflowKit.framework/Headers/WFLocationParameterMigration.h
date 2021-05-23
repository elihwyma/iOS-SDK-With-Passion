/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFLocationParameterMigration : WFWorkflowMigration

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void)migrateWorkflow;

@end
