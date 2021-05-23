/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFRepeatIndexVariableNameMigration : WFWorkflowMigration

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void)migrateWorkflow;
- (void)calculateVariableNamesAtActionIndex:(unsigned long long)arg1 oldRepeatScopeVariables:(id *)arg2;

@end
