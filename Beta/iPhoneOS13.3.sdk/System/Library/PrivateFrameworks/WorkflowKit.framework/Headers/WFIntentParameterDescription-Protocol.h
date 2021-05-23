/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/Swift-Protocol.h>

@class NSString;

@protocol WFIntentParameterDescription <Swift>

@property (nonatomic, readonly) NSString *wf_slotName;
@property (nonatomic, readonly) Class wf_objectClass;
@property (nonatomic, readonly) Class wf_facadeClass;
@property (nonatomic, readonly) Class wf_contentItemClass;
@property (nonatomic, readonly) NSString *wf_outputDisplayName;
@property (nonatomic, readonly) _Bool wf_multipleValues;
@property (nonatomic, readonly) Class wf_parameterClass;

- (unsigned short)wf_parameterStateForIntentValue:parameterDefinition: /* Error: Ran out of types for this method. */;
- (unsigned short)wf_contentItemForValue: /* Error: Ran out of types for this method. */;
- (unsigned short)wf_getProcessedIntentValueForParameterValue:parameter:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)wf_updateParameterDictionary:parameterClass: /* Error: Ran out of types for this method. */;
- (unsigned short)wf_processedParameterValueForValue: /* Error: Ran out of types for this method. */;

@end
