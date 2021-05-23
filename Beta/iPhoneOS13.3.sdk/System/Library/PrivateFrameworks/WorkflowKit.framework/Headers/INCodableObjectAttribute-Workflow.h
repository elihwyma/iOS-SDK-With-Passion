/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Intents/INCodableObjectAttribute.h>

@interface INCodableObjectAttribute (Workflow)

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (id)wf_contentItemForValue:(id)arg1;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2;
- (id)wf_processedParameterValueForValue:(id)arg1;
- (Class)wf_facadeClass;
- (id)mediaTypeFromIntentMediaType:(long long)arg1;

@end
