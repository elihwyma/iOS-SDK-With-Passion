/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFNumberStringSubstitutableState;

@interface WFQuantityParameterState : NSObject

{
    WFNumberStringSubstitutableState *_magnitudeState;
    NSString *_unitString;
}

@property (nonatomic, readonly) WFNumberStringSubstitutableState *magnitudeState;
@property (copy, nonatomic, readonly) NSString *unitString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)processingValueClass;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
- (id)initWithMagnitudeState:(id)arg1 unitString:(id)arg2;

@end
