/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFParameterComponent.h>

@class WFModuleSummaryBasedParameterComponentStateWriter, WFParameter, WFSlotTemplateSlot;

@protocol WFComponentNavigationContext, WFParameterState, WFVariableProvider, WFVariableUIDelegate;

@interface WFModuleSummaryBasedParameterComponent : WFParameterComponent

{
    WFParameter *_parameter;
    WFModuleSummaryBasedParameterComponentStateWriter *_stateWriter;
    id <WFParameterState> _state;
    WFSlotTemplateSlot *_buttonSlot;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
}

@property (nonatomic, readonly) WFModuleSummaryBasedParameterComponentStateWriter *stateWriter;
@property (nonatomic, readonly) id <WFParameterState> state;
@property (nonatomic, readonly) WFSlotTemplateSlot *buttonSlot;
@property (weak, nonatomic, readonly) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic, readonly) id <WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic, readonly) id <WFComponentNavigationContext> navigationContext;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
+ (id)singleButtonSlotForParameter:(id)arg1 state:(id)arg2;

- (id)parameter;

@end
