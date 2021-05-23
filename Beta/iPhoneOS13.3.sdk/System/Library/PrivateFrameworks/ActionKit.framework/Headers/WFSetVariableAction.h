/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFSetVariableAction : WFAction

- (id)variableName;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)providedVariableNames;
- (id)accessibilityName;

@end
