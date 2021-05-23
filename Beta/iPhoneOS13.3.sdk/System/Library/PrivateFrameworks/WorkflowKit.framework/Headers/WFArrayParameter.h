/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFParameter.h>

@class NSSet;

@interface WFArrayParameter : WFParameter

{
    _Bool _supportsVariables;
    NSSet *_allowedValueTypes;
}

@property (nonatomic, readonly) _Bool supportsVariables;
@property (nonatomic, readonly) NSSet *allowedValueTypes;

- (id)initWithDefinition:(id)arg1;
- (id)defaultSupportedVariableTypes;
- (Class)stateClass;
- (id)defaultSerializedRepresentation;

@end
