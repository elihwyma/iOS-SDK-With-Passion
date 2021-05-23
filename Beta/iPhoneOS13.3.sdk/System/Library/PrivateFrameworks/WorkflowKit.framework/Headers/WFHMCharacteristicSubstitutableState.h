/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class HMCharacteristic, NSDictionary, NSString;

@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState

{
    HMCharacteristic *_characteristic;
    NSString *_homeIdentifier;
    NSDictionary *_serializedCharacteristic;
}

@property (retain, nonatomic) NSDictionary *serializedCharacteristic;
@property (nonatomic, readonly) NSString *homeIdentifier;
@property (nonatomic, readonly) HMCharacteristic *characteristic;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)containedVariables;
- (id)initWithCharacteristic:(id)arg1 homeIdentifier:(id)arg2;

@end
