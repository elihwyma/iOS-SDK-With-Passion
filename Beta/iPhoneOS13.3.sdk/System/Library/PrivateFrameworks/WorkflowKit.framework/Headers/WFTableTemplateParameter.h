/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@interface WFTableTemplateParameter : WFParameter

{
    Class _contentItemClass;
}

@property (nonatomic, readonly) Class contentItemClass;
@property (copy, nonatomic, readonly) id additionalRowSerializedRepresentation;

- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;
- (id)defaultSupportedVariableTypes;
- (id)defaultSerializedRepresentation;
- (_Bool)supportsImportQuestions;

@end
