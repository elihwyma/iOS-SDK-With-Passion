/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFSpeakTextLanguagePickerParameterMigration : WFWorkflowMigration

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void)migrateWorkflow;
- (void)migrateSpeakTextLanguageParameterInParametersDictionary:(id)arg1;
- (id)availableLanguageCodes;

@end
