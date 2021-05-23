/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFConditionalSubjectParameterState.h>

@class HMCharacteristic, HMHome, HMService, NSDictionary, NSFormatter, WFHMCharacteristicSubstitutableState, WFHMServiceParameterState;

@interface WFHomeAccessoryConditionalSubjectState : WFConditionalSubjectParameterState

{
    _Bool _negatesValue;
    NSDictionary *_serializedWFHMServiceParameter;
    NSDictionary *_serializedWFHMCharacteristicSubstitutableState;
    WFHMServiceParameterState *_serviceParameterState;
    WFHMCharacteristicSubstitutableState *_characteristicSubstitutableState;
    NSFormatter *_characteristicValueFormatter;
}

@property (retain, nonatomic) NSDictionary *serializedWFHMServiceParameter;
@property (retain, nonatomic) NSDictionary *serializedWFHMCharacteristicSubstitutableState;
@property (retain, nonatomic) WFHMServiceParameterState *serviceParameterState;
@property (retain, nonatomic) WFHMCharacteristicSubstitutableState *characteristicSubstitutableState;
@property (retain, nonatomic) NSFormatter *characteristicValueFormatter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMService *service;
@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, readonly) _Bool negatesValue;

+ (id)subjectType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)unit;
- (long long)contentType;
- (id)serializedRepresentation;
- (id)minimumValue;
- (id)maximumValue;
- (id)stepValue;
- (id)maximumLength;
- (id)initWithSerializedWFHMServiceParameter:(id)arg1 serializedWFHMCharacteristicSubstitutableState:(id)arg2 negatesValue:(_Bool)arg3;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithService:(id)arg1 characteristic:(id)arg2 homeIdentifier:(id)arg3 negatesValue:(_Bool)arg4;
- (void)getContentWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isEnumeration;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;

@end
