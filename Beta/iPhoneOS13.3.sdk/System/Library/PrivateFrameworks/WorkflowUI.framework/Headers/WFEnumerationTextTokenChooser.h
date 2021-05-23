/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTextTokenChooser.h>

@class NSArray, NSString, WFEnumerationParameter, WFVariableSubstitutableParameterState;

@interface WFEnumerationTextTokenChooser : WFTextTokenChooser

{
    WFVariableSubstitutableParameterState *_currentState;
    WFEnumerationParameter *_parameter;
    NSArray *_parameterStates;
    CDUnknownBlockType _selectionHandler;
}

@property (retain, nonatomic) WFEnumerationParameter *parameter;
@property (copy, nonatomic) NSArray *parameterStates;
@property (copy, nonatomic) CDUnknownBlockType selectionHandler;
@property (retain, nonatomic) WFVariableSubstitutableParameterState *currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)presentWithParameter:(id)arg1 state:(id)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4 processing:(_Bool)arg5 sourceView:(id)arg6 sourceRect:(struct CGRect)arg7 viewController:(id)arg8 selectionHandler:(CDUnknownBlockType)arg9;

- (void)dealloc;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)updatePossibleStates;
- (void)updateCurrentState;
- (void)updateAdditionalButtons;

@end
