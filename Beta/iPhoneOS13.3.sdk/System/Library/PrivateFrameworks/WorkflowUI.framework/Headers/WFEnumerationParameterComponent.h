/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFParameterComponent.h>

@class WFEnumerationParameter, WFEnumerationSegmentedControlComponent, WFVariableSubstitutableParameterState;

@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFEnumerationParameterComponent : WFParameterComponent

{
    _Bool _processing;
    WFEnumerationParameter *_parameter;
    CDUnknownBlockType _updateBlock;
    WFVariableSubstitutableParameterState *_state;
    WFEnumerationSegmentedControlComponent *_segmentedControlComponent;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    id <WFComponentNavigationContext> _navigationContext;
}

@property (nonatomic, readonly) WFVariableSubstitutableParameterState *state;
@property (nonatomic, readonly) WFEnumerationSegmentedControlComponent *segmentedControlComponent;
@property (weak, nonatomic, readonly) id <WFVariableProvider> variableProvider;
@property (weak, nonatomic, readonly) id <WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic, readonly) id <WFComponentNavigationContext> navigationContext;
@property (nonatomic, readonly) _Bool processing;
@property (weak, nonatomic, readonly) WFEnumerationParameter *parameter;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
+ (unsigned long long)variableResultTypeForParameter:(id)arg1;
+ (_Bool)editsMultipleValues;

- (CDUnknownBlockType)updateBlock;

@end
