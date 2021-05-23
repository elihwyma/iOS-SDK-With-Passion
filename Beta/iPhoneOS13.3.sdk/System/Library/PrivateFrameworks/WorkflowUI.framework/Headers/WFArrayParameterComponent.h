/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFParameterComponent.h>

@class WFArrayParameter, WFArrayParameterState;

@interface WFArrayParameterComponent : WFParameterComponent

{
    WFArrayParameterState *_state;
    WFArrayParameter *_parameter;
    CDUnknownBlockType _updateBlock;
}

@property (weak, nonatomic, readonly) WFArrayParameter *parameter;

+ (Class)stateClass;
+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
+ (_Bool)standaloneVariablesAsContentItems;

- (CDUnknownBlockType)updateBlock;
- (void)arrayEditor:(id)arg1 confirmDeletion:(id)arg2;
- (void)notifyParameterObserverWithValues:(id)arg1 updateItem:(id)arg2;

@end
