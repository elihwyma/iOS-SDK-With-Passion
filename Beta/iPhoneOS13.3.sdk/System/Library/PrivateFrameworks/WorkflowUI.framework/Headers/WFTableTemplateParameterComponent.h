/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFParameterComponent.h>

@class WFTableTemplateParameter, WFTableTemplateParameterState;

@protocol WFVariableProvider;

@interface WFTableTemplateParameterComponent : WFParameterComponent

{
    WFTableTemplateParameterState *_state;
    id <WFVariableProvider> _variableProvider;
    WFTableTemplateParameter *_parameter;
    CDUnknownBlockType _updateBlock;
}

@property (weak, nonatomic, readonly) WFTableTemplateParameter *parameter;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;

- (CDUnknownBlockType)updateBlock;
- (void)handleParameterLayoutPressed;
- (void)rowComponentTapped;
- (void)rowComponent:(id)arg1 deletedAtIndex:(unsigned long long)arg2;
- (void)rowComponent:(id)arg1 minusTappedAtIndex:(unsigned long long)arg2;

@end
