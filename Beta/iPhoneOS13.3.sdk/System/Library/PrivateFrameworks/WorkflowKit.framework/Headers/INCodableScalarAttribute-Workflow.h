/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Intents/INCodableScalarAttribute.h>

@interface INCodableScalarAttribute (Workflow)

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (id)wf_contentItemForValue:(id)arg1;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2;

@end
