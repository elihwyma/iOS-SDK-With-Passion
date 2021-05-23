/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/Swift-Protocol.h>

@class NSArray;

@protocol WFVariableProvider <Swift>

@property (nonatomic, readonly) NSArray *availableVariableNames;
@property (nonatomic, readonly) NSArray *availableOutputActions;
@property (nonatomic, readonly) NSArray *workflowInputClasses;

- (unsigned short)hasAvailableVariables;
- (unsigned short)isVariableWithNameAvailable: /* Error: Ran out of types for this method. */;
- (unsigned short)possibleContentClassesForVariableNamed:context: /* Error: Ran out of types for this method. */;
- (unsigned short)hasAvailableActionOutputVariables;
- (unsigned short)isVariableWithOutputUUIDAvailable: /* Error: Ran out of types for this method. */;
- (unsigned short)actionProvidingVariableWithOutputUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)actionsProvidingVariableName: /* Error: Ran out of types for this method. */;
- (unsigned short)addVariableObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeVariableObserver: /* Error: Ran out of types for this method. */;

@end
