/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFDonatedIntentMigration : WFWorkflowMigration

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
+ (id)parameterConversion;
+ (id)classNameConversion;
+ (id)launchIdConversion;

- (void)migrateWorkflow;
- (_Bool)updateBundleIdentifierForIntent:(id)arg1;
- (_Bool)updateClassNameForIntent:(id)arg1;
- (_Bool)convertParametersAndUpdateIntent:(id *)arg1;

@end
