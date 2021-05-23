/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/Swift-Protocol.h>

@protocol WFParameterState <Swift>

- (unsigned short)isEqual: /* Error: Ran out of types for this method. */;
- (unsigned short)hash;
- (unsigned short)containedVariables;

+ (unsigned short)processingValueClass;

- (unsigned short)initWithVariable: /* Error: Ran out of types for this method. */;
- (unsigned short)processWithVariableSource:parameter:userInputRequiredHandler:valueHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)processWithVariableSource:parameter:environment:userInputRequiredHandler:valueHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)processWithVariableSource:parameter:isInputParameter:userInputRequiredHandler:valueHandler: /* Error: Ran out of types for this method. */;

@end
