/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class NSString, SAAlarmObject;

@interface WFAlarmSubstitutableState : WFVariableSubstitutableParameterState

{
    NSString *_localizedTime;
}

@property (nonatomic, readonly) SAAlarmObject *value;
@property (nonatomic, readonly) NSString *localizedTime;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (id)localizedTimeForAlarm:(id)arg1;
+ (void)alarmWithIdentifier:(id)arg1 label:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)searchForAlarms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (_Bool)willProcessToSameValue:(id)arg1;

@end
