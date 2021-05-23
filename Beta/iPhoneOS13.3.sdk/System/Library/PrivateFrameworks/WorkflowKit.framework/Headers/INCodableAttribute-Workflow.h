/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Intents/INCodableAttribute.h>

@class NSString;

@interface INCodableAttribute (Workflow)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *wf_slotName;
@property (nonatomic, readonly) Class wf_objectClass;
@property (nonatomic, readonly) Class wf_facadeClass;
@property (nonatomic, readonly) Class wf_contentItemClass;
@property (nonatomic, readonly) NSString *wf_outputDisplayName;
@property (nonatomic, readonly) _Bool wf_multipleValues;
@property (nonatomic, readonly) Class wf_parameterClass;

- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (id)wf_contentItemForValue:(id)arg1;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2;
- (id)wf_processedParameterValueForValue:(id)arg1;

@end
