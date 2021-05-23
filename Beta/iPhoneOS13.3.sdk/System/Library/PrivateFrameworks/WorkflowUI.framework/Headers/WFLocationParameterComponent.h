/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFParameterComponent.h>

@class WFLocationParameterState, WFParameter;

@protocol WFComponentNavigationContext, WFVariableProvider;

@interface WFLocationParameterComponent : WFParameterComponent

{
    _Bool _processing;
    WFParameter *_parameter;
    CDUnknownBlockType _updateBlock;
    WFLocationParameterState *_state;
    id <WFComponentNavigationContext> _navigationContext;
    id <WFVariableProvider> _variableProvider;
}

@property (nonatomic, readonly) WFLocationParameterState *state;
@property (weak, nonatomic, readonly) id <WFComponentNavigationContext> navigationContext;
@property (nonatomic, readonly) id <WFVariableProvider> variableProvider;
@property (nonatomic) _Bool processing;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;

- (CDUnknownBlockType)updateBlock;
- (id)parameter;

@end
