/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Intents/INCodableEnumAttribute.h>

@interface INCodableEnumAttribute (Workflow)

- (id)wf_outputDisplayName;
- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (id)wf_contentItemForValue:(id)arg1;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2;

@end
