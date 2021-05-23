/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, WFBooleanSubstitutableState, WFByteCountUnitSubstitutableState, WFCalendarUnitSubstitutableState, WFContentProperty, WFDateSubstitutableState, WFNumberStringSubstitutableState, WFVariableStringParameterState, WFVariableSubstitutableParameterState;

@interface WFRowTemplateParameterState : NSObject

{
    NSString *_propertyName;
    _Bool _variablesDisabled;
    _Bool _removable;
    _Bool _bounded;
    _Bool _hidden;
    Class _contentItemClass;
    WFContentProperty *_contentProperty;
    NSArray *_contentProperties;
    long long _comparisonOperator;
    WFVariableSubstitutableParameterState *_enumerationValue;
    WFVariableStringParameterState *_stringValue;
    WFBooleanSubstitutableState *_booleanValue;
    WFNumberStringSubstitutableState *_numberValue;
    WFVariableStringParameterState *_phoneValue;
    WFVariableStringParameterState *_emailValue;
    WFCalendarUnitSubstitutableState *_calendarUnitValue;
    WFByteCountUnitSubstitutableState *_byteCountUnitValue;
    WFDateSubstitutableState *_dateValue;
    WFDateSubstitutableState *_anotherDateValue;
}

@property (nonatomic, readonly) Class contentItemClass;
@property (nonatomic, readonly) WFContentProperty *contentProperty;
@property (copy, nonatomic, readonly) NSArray *contentProperties;
@property (copy, nonatomic, readonly) NSArray *filterableProperties;
@property (nonatomic, readonly) _Bool variablesDisabled;
@property (nonatomic, readonly) long long comparisonOperator;
@property (nonatomic, readonly) _Bool removable;
@property (nonatomic, readonly) _Bool bounded;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) WFVariableSubstitutableParameterState *enumerationValue;
@property (nonatomic, readonly) WFVariableStringParameterState *stringValue;
@property (nonatomic, readonly) WFBooleanSubstitutableState *booleanValue;
@property (nonatomic, readonly) WFNumberStringSubstitutableState *numberValue;
@property (nonatomic, readonly) WFVariableStringParameterState *phoneValue;
@property (nonatomic, readonly) WFVariableStringParameterState *emailValue;
@property (nonatomic, readonly) WFCalendarUnitSubstitutableState *calendarUnitValue;
@property (nonatomic, readonly) WFByteCountUnitSubstitutableState *byteCountUnitValue;
@property (nonatomic, readonly) WFDateSubstitutableState *dateValue;
@property (nonatomic, readonly) WFDateSubstitutableState *anotherDateValue;
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
- (id)initWithPropertyName:(id)arg1 contentItemClass:(Class)arg2 comparisonOperator:(long long)arg3 removable:(_Bool)arg4 bounded:(_Bool)arg5 hidden:(_Bool)arg6;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 contentItemClass:(Class)arg4 variablesDisabled:(_Bool)arg5;
- (_Bool)isValueWithInfoDisplayed:(const struct WFRowTemplateValueInfo *)arg1;
- (id)defaultStateForInfo:(const struct WFRowTemplateValueInfo *)arg1;
- (void)getUserInputRequiredValue:(CDUnknownBlockType)arg1 variableSource:(id)arg2 parameter:(id)arg3;
- (id)actualCopyWithZone:(struct _NSZone *)arg1 propertyName:(id)arg2;
- (id)actualCopyWithZone:(struct _NSZone *)arg1;
- (id)stateBySettingContentProperty:(id)arg1;
- (id)stateBySettingComparisonOperator:(long long)arg1;
- (id)stateBySettingVariablesDisabled:(_Bool)arg1;
- (id)stateBySettingEnumerationValue:(id)arg1;
- (id)stateBySettingStringValue:(id)arg1;
- (id)stateBySettingBooleanValue:(id)arg1;
- (id)stateBySettingNumberValue:(id)arg1;
- (id)stateBySettingPhoneValue:(id)arg1;
- (id)stateBySettingEmailValue:(id)arg1;
- (id)stateBySettingCalendarUnitValue:(id)arg1;
- (id)stateBySettingByteCountUnitValue:(id)arg1;
- (id)stateBySettingDateValue:(id)arg1;
- (id)stateBySettingAnotherDateValue:(id)arg1;

@end
