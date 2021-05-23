/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Intents/INCodableFileAttributeMetadata.h>

@interface INCodableFileAttributeMetadata (Workflow)

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (_Bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 codableAttribute:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (id)compatibleFileTypeForContentItem:(id)arg1 availableTypes:(id)arg2;

@end
