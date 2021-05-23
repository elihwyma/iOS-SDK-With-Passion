/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFInputContentClassesMigration : WFWorkflowMigration

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
+ (id)addedContentItemClassesByVersion;

- (void)migrateWorkflow;

@end
