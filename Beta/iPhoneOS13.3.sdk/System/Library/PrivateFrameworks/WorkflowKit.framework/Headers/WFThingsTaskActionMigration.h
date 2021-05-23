/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFWorkflowMigration.h>

@class NSDateFormatter;

@interface WFThingsTaskActionMigration : WFWorkflowMigration

{
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void)migrateWorkflow;

@end
