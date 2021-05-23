/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFInputParameterMigration : WFWorkflowMigration

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (void)migrateWorkflow;
- (id)findActionProvidingInputToActionAtIndex:(unsigned long long)arg1 inWorkflow:(id)arg2 reachedBeginning:(_Bool *)arg3 inputActionIndex:(unsigned long long *)arg4;
- (id)findGetVariableActionProvidingInputToActionAtIndex:(long long)arg1 inWorkflow:(id)arg2;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inObject:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inDictionary:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inArray:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)migrateLegacyInputVariablesInParameterDictionary:(id)arg1 toVariable:(id)arg2;

@end
