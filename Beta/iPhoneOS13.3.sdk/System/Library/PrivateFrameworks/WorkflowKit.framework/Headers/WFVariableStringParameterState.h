/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFVariableString;

@interface WFVariableStringParameterState : NSObject

{
    WFVariableString *_variableString;
    long long _userInputInsertionIndex;
}

@property (copy, nonatomic, readonly) WFVariableString *variableString;
@property (nonatomic, readonly) long long userInputInsertionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)processingValueClass;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVariable:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 isInputParameter:(_Bool)arg3 userInputRequiredHandler:(CDUnknownBlockType)arg4 valueHandler:(CDUnknownBlockType)arg5;
- (id)containedVariables;
- (id)initWithVariableString:(id)arg1 userInputInsertionIndex:(long long)arg2;
- (id)initWithVariableString:(id)arg1;
- (id)parameterStateByRemovingAskVariablesAndPopulatingInsertionIndex;

@end
