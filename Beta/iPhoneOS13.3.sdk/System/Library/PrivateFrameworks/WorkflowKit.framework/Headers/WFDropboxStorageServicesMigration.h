/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFDropboxStorageServicesMigration : WFWorkflowMigration

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
+ (id)migrationClassDependencies;

- (void)migrateWorkflow;

@end
