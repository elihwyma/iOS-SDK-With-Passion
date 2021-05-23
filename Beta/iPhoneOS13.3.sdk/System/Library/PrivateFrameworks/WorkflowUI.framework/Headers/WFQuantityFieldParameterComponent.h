/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFParameterComponent.h>

@class WFQuantityFieldParameter, WFQuantityParameterState;

@protocol WFComponentNavigationContext;

@interface WFQuantityFieldParameterComponent : WFParameterComponent

{
    WFQuantityParameterState *_state;
    id <WFComponentNavigationContext> _navigationContext;
    WFQuantityFieldParameter *_parameter;
    CDUnknownBlockType _updateBlock;
}

@property (weak, nonatomic, readonly) WFQuantityFieldParameter *parameter;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;

- (CDUnknownBlockType)updateBlock;
- (void)buttonTapped:(id)arg1;

@end
