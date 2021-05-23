/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Intents/INCodableMeasurementAttributeMetadata.h>

@class NSString;

@interface INCodableMeasurementAttributeMetadata (Workflow)

@property (nonatomic, readonly) NSString *wf_measurementType;

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2;
- (_Bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 codableAttribute:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_updateWithParameterState:(id)arg1;
- (void)wf_updateWithParameterValue:(id)arg1;

@end
