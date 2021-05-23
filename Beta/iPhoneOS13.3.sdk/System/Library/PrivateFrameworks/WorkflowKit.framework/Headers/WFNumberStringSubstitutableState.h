/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFStringSubstitutableState.h>

@class NSDecimalNumber, NSNumber;

@interface WFNumberStringSubstitutableState : WFStringSubstitutableState

{
    NSNumber *_legacyNumber;
}

@property (retain, nonatomic) NSNumber *legacyNumber;
@property (nonatomic, readonly) NSDecimalNumber *decimalNumber;

+ (Class)processingValueClass;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (id)serializedRepresentation;
- (id)initWithValue:(id)arg1;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;

@end
