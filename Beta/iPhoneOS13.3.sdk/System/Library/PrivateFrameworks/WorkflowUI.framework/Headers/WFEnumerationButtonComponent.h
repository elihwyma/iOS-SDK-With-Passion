/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKCompositeComponent.h>

@class WFEnumerationParameter, WFVariableSubstitutableParameterState;

@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFEnumerationButtonComponent : CKCompositeComponent

{
    _Bool _processing;
    WFEnumerationParameter *_parameter;
    WFVariableSubstitutableParameterState *_state;
    CDUnknownBlockType _updateBlock;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7;

@end
